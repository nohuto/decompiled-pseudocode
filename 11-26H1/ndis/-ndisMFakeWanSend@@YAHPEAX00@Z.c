/*
 * XREFs of ?ndisMFakeWanSend@@YAHPEAX00@Z @ 0x14009F700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(_QWORD *a1, void *a2, void *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi

  v3 = a1[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      78,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      v3);
  v4 = -1073741823;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 540);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      79,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      v3);
  return v4;
}
