/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1400BE450
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1400D2AC8 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     IcGetPossibleInput @ 0x1400A88FC (IcGetPossibleInput.c)
 *     LinkNodeGetPossibleResources @ 0x1400BC2C8 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1400BE1E0 (IrqArbIrqFromGsiv.c)
 *     IcIsInputValid @ 0x1400BEC5C (IcIsInputValid.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  int PossibleResources; // ebx
  _DWORD *v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r11d
  char v9; // r15
  __int64 v10; // rbp
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // [rsp+28h] [rbp-40h]
  PVOID P[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = a1;
  LOBYTE(v21) = 0;
  v22 = 0;
  P[0] = 0LL;
  PossibleResources = LinkNodeGetPossibleResources(a3, P, &v21);
  v6 = P[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      20,
      27,
      (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
      (char)P[0]);
  }
  if ( PossibleResources < 0 )
  {
LABEL_19:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = PossibleResources;
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        20,
        29,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
        v19);
    }
  }
  else
  {
    v7 = v6[4];
    v8 = 0;
    v9 = v21;
    while ( 1 )
    {
      if ( v8 >= v7 )
      {
        PossibleResources = -1073741275;
        goto LABEL_19;
      }
      v4 = (v8 + (unsigned __int8)IrqArbPciAlternativeRotation) % v7;
      v10 = 5 * v4;
      v11 = v6[5 * (unsigned int)v4 + 7];
      if ( v11 >= 0x10 || (v12 = (unsigned __int16)PciExclusionMask, !_bittest(&v12, v11)) )
      {
        if ( (int)IcGetPossibleInput(v11, v4, &v22) < 0 || v9 == v22 )
        {
          v13 = (unsigned int)v6[v10 + 7];
          if ( v13 >= a2[2] && v13 <= a2[3] )
            break;
        }
      }
      ++v8;
    }
    if ( !(unsigned __int8)IcIsInputValid(v11) )
    {
      PossibleResources = -1073741823;
      goto LABEL_19;
    }
    v16 = (unsigned int)IrqArbIrqFromGsiv(v14);
    v17 = a2[5];
    *a2 = v16;
    a2[1] = v16;
    *(_QWORD *)(v17 + 16) = 1LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      LODWORD(v19) = v6[v10 + 7];
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        20,
        28,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
        v19);
    }
    PossibleResources = 0;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)PossibleResources;
}
