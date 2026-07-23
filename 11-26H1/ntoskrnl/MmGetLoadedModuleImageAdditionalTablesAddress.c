/*
 * XREFs of MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403ED4E0
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x1404294E0 (MiUpdateDriverLoadInProgress.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405D2CE8 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x1405D83A0 (IopMarkPagesForLoadedDriverInformation.c)
 *     MmGetLoadedModuleDriverProxyEndpointTableAddress @ 0x1406EBC98 (MmGetLoadedModuleDriverProxyEndpointTableAddress.c)
 *     MmMarkImageForHiberPhase @ 0x140C076D8 (MmMarkImageForHiberPhase.c)
 *     MiMarkHotPatchForHiberPhase @ 0x140C07980 (MiMarkHotPatchForHiberPhase.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140C079E4 (MiMarkHotPatchesForHiberPhase.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MmGetLoadedModuleImageAdditionalTablesAddress(__int64 a1, int *a2)
{
  unsigned __int64 v2; // r9
  int SListFaultAddress_high; // r10d
  int v4; // r11d
  char *v5; // r8
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-30h]
  unsigned __int64 v15; // [rsp+8h] [rbp-28h]
  unsigned __int64 v16; // [rsp+10h] [rbp-20h]
  unsigned __int64 v17; // [rsp+18h] [rbp-18h]
  __int64 v18; // [rsp+20h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( (PVOID)v2 == PsNtosImageBase || (PVOID)v2 == PsHalImageBase )
    SListFaultAddress_high = HIDWORD(stru_140E366D8.SListFaultAddress);
  else
    SListFaultAddress_high = HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget);
  *a2 = SListFaultAddress_high;
  if ( !SListFaultAddress_high )
    return 0LL;
  v4 = 4;
  v5 = (char *)(v2 + *(unsigned int *)(a1 + 64));
  v15 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 4LL;
  while ( 1 )
  {
    v7 = *(&v14 + v6--);
    --v4;
    v8 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v10 = *(_QWORD *)v7;
      if ( (v8 & 1) == 0 )
        return (unsigned __int64)v5;
      if ( ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v13 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v13 & 0x20) != 0 )
              LOBYTE(v10) = v8 | 0x20;
            LOBYTE(v8) = v10 | 0x42;
            if ( (v13 & 0x42) == 0 )
              LOBYTE(v8) = v10;
          }
        }
      }
    }
    if ( (v8 & 1) == 0 )
      return (unsigned __int64)v5;
    if ( (v8 & 0x80u) != 0LL )
      break;
    if ( v6 == 1 )
      return (unsigned __int64)v5;
  }
  if ( v4 )
    return (unsigned __int64)(v5 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  return (unsigned __int64)v5;
}
