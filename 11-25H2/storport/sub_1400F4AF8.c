/*
 * XREFs of sub_1400F4AF8 @ 0x1400F4AF8
 * Callers:
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400F384C @ 0x1400F384C (sub_1400F384C.c)
 *     sub_1400F4034 @ 0x1400F4034 (sub_1400F4034.c)
 *     sub_1400F443C @ 0x1400F443C (sub_1400F443C.c)
 *     sub_1400F4774 @ 0x1400F4774 (sub_1400F4774.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F4AF8(__int64 a1, _WORD *a2, UCHAR *a3)
{
  __int64 v6; // rbx
  __int64 i; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  UCHAR *v10; // r8
  int v11; // ecx
  UCHAR Dst[256]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v6 = *(_QWORD *)(a1 + 96) + 1576LL;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(*(_QWORD *)(a1 + 96) + i + 3) = *(_BYTE *)(v6 + i + 8);
  *(_DWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = *(_DWORD *)(v6 + 12);
  memmove((void *)(*(_QWORD *)(a1 + 96) + 1064LL), (const void *)(v6 + 16), *(unsigned __int8 *)(v6 + 6));
  v8 = *(_QWORD *)(a1 + 96);
  v9 = a1;
  if ( *(_BYTE *)(v8 + 4) )
  {
    v11 = sub_1400F4774(a1);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v11 = sub_1400F443C(a1, v6);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v11 = sub_1400F384C(a1, *(unsigned __int8 *)(v6 + 6), Dst);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v10 = Dst;
    v9 = a1;
  }
  else
  {
    v10 = (UCHAR *)(v8 + 1064);
  }
  v11 = sub_1400F4034(v9, *(unsigned __int8 *)(v6 + 6), v10, a3);
  if ( v11 >= 0 )
    *a2 = *(unsigned __int8 *)(v6 + 6);
  return (unsigned int)v11;
}
