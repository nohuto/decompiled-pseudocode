/*
 * XREFs of PopNotifyTelemetryOsState @ 0x140B53894
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopTransitionTelemetryOsState @ 0x140B23108 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopNotifyTelemetryOsState(int a1, int a2, int a3, struct _KLOCK_ENTRIES *a4, char a5)
{
  unsigned int v7; // edx
  int v8; // edx
  __int64 v9; // r8

  v7 = 0;
  if ( dword_140E07560
    && (qword_140E07570 & 0x800000000000LL) != 0
    && (qword_140E07578 & 0x800000000000LL) == qword_140E07578 )
  {
    if ( (unsigned int)(a1 - 4) <= 2 )
    {
      v9 = 2LL;
      LOBYTE(v7) = a1 == 5;
      v8 = v7 + 1;
      return (unsigned int)PopTransitionTelemetryOsState(v9, v8, v9, a4);
    }
    if ( (unsigned int)(a1 - 2) <= 1 )
    {
      v8 = 4;
      v9 = 4 - (unsigned int)(a5 != 0);
      if ( a1 == 3 || a3 == 5 )
      {
        if ( ((unsigned __int8)a4 & 8) != 0 )
        {
          v8 = 3;
        }
        else
        {
          v8 = 5;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v8 = 8;
        }
      }
      return (unsigned int)PopTransitionTelemetryOsState(v9, v8, v9, a4);
    }
  }
  return v7;
}
