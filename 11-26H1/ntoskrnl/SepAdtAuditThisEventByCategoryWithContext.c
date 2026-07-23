/*
 * XREFs of SepAdtAuditThisEventByCategoryWithContext @ 0x140A721B0
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x1404491A0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1404A3A20 (SeAuditingFileEventsWithContextEx.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

char __fastcall SepAdtAuditThisEventByCategoryWithContext(
        unsigned int a1,
        int a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  __int64 v4; // rbp
  char v6; // di
  char v7; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  _BYTE *ClientToken; // r8
  unsigned int v11; // edx
  __int16 v12; // r12
  __int16 v13; // r11
  unsigned int v14; // r9d
  int v15; // r10d
  unsigned int v16; // esi
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int8 *v20; // rcx
  int v21; // eax
  __m128i v22; // xmm3
  __m128i v23; // xmm2
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm2
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1;
  v6 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !*((_DWORD *)&SepRmCapTableLock.ApcState.ApcListHead[0].Flink + a1) )
    return 0;
  if ( (*((_DWORD *)&SepRmCapTableLock.ApcState.ApcListHead[0].Flink + a1) & a2) != 0 )
    return 1;
  v7 = 0;
  if ( *((_DWORD *)&SepRmCapTableLock.WaitListEntry.Flink + a1) )
  {
    if ( a3 )
    {
      p_SubjectContext = a3;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[119] == 2 )
      {
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        if ( a1 )
        {
          if ( a1 < 8 )
            goto LABEL_33;
          v22 = 0LL;
          v23 = 0LL;
          do
          {
            v24 = v14 + 4;
            v25 = _mm_unpacklo_epi16(
                    _mm_loadl_epi64((const __m128i *)&ExpPlatformBinaryLock.ApcStateFill[2 * v14 + 16]),
                    (__m128i)0LL);
            v14 += 8;
            v22 = _mm_add_epi32(v22, v25);
            v23 = _mm_add_epi32(
                    v23,
                    _mm_unpacklo_epi16(
                      _mm_loadl_epi64((const __m128i *)&ExpPlatformBinaryLock.ApcStateFill[2 * v24 + 16]),
                      (__m128i)0LL));
          }
          while ( v14 < (a1 & 0xFFFFFFF8) );
          v26 = _mm_add_epi32(v23, v22);
          v27 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
          v11 = _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
          if ( v14 < a1 )
          {
LABEL_33:
            v18 = v14;
            v19 = a1 - v14;
            v20 = &ExpPlatformBinaryLock.ApcStateFill[2 * v18 + 16];
            do
            {
              v21 = *(unsigned __int16 *)v20;
              v20 += 2;
              v11 += v21;
              --v19;
            }
            while ( v19 );
          }
        }
        v15 = *(unsigned __int16 *)&ExpPlatformBinaryLock.ApcStateFill[2 * v4 + 16];
        v16 = v15 + v11;
        while ( v11 < v16 )
        {
          v17 = (unsigned __int8)ClientToken[((unsigned __int64)v11 >> 1) + 88] >> (4 * (v11 & 1));
          if ( (v17 & 1) != 0 )
          {
            if ( (v6 & 2) != 0 )
              goto LABEL_31;
            ++v12;
          }
          if ( (v17 & 4) != 0 )
          {
            if ( (v6 & 0x20) != 0 )
              goto LABEL_31;
            ++v13;
          }
          ++v11;
        }
        if ( (v6 & 1) != 0 && v12 == (_WORD)v15 || (v6 & 0x10) != 0 && v13 == (_WORD)v15 )
LABEL_31:
          v7 = 1;
      }
    }
    else
    {
      SepAuditFailed(-1073741700);
    }
    if ( !a3 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  return v7;
}
