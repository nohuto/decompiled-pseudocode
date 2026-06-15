/*
 * XREFs of sub_140065710 @ 0x140065710
 * Callers:
 *     <none>
 * Callees:
 *     sub_140065550 @ 0x140065550 (sub_140065550.c)
 */

__int64 __fastcall sub_140065710(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  LPVOID v7; // r8
  __int64 v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v7 = CoTaskMemAlloc(0xB0uLL);
  if ( v7 )
  {
    v10 = 0;
    sub_140065550(v6, &v10, (__int64)v7);
    *a2 = 11;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
