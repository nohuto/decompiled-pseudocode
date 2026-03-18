/*
 * XREFs of HvlpSetRegister64 @ 0x140493EC0
 * Callers:
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140532BF8 (PpmHvSetVirtualProcessorQos.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405B8380 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1405B88D0 (HvlLogGuestCrashInformation.c)
 *     HvlpDetermineEnlightenments @ 0x1405C19D8 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x1405C1F24 (HvlpPhase0Enlightenments.c)
 *     HvlDeleteProcessor @ 0x140791814 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 */

__int64 __fastcall HvlpSetRegister64(int a1, unsigned __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx
  __int64 result; // rax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx

  if ( a1 > 655362 )
  {
    if ( a1 <= 655370 )
    {
      if ( a1 == 655370 )
        goto LABEL_33;
      v17 = a1 - 655363;
      if ( !v17 )
        goto LABEL_33;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_33;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_33;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_33;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_33;
      v16 = v21 - 1;
      v15 = v16 == 0;
      goto LABEL_35;
    }
    v22 = a1 - 655371;
    if ( !v22 )
      goto LABEL_33;
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_33;
    v24 = v23 - 1;
    if ( !v24 )
      goto LABEL_33;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_33;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_33;
    if ( v26 == 4 )
    {
      v7 = 1073741955;
      goto LABEL_9;
    }
  }
  else
  {
    if ( a1 == 655362 )
      goto LABEL_33;
    if ( a1 > 589826 )
    {
      v3 = a1 - 589831;
      if ( !v3 )
      {
        v7 = 1073741828;
        goto LABEL_9;
      }
      v4 = v3 - 12;
      if ( !v4 )
      {
        v7 = 1073741939;
        goto LABEL_9;
      }
      v5 = v4 - 4;
      if ( !v5 )
      {
        v7 = 1073741857;
        goto LABEL_9;
      }
      v6 = v5 - 4;
      if ( !v6 )
      {
        v7 = 1073742018;
LABEL_9:
        result = a2;
        __writemsr(v7, a2);
        return result;
      }
      v16 = v6 - 65509;
      v15 = v16 == 0;
LABEL_35:
      if ( !v15 && v16 != 1 )
        return RtlRaiseException((ULONG_PTR)&qword_140E0A930);
LABEL_33:
      v7 = a1 + 1073086608;
      goto LABEL_9;
    }
    if ( a1 == 589826 )
    {
      v7 = 0x40000000;
      goto LABEL_9;
    }
    v9 = a1 - 528;
    if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 || (v13 = v12 - 1) == 0 )
    {
      v7 = a1 + 1073741552;
      goto LABEL_9;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = 1073742085;
      goto LABEL_9;
    }
    if ( v14 == 91 )
    {
      v7 = 1073742102;
      goto LABEL_9;
    }
  }
  return RtlRaiseException((ULONG_PTR)&qword_140E0A930);
}
