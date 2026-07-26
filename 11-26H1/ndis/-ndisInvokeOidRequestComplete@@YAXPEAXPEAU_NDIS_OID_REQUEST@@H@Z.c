/*
 * XREFs of ?ndisInvokeOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x140059060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1400237E0 (WPP_RECORDER_SF_qDqd_ea_1400237E0.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeOidRequestComplete(_QWORD *a1, struct _NDIS_OID_REQUEST *a2, unsigned int a3)
{
  __int64 v3; // rbp

  v3 = a1[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      0x6Au,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a2->DATA.QUERY_INFORMATION.Oid,
      (char)a2,
      a3);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *, _QWORD))(v3 + 320))(a1[4], a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x6Bu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a2);
}
