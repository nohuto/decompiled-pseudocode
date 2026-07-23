/*
 * XREFs of BiDeleteKey @ 0x1409A2588
 * Callers:
 *     BcdDeleteObject @ 0x140897504 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwDeleteKey @ 0x140729B40 (ZwDeleteKey.c)
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x1409A2660 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  void *v1; // rbx
  int v2; // eax
  PVOID v3; // rdi
  NTSTATUS v4; // edi
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v1 = (void *)(a1 & 0xFFFFFFFFFFFFFFFDuLL);
  Handle = 0LL;
  P = 0LL;
  v2 = BiEnumerateSubKeys(a1 & 0xFFFFFFFFFFFFFFFDuLL, &P, &v8);
  v3 = P;
  if ( v2 >= 0 && v8 )
  {
    v6 = P;
    v7 = v8;
    do
    {
      if ( (int)BiOpenKey(v1, *v6, 983103LL, &Handle) >= 0 && (int)BiDeleteKey(Handle) < 0 )
        BiCloseKey(Handle);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  v4 = ZwDeleteKey(v1);
  if ( v4 >= 0 )
    ZwClose(v1);
  return (unsigned int)v4;
}
