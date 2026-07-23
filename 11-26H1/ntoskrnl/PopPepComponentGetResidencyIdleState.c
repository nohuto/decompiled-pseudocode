/*
 * XREFs of PopPepComponentGetResidencyIdleState @ 0x14047D624
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x14047D3E0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetResidency @ 0x140614364 (PopPepComponentSetResidency.c)
 *     PopPepRegisterDevice @ 0x140B3DA28 (PopPepRegisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepComponentGetResidencyIdleState(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v4; // zf

  v2 = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( !PopDirectedDripsDiagLock.SchedulerApcFill3[48] && *(_DWORD *)(a1 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24 * v2 + 8) <= a2 )
        break;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  return (unsigned int)v2;
}
