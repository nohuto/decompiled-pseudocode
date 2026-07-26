/*
 * XREFs of ?ndisMFakeSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400755B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMFakeSend(_QWORD *a1, struct _NDIS_PACKET *a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi

  v2 = a1[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      80,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      v2);
  v4 = -1073741823;
  if ( v2 )
    v4 = *(_DWORD *)(v2 + 540);
  if ( *(_BYTE *)(a1[3] + 56LL) < 6u && (v4 & 0xC0230000) == 0xC0230000 )
    v4 = (unsigned __int16)v4 | 0xC0010000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      81,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      v2);
  return v4;
}
