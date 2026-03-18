/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1402D3480
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1402D2008 (DestroyAggregateSession.c)
 *     CreateTlgAggregateSession @ 0x1402D358C (CreateTlgAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402D36E4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(_QWORD *CallbackContext)
{
  _QWORD *v1; // rdi
  __int64 TlgAggregateSession; // rax
  _QWORD *v3; // rbx
  int v5; // esi
  __int64 *i; // rax
  __int64 v7; // rcx

  v1 = CallbackContext;
  LOBYTE(CallbackContext) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(CallbackContext, 0LL);
  v3 = (_QWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v1);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = v1;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v5 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v1);
  if ( v5 < 0 )
  {
    v1[5] = 0LL;
    DestroyAggregateSession(v3);
    return (unsigned int)v5;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1402AD8D8, 0LL);
    if ( !qword_1402AD8D0 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402AA188);
    for ( i = &qword_1402AD8D0; ; i = (__int64 *)(v7 + 352) )
    {
      v7 = *i;
      if ( !*i )
        break;
      if ( *(_QWORD **)(v7 + 344) == v1 )
        goto LABEL_11;
    }
    *i = (__int64)v3;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_1402AD8D8);
    return 0LL;
  }
}
