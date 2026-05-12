/*
 * XREFs of NvmeAdapterQueryLedState @ 0x14008F2B8
 * Callers:
 *     NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl @ 0x1401AC8C0 (NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl.c)
 * Callees:
 *     NvmeDsmQuerySupportedFunctionForLedState @ 0x14008FB0C (NvmeDsmQuerySupportedFunctionForLedState.c)
 *     NvmeGetNpemControlInterface @ 0x14008FCE8 (NvmeGetNpemControlInterface.c)
 *     RaidDsmGetLedState @ 0x140093B34 (RaidDsmGetLedState.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeAdapterQueryLedState(__int64 a1, unsigned int *a2)
{
  int SupportedFunctionForLedState; // eax
  __int64 v5; // rax
  int NpemControlInterface; // ebx
  unsigned int (__fastcall *v7)(_QWORD); // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && a2 )
  {
    LODWORD(v11) = 0;
    SupportedFunctionForLedState = NvmeDsmQuerySupportedFunctionForLedState();
    if ( SupportedFunctionForLedState >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( !v5 )
        return (unsigned int)-1073741823;
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 592) + 152LL) & 5) != 5 )
        goto LABEL_10;
      SupportedFunctionForLedState = RaidDsmGetLedState(a1, &v11);
      NpemControlInterface = SupportedFunctionForLedState;
      if ( SupportedFunctionForLedState >= 0 )
      {
        *a2 = ((unsigned int)v11 >> 2) & 0x1FF;
LABEL_16:
        v8 = *(_QWORD *)(a1 + 64);
        v9 = *(_QWORD *)(v8 + 144);
        if ( (v9 & 0x40000) == 0 )
          *(_QWORD *)(v8 + 144) = v9 | 0x40000;
        return (unsigned int)NpemControlInterface;
      }
    }
    NpemControlInterface = SupportedFunctionForLedState;
    if ( SupportedFunctionForLedState != -1073741637 )
      return (unsigned int)NpemControlInterface;
LABEL_10:
    v11 = 0LL;
    NpemControlInterface = NvmeGetNpemControlInterface(a1, &v11);
    if ( NpemControlInterface >= 0 )
    {
      if ( *(_WORD *)(v11 + 2) >= 2u && (v7 = *(unsigned int (__fastcall **)(_QWORD))(v11 + 56)) != 0LL )
        *a2 = (v7(*(_QWORD *)(v11 + 8)) >> 2) & 0x3FF;
      else
        NpemControlInterface = -1073741637;
    }
    if ( NpemControlInterface < 0 )
      return (unsigned int)NpemControlInterface;
    goto LABEL_16;
  }
  return 3221225485LL;
}
