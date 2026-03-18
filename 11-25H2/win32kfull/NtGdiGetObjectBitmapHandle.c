/*
 * XREFs of NtGdiGetObjectBitmapHandle @ 0x140339D40
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectBitmapHandle @ 0x1400E43A0 (GreGetObjectBitmapHandle.c)
 */

HBRUSH __fastcall NtGdiGetObjectBitmapHandle(HBRUSH a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 ObjectBitmapHandle; // r8
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  if ( ((((unsigned int)a1 & 0x7F0000) - 0x100000) & 0xFFBFFFFF) != 0 )
    return a1;
  ObjectBitmapHandle = GreGetObjectBitmapHandle(a1, &v7, a3, a4);
  if ( ObjectBitmapHandle )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v7;
  }
  return (HBRUSH)ObjectBitmapHandle;
}
