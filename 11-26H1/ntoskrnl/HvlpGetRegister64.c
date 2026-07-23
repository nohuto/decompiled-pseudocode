/*
 * XREFs of HvlpGetRegister64 @ 0x1404CA750
 * Callers:
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1405BB140 (HvlLogGuestCrashInformation.c)
 *     HvlpInitializeBootProcessor @ 0x1405BCB5C (HvlpInitializeBootProcessor.c)
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x1405C4794 (HvlpPhase0Enlightenments.c)
 *     HvlDeleteProcessor @ 0x140794344 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 */

void __fastcall HvlpGetRegister64(int a1, _QWORD *a2)
{
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
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
        goto LABEL_32;
      v17 = a1 - 655363;
      if ( !v17 )
        goto LABEL_32;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_32;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_32;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_32;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_32;
      v16 = v21 - 1;
      v15 = v16 == 0;
      goto LABEL_37;
    }
    v22 = a1 - 655371;
    if ( !v22 )
      goto LABEL_32;
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_32;
    v24 = v23 - 1;
    if ( !v24 )
      goto LABEL_32;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_32;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_32;
    if ( v26 == 4 )
    {
      v5 = 1073741955;
      goto LABEL_7;
    }
  }
  else
  {
    if ( a1 == 655362 )
      goto LABEL_32;
    if ( a1 > 589826 )
    {
      v3 = a1 - 589827;
      if ( !v3 )
      {
        v5 = 1073741826;
        goto LABEL_7;
      }
      v4 = v3 - 1;
      if ( !v4 )
      {
        v5 = 1073741856;
LABEL_7:
        *a2 = __readmsr(v5);
        return;
      }
      v12 = v4 - 3;
      if ( !v12 )
      {
        v5 = 1073741828;
        goto LABEL_7;
      }
      v13 = v12 - 12;
      if ( !v13 )
      {
        v5 = 1073741939;
        goto LABEL_7;
      }
      v14 = v13 - 4;
      if ( !v14 )
      {
        v5 = 1073741857;
        goto LABEL_7;
      }
      v16 = v14 - 65513;
      v15 = v16 == 0;
LABEL_37:
      if ( !v15 && v16 != 1 )
        goto LABEL_39;
LABEL_32:
      v5 = a1 + 1073086608;
      goto LABEL_7;
    }
    if ( a1 == 589826 )
    {
      v5 = 0x40000000;
      goto LABEL_7;
    }
    v6 = a1 - 528;
    if ( !v6 || (v7 = v6 - 1) == 0 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 )
    {
      v5 = a1 + 1073741552;
      goto LABEL_7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v5 = 1073742085;
      goto LABEL_7;
    }
    if ( v11 == 91 )
    {
      v5 = 1073742102;
      goto LABEL_7;
    }
  }
LABEL_39:
  RtlRaiseException(&ExceptionRecord);
}
