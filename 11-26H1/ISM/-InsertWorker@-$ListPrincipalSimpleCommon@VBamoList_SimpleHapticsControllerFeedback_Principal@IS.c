/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801896A8
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUSimpleHapticsControllerFeedback@@@Z @ 0x180188A2C (-Add@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_Au.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x180027508 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUSimpleHapticsControllerFeedback@@@Z @ 0x180188E90 (-BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        __int64 *a4)
{
  __int64 *v8; // rcx
  __int64 v9; // r11
  __int64 *v10; // r10
  __int64 *v11; // rbx
  __int64 v12; // rsi
  const char *v13; // r9
  int v14; // eax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (__int64 *)(a1 + 56);
  v9 = *v8;
  v10 = (__int64 *)v8[1];
  if ( a3 > (unsigned __int64)(((__int64)v10 - *v8) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)retaddr);
  v11 = (__int64 *)(v9 + 8LL * a3);
  if ( v10 == (__int64 *)v8[2] )
  {
    try
    {
      std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(v8, v9 + 8LL * a3, a4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x153,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v13);
    }
  }
  else
  {
    v12 = *a4;
    if ( v11 == v10 )
    {
      *v10 = v12;
      v8[1] += 8LL;
    }
    else
    {
      *v10 = *(v10 - 1);
      v8[1] += 8LL;
      memmove_0(v11 + 1, (const void *)(v9 + 8LL * a3), (char *)(v10 - 1) - (char *)v11);
      *v11 = v12;
    }
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(a2) )
  {
    v14 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal::BroadcastRemoteInsert(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
            a3,
            (const struct SimpleHapticsControllerFeedback *)a4);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v14,
        v16);
  }
  return 0LL;
}
