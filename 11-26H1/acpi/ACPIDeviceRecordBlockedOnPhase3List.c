/*
 * XREFs of ACPIDeviceRecordBlockedOnPhase3List @ 0x14001A2AC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140019030 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x14002704C (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 */

void __fastcall ACPIDeviceRecordBlockedOnPhase3List(_QWORD **a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 *v7; // rax

  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = *a1;
  while ( v2 != a1 )
  {
    v3 = (__int64)v2;
    v4 = v2;
    v2 = (_QWORD *)*v2;
    if ( !*(_DWORD *)(v3 + 48) )
    {
      ACPIDevicePowerEnumerateAssociatedPowerNodes(v3, ACPIIsPowerNodeInTransition, v3);
      if ( (*(_DWORD *)(v3 + 56) & 0x8000000) != 0 )
      {
        v5 = *v4;
        if ( *(_QWORD *)(*v4 + 8LL) != v3
          || (v6 = *(_QWORD **)(v3 + 8), *v6 != v3)
          || (*v6 = v5,
              *(_QWORD *)(v5 + 8) = v6,
              v7 = (__int64 *)qword_140090C68,
              *(__int64 **)qword_140090C68 != &AcpiPowerBlockedOnPhase3List) )
        {
          __fastfail(3u);
        }
        *v4 = &AcpiPowerBlockedOnPhase3List;
        *(_QWORD *)(v3 + 8) = v7;
        *v7 = v3;
        qword_140090C68 = v3;
        *(_DWORD *)(v3 + 56) &= ~0x8000000u;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
