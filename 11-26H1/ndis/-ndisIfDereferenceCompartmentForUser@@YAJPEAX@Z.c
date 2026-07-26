/*
 * XREFs of ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D092C
 * Callers:
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 *     ndisCmSetThreadState @ 0x14003EDE0 (ndisCmSetThreadState.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x14003F070 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x14003F0D0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ndisCmDeleteStateObject @ 0x140067330 (ndisCmDeleteStateObject.c)
 *     NdisSetSessionCompartmentId @ 0x1400CDE70 (NdisSetSessionCompartmentId.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1400D2974 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ndisIfDeleteCompartment @ 0x1400D0394 (ndisIfDeleteCompartment.c)
 */

__int64 __fastcall ndisIfDereferenceCompartmentForUser(_DWORD *a1)
{
  unsigned int v1; // edi
  char v3; // si
  KIRQL v4; // dl
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      51,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v5 = a1[12];
  if ( v5 <= 0 )
  {
    v1 = -1073741811;
  }
  else
  {
    v6 = v5 - 1;
    a1[12] = v6;
    if ( !v6 && (a1[10] & 2) != 0 )
      v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v4);
  if ( v3 )
    ndisIfDeleteCompartment(a1[4]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x34u,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      v1,
      a1);
  return v1;
}
