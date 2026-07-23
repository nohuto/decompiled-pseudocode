/*
 * XREFs of MUIRegistrySystemRoutine @ 0x140849990
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140724660 (RtlpMuiRegCreateKernelRegistryInfo.c)
 */

void __fastcall MUIRegistrySystemRoutine(__int64 a1)
{
  int KernelRegistryInfo; // eax
  __int64 v3; // rcx

  if ( a1 )
  {
    KernelRegistryInfo = RtlpMuiRegCreateKernelRegistryInfo(
                           (_QWORD *)(a1 + 8),
                           (_DWORD *)(a1 + 16),
                           (_DWORD *)(a1 + 20),
                           *(_DWORD *)(a1 + 24),
                           (_DWORD *)(a1 + 28),
                           *(_DWORD *)(a1 + 32),
                           (_DWORD *)(a1 + 36));
    *(_DWORD *)(a1 + 40) = KernelRegistryInfo;
    if ( KernelRegistryInfo >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 8);
      if ( v3 )
        *(_DWORD *)(v3 + 12) = MEMORY[0xFFFFF780000003A4];
    }
    if ( *(_QWORD *)a1 )
      KeSetEvent(*(PRKEVENT *)a1, 1, 0);
  }
}
