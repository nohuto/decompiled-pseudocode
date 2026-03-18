/*
 * XREFs of ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x180162124
 * Callers:
 *     ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z @ 0x180162008 (-AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z.c)
 *     ?ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1802406B0 (-ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180240888 (-RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_ClearPrincipalReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180240E60 (-Thunk_ClearPrincipalReady_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovid.c)
 *     ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180240F70 (-Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBam.c)
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180161F8C (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z @ 0x180162C04 (-IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z.c)
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int *v3; // rcx
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax

  if ( Microsoft::BamoImpl::BaseBamoConnectionImpl::IsPendingRemovalFromItemTable(this, a2) )
    return 0LL;
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
           (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3,
           v3[7],
           v2);
  if ( !Item )
    return 0LL;
  else
    return (struct Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 40LL))(Item);
}
