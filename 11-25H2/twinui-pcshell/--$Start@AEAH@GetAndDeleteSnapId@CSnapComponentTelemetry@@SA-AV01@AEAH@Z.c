/*
 * XREFs of ??$Start@AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@SA?AV01@AEAH@Z @ 0x180578010
 * Callers:
 *     ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x18057B5F0 (-GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z.c)
 *     ?GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z @ 0x18057B700 (-GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004A0B8 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXH@Z @ 0x18057E51C (-StartActivity@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXH@Z.c)
 */

CSnapComponentTelemetry::GetAndDeleteSnapId *__fastcall CSnapComponentTelemetry::GetAndDeleteSnapId::Start<int &>(
        CSnapComponentTelemetry::GetAndDeleteSnapId *this,
        int *a2)
{
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"GetAndDeleteSnapId");
  *(_QWORD *)this = &CSnapComponentTelemetry::GetAndDeleteSnapId::`vftable';
  CSnapComponentTelemetry::GetAndDeleteSnapId::StartActivity(this, *a2);
  return this;
}
