/*
 * XREFs of PsQuerySystemDllInfo @ 0x1409E8308
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1404CEE90 (PspWow64PickBestNtdll.c)
 *     MiCheckSystemDllUnmap @ 0x1409E6908 (MiCheckSystemDllUnmap.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x1409E82B0 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     PspInitializeSystemDlls @ 0x140CDEF00 (PspInitializeSystemDlls.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140CDFA00 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQuerySystemDllInfo(int a1)
{
  __int64 v1; // rcx

  v1 = *(__int64 *)((char *)&ExpPlatformBinaryLock.116 + 8 * a1 + 4);
  if ( v1 )
    return (v1 + 8) & -(__int64)(*(_QWORD *)(v1 + 32) != 0LL);
  else
    return 0LL;
}
