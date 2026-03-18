/*
 * XREFs of ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x1402B5D08
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x14015D154 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     Feature_CreateWindowInBandCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1402B60B0 (Feature_CreateWindowInBandCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall IsValidBandForProcess(__int64 a1, int a2, __int64 a3)
{
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  bool v13; // zf
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx

  if ( (unsigned int)Feature_CreateWindowInBandCapabilities__private_IsEnabledDeviceUsageNoInline() && a2 == 16 )
    return Win32ProcessCapability::CheckAccess(a1, 4LL);
  if ( (unsigned int)IsImmersiveBroker(a1) )
    return 1;
  v7 = *(_QWORD *)(a1 + 808);
  if ( (v7 & 0x30) == 0x10 )
  {
    if ( a2 > 9 )
    {
      v14 = a2 - 10;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            v17 = v16 - 2;
            if ( v17 )
            {
              v18 = v17 - 2;
              if ( v18 )
              {
                v13 = v18 == 1;
LABEL_20:
                if ( !v13 )
                  return 0;
              }
            }
          }
        }
      }
    }
    else if ( a2 != 9 )
    {
      v8 = a2 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 == 2;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
    return 1;
  }
  if ( a2 == 1 )
    return 1;
  if ( (v7 & 2) == 0 && (!a3 || *(_DWORD *)(*(_QWORD *)(a3 + 40) + 236LL) != 2) )
    return 0;
  return a2 == 2;
}
