/*
 * XREFs of sub_140079FC0 @ 0x140079FC0
 * Callers:
 *     sub_14007A040 @ 0x14007A040 (sub_14007A040.c)
 * Callees:
 *     sub_140079318 @ 0x140079318 (sub_140079318.c)
 */

__int64 __fastcall sub_140079FC0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    v10 = 1;
    *v6 = xmmword_1400CBB40;
    sub_140079318(v7, &v10, (__int64)v6);
    *a2 = 3;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
