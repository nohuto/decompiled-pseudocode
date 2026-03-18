/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x1405BE9FC
 * Callers:
 *     HvlAcknowledgePageRequest @ 0x1405BBAE0 (HvlAcknowledgePageRequest.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1405BE950 (HvlpFastAcknowledgePageRequest.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, const void *a2, int *a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  unsigned __int64 v13; // [rsp+38h] [rbp-10h]
  __int64 v14; // [rsp+68h] [rbp+20h]
  __int64 v15; // [rsp+68h] [rbp+20h]

  v3 = a1;
  v11 = 0LL;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v11, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 32 * v3);
    LODWORD(v14) = 166;
    HIDWORD(v14) = v3 & 0xFFF;
    v15 = HvcallInitiateHypercall(v14, v13);
    HvlpReleaseHypercallPage((unsigned int *)&v11, v8, v9, v10);
    *a3 = WORD2(v15) & 0xFFF;
    return (unsigned __int16)v15;
  }
  else
  {
    if ( (unsigned int)v3 >= 3 )
      LODWORD(v3) = 3;
    return HvlpFastAcknowledgePageRequest(v3, (unsigned __int64)a2, a3);
  }
}
