/*
 * XREFs of ndisFInvokeOidRequestComplete @ 0x140044450
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x1400237E0 (WPP_RECORDER_SF_qDqd_ea_1400237E0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     IsOidInFilterList @ 0x1400E6A00 (IsOidInFilterList.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400E6A2C (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLO.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400E6B18 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BL.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  int v5; // esi
  int v8; // eax
  char v9; // cl
  unsigned int v10; // eax
  __int64 result; // rax
  int v12; // r8d

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0xAu,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      a1,
      v5,
      a2,
      a3);
  if ( (unsigned int)dword_14011C6C0 > 4
    && (qword_14011C6D0 & 0x400) != 0
    && (qword_14011C6D8 & 0x400) == qword_14011C6D8 )
  {
    v8 = *(_DWORD *)(a2 + 88) & 0x30000000;
    if ( v8 != 0x10000000 )
    {
      if ( v8 )
      {
        if ( v8 != 0x20000000 )
          goto LABEL_21;
LABEL_18:
        if ( *(_QWORD *)(a2 + 96) )
          TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_FILTER_BLOCK>(a1, a2);
        else
          TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_FILTER_BLOCK>(a1, a2);
        goto LABEL_21;
      }
      if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
      {
        v9 = 1;
        v10 = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x20000000;
      }
      else if ( (ndisAzOidTelemetryFilter & 2) != 0 && (unsigned __int8)IsOidInFilterList(*(unsigned int *)(a2 + 32)) )
      {
        v9 = 1;
        v10 = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x20000000;
      }
      else
      {
        v9 = 0;
        v10 = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x10000000;
      }
      *(_DWORD *)(a2 + 88) = v10;
      if ( v9 )
        goto LABEL_18;
    }
  }
LABEL_21:
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 256))(*(_QWORD *)(a1 + 24), a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qDq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             v12,
             0xBu,
             (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
             a1,
             v5,
             a2);
  return result;
}
