/*
 * XREFs of ndisFInvokeSynchronousOidRequest @ 0x1400CD404
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400036B0 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeSynchronousOidRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      0xCu,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      a1,
      *(_DWORD *)(a2 + 32),
      a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v3 + 320))(*(_QWORD *)(a1 + 24), a2, a3);
  v8 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      a1,
      v10);
  }
  return v8;
}
