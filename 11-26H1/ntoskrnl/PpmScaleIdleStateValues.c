/*
 * XREFs of PpmScaleIdleStateValues @ 0x1402F33F8
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 *     PpmResetIdlePolicy @ 0x1402F31E0 (PpmResetIdlePolicy.c)
 * Callees:
 *     HvlGetLpIndexFromProcessorIndex @ 0x1402F31A0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x1402F35B0 (HvlRegisterLogicalProcessorFrequency.c)
 */

void __fastcall PpmScaleIdleStateValues(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // ecx
  unsigned int LpIndexFromProcessorIndex; // eax

  if ( *(_BYTE *)(a1 + 88) )
  {
    v2 = *(_QWORD *)(a1 + 392);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 384);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 536);
        v5 = *(_DWORD *)(v2 + 80);
        if ( v5 >= v4 )
          LOBYTE(v5) = v4;
        v6 = (unsigned __int8)v5;
        v7 = *(unsigned __int8 *)(a1 + 87);
        *(_BYTE *)(a1 + 84) = (unsigned __int8)v5
                            * (unsigned __int8)v5
                            * (unsigned int)*(unsigned __int8 *)(a1 + 86)
                            / 0x2710;
        *(_BYTE *)(a1 + 85) = (unsigned __int8)v5 * (unsigned int)(unsigned __int8)v5 * v7 / 0x2710;
        if ( *(_DWORD *)(a1 + 240) == 3 )
        {
          LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*(_DWORD *)(a1 - 34844));
          HvlRegisterLogicalProcessorFrequency(LpIndexFromProcessorIndex, v6);
        }
      }
    }
  }
}
