/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1403E7DF8
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1403E755C (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14032BEF0 (HvlpCopyFlushVaList.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403E77FC (HvlpAffinityToHvProcessorSet.c)
 *     VslSlowFlushSecureRangeList @ 0x1404A26E0 (VslSlowFlushSecureRangeList.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1404A27EC (HvlpSecureFlushLargeRangeList.c)
 *     VslFlushSecureAddressSpace @ 0x1404A28FC (VslFlushSecureAddressSpace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall HvlpSlowFlushListTbEx(
        _QWORD *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        __int64 *a6,
        unsigned int a7)
{
  char v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // r12d
  unsigned int v19; // eax
  char v20; // si
  char v22[8]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v23; // [rsp+40h] [rbp-69h]
  int v24; // [rsp+48h] [rbp-61h]
  __int64 *v25; // [rsp+50h] [rbp-59h]
  __int128 v26; // [rsp+58h] [rbp-51h] BYREF
  __int64 v27; // [rsp+68h] [rbp-41h]
  unsigned __int64 v28; // [rsp+70h] [rbp-39h]
  __int64 v29; // [rsp+78h] [rbp-31h]
  _BYTE v30[64]; // [rsp+80h] [rbp-29h] BYREF

  v25 = a6;
  v29 = a2;
  v27 = 0LL;
  LODWORD(v28) = 0;
  v24 = 0;
  v10 = 1;
  v11 = 0LL;
  v26 = 0LL;
  v12 = HvlpAcquireHypercallPage((__int64)&v26, 1, (__int64)v30, 32LL);
  v16 = v12;
  if ( (v26 & 2) != 0 )
  {
    if ( a4 )
    {
      *v12 = *a1;
      v12[1] = a1[1];
      v12[3] = 0LL;
      v11 = 19LL;
      v12[2] = 1LL;
    }
  }
  else
  {
    if ( a4 )
    {
      v17 = v29;
      *v12 = *a1;
      v12[1] = a1[1];
      v18 = HvlpAffinityToHvProcessorSet(v17, v12 + 2, 0xFE0u);
      v19 = v18 + 32;
      v24 = v18 + 32;
    }
    else
    {
      v18 = 0;
      v19 = 0;
    }
    v14 = v19;
    if ( v19 + 8 * (unsigned __int64)a7 > 0x1000 )
    {
      if ( a3 == 2 )
      {
        if ( a4 )
          memmove(v30, v16, v19);
        HvlpReleaseHypercallPage((unsigned int *)&v26, v13, v14, v15);
        LODWORD(v16) = (unsigned int)HvlpAcquireHypercallPage((__int64)&v26, 9, (__int64)v30, 32LL);
      }
      if ( a4 )
      {
        v23 = ((v18 + 7) << 14) & 0x3FE0000 | 0x13LL;
        v11 = v23;
      }
    }
    else
    {
      HvlpCopyFlushVaList(a5, v25, (HvlpFlags & 0x2000) != 0, (__int64)v16 + v19);
      if ( a4 )
      {
        if ( (HvlpFlags & 0x2000) == 0 )
          v16[1] |= 8uLL;
        LODWORD(v23) = ((v18 + 7) << 14) & 0x3FE0000 | 0x14;
        HIDWORD(v23) = a7 & 0xFFF;
        v11 = v23;
      }
      v10 = 0;
    }
  }
  if ( !a3 )
    goto LABEL_26;
  v20 = 0;
  v22[0] = 0;
  if ( v10 )
  {
    if ( a3 == 2 )
      v20 = HvlpSecureFlushLargeRangeList(2LL, a5, v25);
    else
      VslFlushSecureAddressSpace();
  }
  else
  {
    VslSlowFlushSecureRangeList(v28, (_DWORD)v16, a3, a7, v24, (__int64)v22);
    v20 = v22[0];
  }
  if ( !v20 )
  {
LABEL_26:
    if ( a4 )
      HvcallInitiateHypercall(v11, v28);
  }
  return HvlpReleaseHypercallPage((unsigned int *)&v26, v13, v14, v15);
}
