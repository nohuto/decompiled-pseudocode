/*
 * XREFs of ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1802CDAA0
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801F0248 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::__lambda_21d9478fa7481aa5ac8b815bdb34bba5_ @ 0x1805DBB78 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--__lambda_21d9478fa7481aa5ac8b815bdb34bba5_.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1805DC0C0 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$1 @ 0x1806B3C24 (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$1.c)
 *     __lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator()_::_1_::dtor$0 @ 0x1806D7D04 (__lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18023A5D4 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
