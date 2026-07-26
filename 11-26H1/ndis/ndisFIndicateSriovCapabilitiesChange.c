/*
 * XREFs of ndisFIndicateSriovCapabilitiesChange @ 0x14009C71C
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dDq @ 0x1400575F0 (WPP_RECORDER_SF_dDq.c)
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     WPP_RECORDER_SF_dDDDq @ 0x14009E588 (WPP_RECORDER_SF_dDDDq.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall ndisFIndicateSriovCapabilitiesChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned __int16 v6; // r9
  __int64 v7; // rax
  unsigned __int8 *v8; // rdx
  int v9; // r9d
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 20);
  v5 = *(_DWORD *)(a2 + 56);
  if ( *(_BYTE *)v2 != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 47;
LABEL_9:
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Au,
        v6,
        (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
        v4,
        a1);
      return 0;
    }
    return 0;
  }
  v7 = *(_QWORD *)(v2 + 16);
  if ( *(_BYTE *)(v7 + 100) <= 6u && (*(_BYTE *)(v7 + 100) != 6 || *(_BYTE *)(v7 + 101) < 0x59u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 48;
      goto LABEL_9;
    }
    return 0;
  }
  if ( v5 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Au,
        0x31u,
        (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
        v4,
        v5,
        a1);
    return 0;
  }
  v8 = *(unsigned __int8 **)(a2 + 48);
  v9 = *v8;
  if ( (_BYTE)v9 != 0x80 || *((_WORD *)v8 + 1) < 0xCu || !v8[1] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDDDq(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, a1, 50);
    return 0;
  }
  v10 = 960LL;
  if ( v4 != 1073872980 )
    v10 = 972LL;
  memmove((void *)(a1 + v10), v8, 0xCuLL);
  return 1;
}
