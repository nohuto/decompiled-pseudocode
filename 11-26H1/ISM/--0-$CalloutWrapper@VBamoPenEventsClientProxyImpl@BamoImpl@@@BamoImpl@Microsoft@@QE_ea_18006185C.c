/*
 * XREFs of ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006185C
 * Callers:
 *     ?OnDisconnectedCallout@BamoPenEventsClientProxy@@EEAAJXZ @ 0x180061770 (-OnDisconnectedCallout@BamoPenEventsClientProxy@@EEAAJXZ.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@@Z @ 0x1800617CC (--0-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBa.c)
 *     ?OnConnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ @ 0x180061800 (-OnConnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ.c)
 *     ?OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x180061910 (-OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ.c)
 *     ?OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x180061970 (-OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ.c)
 *     ?UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180073994 (-UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateType@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x180073BA0 (-UpdateType@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     ?UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180076590 (-UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180079128 (-UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x18007D560 (-UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@I.c)
 *     ?UpdateHWND@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18008EC64 (-UpdateHWND@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18008EDA4 (-UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18008F034 (-UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTipToGlassEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18008F184 (-UpdateTipToGlassEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18019ADB4 (-UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18019AF70 (-UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18019B09C (-UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037540 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
        __int64 a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        void (__fastcall ***a3)(_QWORD),
        int a4)
{
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = 0LL;
  if ( !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 - 16) + 88LL))(v7 - 16);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v8,
          v10);
    }
  }
  return a1;
}
