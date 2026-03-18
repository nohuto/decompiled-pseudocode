/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x14009BA60
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140125A90 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     CreateTlgAggregateSession @ 0x14009BB88 (CreateTlgAggregateSession.c)
 *     ComputeFlushPeriod @ 0x1400C480C (ComputeFlushPeriod.c)
 *     DestroyAggregateSession @ 0x1400C489C (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1400C4AD0 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2)
{
  __int64 TlgAggregateSession; // rax
  void *v3; // rbx
  int v5; // esi
  __int64 *i; // rax
  __int64 v7; // rcx

  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v3 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14008A048);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_14008A048;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v5 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14008A048);
  if ( v5 < 0 )
  {
    qword_14008A070 = 0LL;
    DestroyAggregateSession(v3);
    return (unsigned int)v5;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_14008AB48, 0LL);
    if ( !qword_14008AB50 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14008A080);
    for ( i = &qword_14008AB50; ; i = (__int64 *)(v7 + 352) )
    {
      v7 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v7 + 344) == &dword_14008A048 )
        goto LABEL_11;
    }
    *i = (__int64)v3;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_14008AB48, 0LL);
    return 0LL;
  }
}
