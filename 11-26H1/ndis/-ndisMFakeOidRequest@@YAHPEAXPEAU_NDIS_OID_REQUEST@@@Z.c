/*
 * XREFs of ?ndisMFakeOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140063290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDd @ 0x14000EB10 (WPP_RECORDER_SF_qDd.c)
 */

__int64 __fastcall ndisMFakeOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // ebx
  char v6[4]; // [rsp+38h] [rbp-10h]

  v3 = a1[2];
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 540);
  else
    v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v4;
    WPP_RECORDER_SF_qDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      a3,
      0x58u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a2->DATA.QUERY_INFORMATION.Oid,
      *(_DWORD *)v6);
  }
  return v4;
}
