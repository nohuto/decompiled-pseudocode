/*
 * XREFs of ??1ActionContext@Actions@CreativeFramework@@QEAA@XZ @ 0x18006E300
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$1 @ 0x1800BC22B (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--CreateAction_--_1_-.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$1 @ 0x1800BE178 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800BE178.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::ActionContext::~ActionContext(
        CreativeFramework::Actions::ActionContext *this)
{
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
}
