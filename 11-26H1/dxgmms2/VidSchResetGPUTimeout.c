/*
 * XREFs of VidSchResetGPUTimeout @ 0x1400C0650
 * Callers:
 *     VidSchRestartAdapter @ 0x1400C3950 (VidSchRestartAdapter.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchResetGPUTimeout(__int64 a1)
{
  unsigned int i; // r9d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 88); *(_DWORD *)(*(_QWORD *)v5 + 496LL) = 0 )
  {
    v3 = *(_QWORD *)(a1 + 696);
    if ( i < *(_DWORD *)(a1 + 768) )
      v3 += 8LL * i;
    *(_DWORD *)(*(_QWORD *)v3 + 440LL) = 0;
    v4 = *(_QWORD *)(a1 + 696) + 8LL * i;
    if ( i >= *(_DWORD *)(a1 + 768) )
      v4 = *(_QWORD *)(a1 + 696);
    *(_DWORD *)(*(_QWORD *)v4 + 444LL) = 0;
    v5 = *(_QWORD *)(a1 + 696) + 8LL * i;
    if ( i >= *(_DWORD *)(a1 + 768) )
      v5 = *(_QWORD *)(a1 + 696);
    ++i;
  }
}
