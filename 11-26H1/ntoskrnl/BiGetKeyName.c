/*
 * XREFs of BiGetKeyName @ 0x1409A4FC4
 * Callers:
 *     BiCreateBootEntry @ 0x140899C64 (BiCreateBootEntry.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409A0B80 (BiBindEfiEntryToBcdObject.c)
 *     BiGetObjectIdentifier @ 0x1409A4F60 (BiGetObjectIdentifier.c)
 * Callees:
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetKeyName(unsigned __int64 a1, _QWORD *a2)
{
  unsigned int i; // r14d
  unsigned int *Pool2; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _WORD *v8; // rax
  _WORD *v9; // r12
  ULONG Length; // [rsp+88h] [rbp+20h] BYREF

  for ( i = 0; ; ++i )
  {
    a1 &= ~2uLL;
    Pool2 = 0LL;
    Length = 0;
    v6 = ZwQueryKey((HANDLE)a1, KeyBasicInformation, 0LL, 0, &Length);
    v7 = v6;
    if ( v6 == -1073741789 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(0x102uLL);
      if ( !Pool2 )
        goto LABEL_4;
      v7 = ZwQueryKey((HANDLE)a1, KeyBasicInformation, Pool2, Length, &Length);
      if ( v7 >= 0 )
      {
        v8 = (_WORD *)ExAllocatePool2(0x102uLL);
        v9 = v8;
        if ( !v8 )
        {
LABEL_4:
          v7 = -1073741670;
          goto LABEL_5;
        }
        memmove(v8, Pool2 + 4, Pool2[3]);
        v9[(unsigned __int64)Pool2[3] >> 1] = 0;
        *a2 = v9;
      }
    }
    else if ( v6 >= 0 )
    {
      v7 = -1073741811;
    }
LABEL_5:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    if ( v7 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v7;
}
