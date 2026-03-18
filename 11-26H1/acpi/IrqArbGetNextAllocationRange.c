/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1400CFE80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_ii @ 0x14004DF60 (WPP_RECORDER_SF_ii.c)
 *     ArbGetNextAllocationRange @ 0x1400A8010 (ArbGetNextAllocationRange.c)
 *     IrqArbIrqFromGsiv @ 0x1400BE1E0 (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1400BE628 (IrqArbpFindIrqInAlternatives.c)
 *     PcisuppIsPciDevice @ 0x1400C3ACC (PcisuppIsPciDevice.c)
 *     IrqArbpFindBootConfig @ 0x1400D10D8 (IrqArbpFindBootConfig.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // r14
  void *v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  int BootConfig; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  char result; // al
  int v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  bool v27; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2[4];
  v3 = (__int64)a2;
  v25 = 0;
  v26 = 0LL;
  v28 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v27 = 0;
  v29 = 0;
  if ( *(PVOID *)(v5 + 8) == AcpiDriverObject && (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 8LL) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, (__int64)a2);
  v6 = a2[5];
  if ( !v6 )
    v6 = a2[7];
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 4LL) & 0x20) != 0 )
    goto LABEL_46;
  if ( (int)PcisuppIsPciDevice(v5, &v27) < 0 )
    return 0;
  if ( !v27 )
  {
LABEL_46:
    a2 = (_QWORD *)v3;
    return ArbGetNextAllocationRange(a1, (__int64)a2);
  }
  v9 = *(_DWORD **)(v3 + 72);
  if ( !*(_QWORD *)(v3 + 40) )
    *v9 = 4096;
LABEL_10:
  v10 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v10,
              20,
              10,
              (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
            v10 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
          }
          if ( *v9 != 4096 )
            break;
          switch ( IrqArbGlobalDistributionDisposition )
          {
            case 0:
              goto LABEL_42;
            case 1:
              *v9 = 4100;
              break;
            case 2:
              *v9 = 4098;
              break;
            default:
LABEL_42:
              *v9 = 4097;
              break;
          }
        }
        if ( *v9 != 4097 )
          break;
        *v9 = 4099;
        v19 = LinkNodeCrackPrt(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL), &v26, &v25, 0);
        v10 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
        if ( v19 >= 0 )
        {
          v10 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
          if ( v26 )
          {
            v20 = *(unsigned int *)(v26 + 40);
            v10 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
            if ( (_DWORD)v20 != -1 )
            {
              v21 = IrqArbIrqFromGsiv(v20);
              v18 = v21;
              v29 = v21;
              if ( (int)IrqArbpFindIrqInAlternatives(v22, v3, v21, &v28) < 0 )
                goto LABEL_10;
              *(_QWORD *)(v3 + 16) = v18;
              v17 = (unsigned int)v18;
              goto LABEL_33;
            }
          }
        }
      }
      v11 = (unsigned int)(*v9 - 4098);
      if ( *v9 == 4098 )
      {
        *v9 = 4099;
        v17 = (unsigned int)IrqArbGlobalStackingIrq;
        v29 = IrqArbGlobalStackingIrq;
        LOBYTE(v18) = IrqArbGlobalStackingIrq;
        if ( (int)IrqArbpFindIrqInAlternatives(v11, v3, (unsigned int)IrqArbGlobalStackingIrq, &v28) < 0 )
          goto LABEL_10;
        *(_QWORD *)(v3 + 16) = v17;
        goto LABEL_33;
      }
      if ( *v9 != 4099 )
        break;
      *v9 = 4100;
      BootConfig = IrqArbpFindBootConfig(a1, v3, &v29);
      v10 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
      if ( BootConfig >= 0 )
      {
        v17 = v29;
        if ( (int)IrqArbpFindIrqInAlternatives(v16, v3, v29, &v28) < 0 )
          goto LABEL_10;
        *(_QWORD *)(v3 + 16) = v17;
        LOBYTE(v18) = v17;
LABEL_33:
        *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 56) + ((unsigned __int64)v28 << 6);
        goto LABEL_34;
      }
    }
    if ( *v9 == 4100 )
    {
      *v9 = 4101;
      v14 = *(__int64 **)(v3 + 56);
      *(_QWORD *)(v3 + 40) = v14;
      goto LABEL_44;
    }
  }
  while ( *v9 != 4101 );
  v12 = *(_QWORD *)(v3 + 40) + 64LL;
  v13 = *(unsigned int *)(v3 + 48);
  *(_QWORD *)(v3 + 40) = v12;
  if ( v12 >= *(_QWORD *)(v3 + 56) + (v13 << 6) )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v10,
      20,
      11,
      (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
  }
  v14 = *(__int64 **)(v3 + 40);
LABEL_44:
  v18 = *v14;
  *(_QWORD *)(v3 + 16) = *v14;
  v17 = v14[1];
LABEL_34:
  *(_QWORD *)(v3 + 24) = v17;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v10, v7, v8, v24, v18, v17);
  result = 1;
  ++IrqArbPciAlternativeRotation;
  return result;
}
