/*
 * XREFs of AMLIPauseInterpreter @ 0x1400305A0
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1400485C0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x14004A130 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiPauseInterpreterForNamespaceUpdates @ 0x140066428 (AcpiPauseInterpreterForNamespaceUpdates.c)
 *     Simulator_PauseInterpreter @ 0x14006CB5C (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x140030800 (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_14008EB98;
    byte_14008EB70 = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_14008EBA8;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_14008EBA8 != &qword_14008EBA0 )
        __fastfail(3u);
      *a1 = &qword_14008EBA0;
      a1[1] = v4;
      *v4 = a1;
      qword_14008EBA8 = (__int64)a1;
    }
    KeReleaseSpinLock(&SpinLock, byte_14008EB70);
    LogSchedEvent(1346458963, 0, v1, 0, 0LL);
    if ( v1 == 32772 )
      return 259;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
