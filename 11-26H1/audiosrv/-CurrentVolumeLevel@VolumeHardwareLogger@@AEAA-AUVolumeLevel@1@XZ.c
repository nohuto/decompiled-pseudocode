/*
 * XREFs of ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180080188
 * Callers:
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18007FF38 (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x18007FFF4 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x180118C58 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VolumeHardwareLogger::CurrentVolumeLevel(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 && *(float *)(a1 + 80) != 0.0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 128LL))(v4, a2);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 136LL))(*(_QWORD *)(a1 + 64), a2 + 4);
    *(_DWORD *)(a2 + 8) = (int)(float)((float)((float)(*(float *)a2 - *(float *)(a1 + 72)) / *(float *)(a1 + 80)) + 0.5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  return a2;
}
