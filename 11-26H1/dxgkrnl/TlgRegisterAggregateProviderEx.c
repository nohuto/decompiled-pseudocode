/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x14028A618
 * Callers:
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x14007A494 (-DxgkInitializeTelemetry@@YAXXZ.c)
 * Callees:
 *     RunningHash @ 0x14005A400 (RunningHash.c)
 *     FinishHash @ 0x14006D538 (FinishHash.c)
 *     CreateTlgAggregateSession @ 0x14028A280 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x14028A3D8 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140427548 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(PVOID CallbackContext, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned int v4; // ebp
  bool v5; // bl
  unsigned __int64 TlgAggregateSession; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  __int128 v12; // xmm0
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 *i; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+20h] BYREF

  v19 = a3;
  v4 = a4 & 0xF;
  v5 = a4 < 0;
  if ( v4 >= 3 )
    return 3221225485LL;
  TlgAggregateSession = (unsigned __int64)CreateTlgAggregateSession(a4 < 0, v4 != 0);
  v10 = (_QWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext);
  *(_QWORD *)(TlgAggregateSession + 328) = a2;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = CallbackContext;
  *(_BYTE *)(TlgAggregateSession + 373) = v5;
  if ( v4 )
  {
    v20 = 0;
    v11 = 600000;
    if ( v4 != 1 )
      v11 = 60000;
    v12 = *(_OWORD *)(*((_QWORD *)CallbackContext + 1) - 16LL);
    v19 = TlgAggregateSession >> 4;
    v18 = v12;
    RunningHash((int *)&v20, (__int64)&v18, 0x10uLL);
    RunningHash((int *)&v20, (__int64)&v19, 8uLL);
    FinishHash(&v20);
    *((_DWORD *)v10 + 92) = v11 + v20 % v11;
  }
  v14 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext);
  if ( v14 < 0 )
  {
    *((_QWORD *)CallbackContext + 5) = 0LL;
    DestroyAggregateSession(v10, v13, v15);
    return (unsigned int)v14;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_140169760, 0LL);
    if ( !qword_140169768 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140167078);
    for ( i = &qword_140169768; ; i = (__int64 *)(v17 + 352) )
    {
      v17 = *i;
      if ( !*i )
        break;
      if ( *(PVOID *)(v17 + 344) == CallbackContext )
        goto LABEL_17;
    }
    *i = (__int64)v10;
LABEL_17:
    ExReleasePushLockExclusiveEx(&unk_140169760, 0LL);
    return 0LL;
  }
}
