/*
 * XREFs of ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140157F60
 * Callers:
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140158830 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016E8D0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006B850 (-ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_DDDDDD @ 0x14009E44C (WPP_RECORDER_SF_DDDDDD.c)
 *     ?ndisEnableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C4FEC (-ndisEnableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143948 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143D20 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x14016BDE0 (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

void __fastcall ndisUpdateMinimumStackVersion(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 MinimumNdisMajorVersion; // r15
  unsigned __int8 MinimumNdisMinorVersion; // r14
  unsigned int InterlockedFlags; // eax
  unsigned int v7; // ett
  int v8; // r12d
  bool v9; // bp
  unsigned int v10; // eax
  unsigned int v11; // ett
  int v12; // edi
  unsigned __int8 v13; // al
  int v14; // [rsp+20h] [rbp-58h]

  MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
  MinimumNdisMinorVersion = a1->MinimumNdisMinorVersion;
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v7 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v7 != InterlockedFlags );
  v8 = InterlockedFlags & 0x400;
  v9 = v8 != 0;
  ndisFindMinimumVersionDrivers(a1, a2, a3);
  _m_prefetchw(&a1->InterlockedFlags);
  v10 = a1->InterlockedFlags;
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)&a1->InterlockedFlags, v10, v10);
  }
  while ( v11 != v10 );
  v12 = v10 & 0x400;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      a1->MinimumNdisMinorVersion,
      a1->MinimumNdisMajorVersion,
      v14);
  v13 = a1->MinimumNdisMajorVersion;
  if ( MinimumNdisMajorVersion == v13 && MinimumNdisMinorVersion == a1->MinimumNdisMinorVersion && v9 == (v12 != 0) )
    return;
  if ( v8 )
  {
    if ( !v12 )
    {
      if ( v13 > 6u || v13 == 6 && a1->MinimumNdisMinorVersion >= 0x59u )
        ndisEnableUdpRsc(a1);
LABEL_30:
      if ( MinimumNdisMajorVersion > 6u )
        goto LABEL_33;
      goto LABEL_31;
    }
  }
  else if ( v12 )
  {
    goto LABEL_29;
  }
  if ( MinimumNdisMajorVersion <= 6u && (MinimumNdisMajorVersion != 6 || MinimumNdisMinorVersion < 0x59u) )
  {
LABEL_25:
    if ( v13 > 6u || v13 == 6 && a1->MinimumNdisMinorVersion >= 0x59u )
      ndisEnableUdpRsc(a1);
LABEL_31:
    if ( MinimumNdisMajorVersion != 6 )
    {
LABEL_39:
      if ( a1->MinimumNdisMajorVersion > 6u || a1->MinimumNdisMajorVersion == 6 && a1->MinimumNdisMinorVersion >= 0x1Eu )
        ndisEnableRsc(a1);
      return;
    }
    goto LABEL_32;
  }
  if ( v13 <= 6u && (v13 != 6 || a1->MinimumNdisMinorVersion < 0x59u) )
  {
LABEL_29:
    ndisDisableUdpRsc(a1);
    goto LABEL_30;
  }
  if ( MinimumNdisMajorVersion > 6u )
    goto LABEL_33;
  if ( MinimumNdisMinorVersion < 0x59u )
    goto LABEL_25;
LABEL_32:
  if ( MinimumNdisMinorVersion < 0x1Eu )
    goto LABEL_38;
LABEL_33:
  if ( a1->MinimumNdisMajorVersion <= 6u && (a1->MinimumNdisMajorVersion != 6 || a1->MinimumNdisMinorVersion < 0x1Eu) )
  {
    ndisDisableRsc(a1);
    return;
  }
  if ( MinimumNdisMajorVersion <= 6u )
  {
LABEL_38:
    if ( MinimumNdisMinorVersion >= 0x1Eu )
      return;
    goto LABEL_39;
  }
}
