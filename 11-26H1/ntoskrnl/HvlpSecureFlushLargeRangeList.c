/*
 * XREFs of HvlpSecureFlushLargeRangeList @ 0x14049C20C
 * Callers:
 *     HvlpSlowFlushListTbEx @ 0x1402F4CD8 (HvlpSlowFlushListTbEx.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 * Callees:
 *     VslFastFlushSecureRangeList @ 0x1402F5A94 (VslFastFlushSecureRangeList.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     VslSlowFlushSecureRangeList @ 0x14049C100 (VslSlowFlushSecureRangeList.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall HvlpSecureFlushLargeRangeList(int a1, unsigned int a2, char *a3)
{
  _QWORD *v3; // rdi
  unsigned int v5; // esi
  char v7; // bp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-20h]
  char v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = 0;
  v13 = 0LL;
  v3 = 0LL;
  v5 = a2;
  v7 = 1;
  v14 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    do
    {
      if ( v3 || (v3 = HvlpAcquireHypercallPage((__int64)&v13, 5, 0LL, 0LL)) != 0LL )
      {
        v8 = 512LL;
        if ( v5 < 0x200 )
          v8 = v5;
        memmove(v3, a3, 8LL * (unsigned int)v8);
        VslSlowFlushSecureRangeList(v15, (__int64)v3, a1, v8, 0, &v16);
      }
      else
      {
        v8 = 11LL;
        if ( v5 < 0xB )
          v8 = v5;
        VslFastFlushSecureRangeList(a1, a3, v8, &v16);
      }
      a3 += 8 * v8;
      v7 = v16 != 0 ? v7 : 0;
      v5 -= v8;
    }
    while ( v5 );
    if ( v3 )
      HvlpReleaseHypercallPage((unsigned int *)&v13, v9, v10, v11);
  }
  return v7;
}
