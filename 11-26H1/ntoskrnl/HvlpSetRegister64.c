/*
 * XREFs of HvlpSetRegister64 @ 0x14048DA10
 * Callers:
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140535098 (PpmHvSetVirtualProcessorQos.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405BABF0 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1405BB140 (HvlLogGuestCrashInformation.c)
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x1405C4794 (HvlpPhase0Enlightenments.c)
 *     HvlDeleteProcessor @ 0x140794344 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 */

void __fastcall HvlpSetRegister64(int a1, unsigned __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  int v15; // ecx
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

  if ( a1 > 655362 )
  {
    if ( a1 <= 655370 )
    {
      if ( a1 == 655370 )
        goto LABEL_33;
      v16 = a1 - 655363;
      if ( !v16 )
        goto LABEL_33;
      v17 = v16 - 1;
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
      v15 = v20 - 1;
      v14 = v15 == 0;
      goto LABEL_35;
    }
    v21 = a1 - 655371;
    if ( !v21 )
      goto LABEL_33;
    v22 = v21 - 1;
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
    if ( v25 == 4 )
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
        __writemsr(v7, a2);
        return;
      }
      v15 = v6 - 65509;
      v14 = v15 == 0;
LABEL_35:
      if ( !v14 && v15 != 1 )
        goto LABEL_37;
LABEL_33:
      v7 = a1 + 1073086608;
      goto LABEL_9;
    }
    if ( a1 == 589826 )
    {
      v7 = 0x40000000;
      goto LABEL_9;
    }
    v8 = a1 - 528;
    if ( !v8 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 )
    {
      v7 = a1 + 1073741552;
      goto LABEL_9;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v7 = 1073742085;
      goto LABEL_9;
    }
    if ( v13 == 91 )
    {
      v7 = 1073742102;
      goto LABEL_9;
    }
  }
LABEL_37:
  RtlRaiseException(&ExceptionRecord);
}
