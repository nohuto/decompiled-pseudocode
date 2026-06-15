/*
 * XREFs of sub_140088E20 @ 0x140088E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_140088E20(__int64 a1, void *a2, unsigned __int64 nOutBufferSize)
{
  int v3; // ebx
  void *v4; // rcx
  __int64 v5; // r9
  unsigned int v7; // ebx
  int v8; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v10; // [rsp+60h] [rbp+18h] BYREF

  v3 = nOutBufferSize;
  if ( nOutBufferSize > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    v8 = 394;
  }
  else
  {
    v4 = *(void **)(a1 + 24);
    v10 = 0;
    if ( !DeviceIoControl(v4, 0x220008u, a2, nOutBufferSize, a2, nOutBufferSize, &v10, 0LL) )
      return sub_1400470EC(
               (int)retaddr,
               397,
               (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
               v5);
    if ( v3 == v10 )
      return 0LL;
    v7 = -2147418113;
    v8 = 398;
  }
  sub_14000C2A8(
    (int)retaddr,
    v8,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v7);
  return v7;
}
