/*
 * XREFs of _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x180537BB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_::Run @ 0x180539EB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__-_--Run.c)
 * Callees:
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1801CC820 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x180537D3C (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x180538154 (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z @ 0x18053AF8C (-UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator()(JointResize **a1)
{
  JointResize *v2; // rcx
  JointResize::SecondaryViewInfo *v4; // rsi
  JointResize::SecondaryViewInfo *i; // rdi
  struct tagRECT v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  if ( !*((_BYTE *)v2 + 280) )
    return 2147947423LL;
  *((_QWORD *)*a1 + 39) = **(_QWORD **)&JointResize::CalculatePointFromRect(v2, &v6);
  JointResize::DestroyGhostDivider(*a1);
  v4 = (JointResize::SecondaryViewInfo *)*((_QWORD *)*a1 + 28);
  for ( i = (JointResize::SecondaryViewInfo *)*((_QWORD *)*a1 + 27);
        i != v4;
        i = (JointResize::SecondaryViewInfo *)((char *)i + 96) )
  {
    JointResize::SecondaryViewInfo::UpdateSizeConstraints(i, *((struct IImmersiveMonitor **)*a1 + 25));
  }
  JointResize::ApplySizeConstraints(*a1);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 31) + 24LL))(*((_QWORD *)*a1 + 31));
  return 0LL;
}
