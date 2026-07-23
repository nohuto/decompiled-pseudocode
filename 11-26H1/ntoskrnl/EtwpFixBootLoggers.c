/*
 * XREFs of EtwpFixBootLoggers @ 0x140CE814C
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1403E02A0 (KeReleaseMutant.c)
 *     EtwpStartLoggerThread @ 0x1404DE2D0 (EtwpStartLoggerThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1408FC870 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEnableKernelTrace @ 0x140A00560 (EtwpEnableKernelTrace.c)
 *     EtwpFreeSecurityDescriptor @ 0x140A93F98 (EtwpFreeSecurityDescriptor.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x140AB28FC (EtwpInitializeLoggerSecurityDescriptor.c)
 */

__int64 EtwpFixBootLoggers()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // r14
  unsigned int *v4; // rax
  __int64 v5; // rsi
  __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+30h] [rbp-40h] BYREF
  void *v13; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF

  v0 = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v1 = EtwpHostSiloState;
  v2 = 4;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  v3 = 2LL;
  if ( *(_DWORD *)(EtwpHostSiloState + 16) > 4u )
  {
    do
    {
      v4 = EtwpAcquireLoggerContextByLoggerId(v1, v2, 0);
      v5 = (__int64)v4;
      if ( v4 )
      {
        if ( (v4[204] & 0x80000000) != 0 )
        {
          EtwpGetSecurityDescriptorByGuid(v4 + 69, &v13);
          EtwpInitializeLoggerSecurityDescriptor(v5, v13);
          EtwpFreeSecurityDescriptor(&v13);
          ClientSecurityQos.Length = 12;
          ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
          *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
          SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v5 + 704));
          v6 = *(__int64 **)(v5 + 1360);
          *(_QWORD *)(v5 + 304) = *(_QWORD *)&stru_140F03830.NextProcessor;
          EtwpStartLoggerThread(*v6, v5);
        }
        EtwpReleaseLoggerContext((unsigned int *)v5, 0);
      }
      v1 = EtwpHostSiloState;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(EtwpHostSiloState + 16) );
  }
  v7 = 0LL;
  v8 = 2LL;
  do
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)&stru_140FC11F0.Padding[v7 / 8 + 4]);
    v10 = (__m128)_mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v7 / 0x10]);
    v7 += 16LL;
    *(__m128 *)(&ClientSecurityQos.ContextTrackingMode + v7) = _mm_and_ps(v9, v10);
    --v8;
  }
  while ( v8 );
  if ( (int)EtwpEnableKernelTrace(
              (char *)PerfGlobalGroupMask,
              (__int64 (__fastcall *)(__int64, int, unsigned int, __int16, unsigned __int8))v14,
              (_QWORD *)EtwpHostSiloState,
              0) < 0 )
  {
    KeWaitForSingleObject(&stru_140F03830.880, Executive, 0, 0, 0LL);
    do
    {
      PerfGlobalGroupMask[v0] = (__int128)_mm_and_ps(
                                            _mm_andnot_ps(
                                              (__m128)_mm_loadu_si128((const __m128i *)&v14[v0]),
                                              (__m128)_xmm_ffffffffffffffffffffffffffffffff),
                                            (__m128)_mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v0]));
      ++v0;
      --v3;
    }
    while ( v3 );
    KeReleaseMutant((PRKMUTANT)&stru_140F03830.880, 1, 0, 0);
  }
  return 0LL;
}
