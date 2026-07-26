/*
 * XREFs of ndisFIndicateNicSwitchCapabilitiesChange @ 0x14009C438
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dDq @ 0x1400575F0 (WPP_RECORDER_SF_dDq.c)
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     WPP_RECORDER_SF_dDDDq @ 0x14009E588 (WPP_RECORDER_SF_dDDDq.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall ndisFIndicateNicSwitchCapabilitiesChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r11d
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned __int8 *v7; // rcx
  int v8; // r8d
  __int64 v9; // r9
  size_t v10; // r8
  void *v11; // r9

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 20);
  v5 = *(_DWORD *)(a2 + 56);
  if ( *(_BYTE *)v2 == 5 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    if ( *(_BYTE *)(v6 + 100) <= 6u && (*(_BYTE *)(v6 + 100) != 6 || *(_BYTE *)(v6 + 101) < 0x59u) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Au,
          0x33u,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          v4,
          a1);
      return 0;
    }
  }
  if ( v5 < 0x20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Au,
        0x34u,
        (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
        v4,
        v5,
        a1);
    return 0;
  }
  v7 = *(unsigned __int8 **)(a2 + 48);
  v8 = *v7;
  if ( (_BYTE)v8 != 0x80 || (LODWORD(a2) = *((unsigned __int16 *)v7 + 1), (unsigned __int16)a2 < 0x20u) || !v7[1] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDDDq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, v8, 53);
    return 0;
  }
  v9 = 984LL;
  if ( v4 != 1073872976 )
    v9 = 1116LL;
  v10 = 132LL;
  v11 = (void *)(a1 + v9);
  if ( (unsigned __int16)a2 < 0x84u )
    v10 = *((unsigned __int16 *)v7 + 1);
  memmove(v11, v7, v10);
  return 1;
}
