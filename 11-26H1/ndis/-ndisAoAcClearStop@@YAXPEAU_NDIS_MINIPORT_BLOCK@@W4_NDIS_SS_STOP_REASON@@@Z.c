/*
 * XREFs of ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400457F0
 * Callers:
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400452E0 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14015C440 (-ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140045980 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x140045DE0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 */

void __fastcall ndisAoAcClearStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  signed __int64 v5; // rbp
  int v6; // r15d
  int v7; // edx
  KIRQL v8; // r14
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // eax

  AoAc = a1->AoAc;
  LODWORD(v5) = 0;
  v6 = 5;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( a2 == 13 )
  {
    v9 = *((_DWORD *)AoAc + 95);
    if ( (v9 & 0x1000) == 0 )
      __int2c();
    v10 = *((_DWORD *)AoAc + 15);
    if ( v10 <= 0 )
      __int2c();
    v11 = v10 - 1;
    *((_DWORD *)AoAc + 15) = v11;
    if ( !v11 )
    {
      v12 = v9 & 0xFFFFEFFF;
LABEL_8:
      *((_DWORD *)AoAc + 95) = v12;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        *((_DWORD *)AoAc + 95) &= ~1u;
        break;
      case 4:
        *((_DWORD *)AoAc + 95) &= ~8u;
        break;
      case 6:
        *((_DWORD *)AoAc + 95) &= ~0x20u;
        break;
      case 8:
        v13 = *((_DWORD *)AoAc + 95);
        if ( (v13 & 0x80u) == 0 )
          __int2c();
        v14 = *((_DWORD *)AoAc + 14);
        if ( v14 <= 0 )
          __int2c();
        v15 = v14 - 1;
        *((_DWORD *)AoAc + 14) = v15;
        if ( !v15 )
        {
          v12 = v13 & 0xFFFFFF7F;
          goto LABEL_8;
        }
        break;
      case 9:
        *((_DWORD *)AoAc + 95) &= ~0x100u;
        v6 = 1;
        LODWORD(v5) = ndisNicQuietInitTimeout;
        break;
      case 11:
        *((_DWORD *)AoAc + 95) &= ~0x400u;
        break;
      case 12:
        *((_DWORD *)AoAc + 95) &= ~0x800u;
        v6 = 6;
        break;
      default:
        break;
    }
  }
  if ( *((_DWORD *)AoAc + 95) || *((_DWORD *)AoAc + 16) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        43,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        (char)a1);
    }
    *((_DWORD *)AoAc + 16) = v6;
    ndisAoAcActiveRefIncrement(AoAc, 0LL);
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
    if ( !(_DWORD)v5 )
    {
      v5 = *((unsigned int *)AoAc + 71);
      if ( v5 <= (__int64)(ndisNicQuietInitTimeout - (MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 55)) / 0x2710uLL) )
        LODWORD(v5) = ndisNicQuietInitTimeout - (MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 55)) / 0x2710uLL;
    }
    ndisSetTempRefTimer(a1, v5);
  }
}
