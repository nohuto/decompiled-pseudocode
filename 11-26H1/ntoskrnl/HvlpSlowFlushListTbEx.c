/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1402F4CD8
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1402F443C (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14032DF20 (HvlpCopyFlushVaList.c)
 *     VslSlowFlushSecureRangeList @ 0x14049C100 (VslSlowFlushSecureRangeList.c)
 *     HvlpSecureFlushLargeRangeList @ 0x14049C20C (HvlpSecureFlushLargeRangeList.c)
 *     VslFlushSecureAddressSpace @ 0x14049C31C (VslFlushSecureAddressSpace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlpSlowFlushListTbEx(
        _QWORD *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  char v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // eax
  __int64 v17; // r8
  char v18; // si
  char v20[8]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v21; // [rsp+40h] [rbp-69h]
  int v22; // [rsp+48h] [rbp-61h]
  __int64 v23; // [rsp+50h] [rbp-59h]
  __int128 v24; // [rsp+58h] [rbp-51h] BYREF
  __int64 v25; // [rsp+68h] [rbp-41h]
  __int64 v26; // [rsp+70h] [rbp-39h]
  __int64 v27; // [rsp+78h] [rbp-31h]
  _BYTE v28[64]; // [rsp+80h] [rbp-29h] BYREF

  v23 = a6;
  v27 = a2;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v22 = 0;
  v10 = 1;
  v11 = 0LL;
  v24 = 0LL;
  v12 = (_QWORD *)HvlpAcquireHypercallPage(&v24, 1LL, v28, 32LL);
  v13 = v12;
  if ( (v24 & 2) != 0 )
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
      v14 = v27;
      *v12 = *a1;
      v12[1] = a1[1];
      v15 = HvlpAffinityToHvProcessorSet(v14, v12 + 2, 0xFE0u);
      v16 = v15 + 32;
      v22 = v15 + 32;
    }
    else
    {
      v15 = 0;
      v16 = 0;
    }
    if ( v16 + 8 * (unsigned __int64)a7 > 0x1000 )
    {
      if ( a3 == 2 )
      {
        if ( a4 )
          memmove(v28, v13, v16);
        HvlpReleaseHypercallPage(&v24);
        LODWORD(v13) = HvlpAcquireHypercallPage(&v24, 9LL, v28, 32LL);
      }
      if ( a4 )
      {
        v21 = ((v15 + 7) << 14) & 0x3FE0000 | 0x13LL;
        v11 = v21;
      }
    }
    else
    {
      v17 = HvlpFlags >> 13;
      LOBYTE(v17) = (HvlpFlags & 0x2000) != 0;
      HvlpCopyFlushVaList(a5, v23, v17, (char *)v13 + v16);
      if ( a4 )
      {
        if ( (HvlpFlags & 0x2000) == 0 )
          v13[1] |= 8uLL;
        LODWORD(v21) = ((v15 + 7) << 14) & 0x3FE0000 | 0x14;
        HIDWORD(v21) = a7 & 0xFFF;
        v11 = v21;
      }
      v10 = 0;
    }
  }
  if ( !a3 )
    goto LABEL_26;
  v18 = 0;
  v20[0] = 0;
  if ( v10 )
  {
    if ( a3 == 2 )
      v18 = HvlpSecureFlushLargeRangeList(2LL, a5, v23);
    else
      VslFlushSecureAddressSpace();
  }
  else
  {
    VslSlowFlushSecureRangeList(v26, (_DWORD)v13, a3, a7, v22, (__int64)v20);
    v18 = v20[0];
  }
  if ( !v18 )
  {
LABEL_26:
    if ( a4 )
      HvcallInitiateHypercall(v11, v26, 0LL);
  }
  return HvlpReleaseHypercallPage(&v24);
}
