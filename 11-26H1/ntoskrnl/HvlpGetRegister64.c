/*
 * XREFs of HvlpGetRegister64 @ 0x1404D0D20
 * Callers:
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1405B88D0 (HvlLogGuestCrashInformation.c)
 *     HvlpInitializeBootProcessor @ 0x1405BA2EC (HvlpInitializeBootProcessor.c)
 *     HvlpDetermineEnlightenments @ 0x1405C19D8 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x1405C1F24 (HvlpPhase0Enlightenments.c)
 *     HvlDeleteProcessor @ 0x140791814 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 */

unsigned __int64 __fastcall HvlpGetRegister64(int a1, unsigned __int64 *a2)
{
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // ecx
  unsigned __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
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
  int v27; // ecx

  if ( a1 > 655362 )
  {
    if ( a1 <= 655370 )
    {
      if ( a1 == 655370 )
        goto LABEL_32;
      v18 = a1 - 655363;
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
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_32;
      v17 = v22 - 1;
      v16 = v17 == 0;
      goto LABEL_37;
    }
    v23 = a1 - 655371;
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
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_32;
    if ( v27 == 4 )
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
        result = __readmsr(v5);
        *a2 = result;
        return result;
      }
      v13 = v4 - 3;
      if ( !v13 )
      {
        v5 = 1073741828;
        goto LABEL_7;
      }
      v14 = v13 - 12;
      if ( !v14 )
      {
        v5 = 1073741939;
        goto LABEL_7;
      }
      v15 = v14 - 4;
      if ( !v15 )
      {
        v5 = 1073741857;
        goto LABEL_7;
      }
      v17 = v15 - 65513;
      v16 = v17 == 0;
LABEL_37:
      if ( !v16 && v17 != 1 )
        return RtlRaiseException((ULONG_PTR)&qword_140E0A930);
LABEL_32:
      v5 = a1 + 1073086608;
      goto LABEL_7;
    }
    if ( a1 == 589826 )
    {
      v5 = 0x40000000;
      goto LABEL_7;
    }
    v7 = a1 - 528;
    if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 )
    {
      v5 = a1 + 1073741552;
      goto LABEL_7;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v5 = 1073742085;
      goto LABEL_7;
    }
    if ( v12 == 91 )
    {
      v5 = 1073742102;
      goto LABEL_7;
    }
  }
  return RtlRaiseException((ULONG_PTR)&qword_140E0A930);
}
