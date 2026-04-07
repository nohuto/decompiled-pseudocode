/*
 * XREFs of ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180073BBC
 * Callers:
 *     ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x180015EF0 (-OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x1800231D4 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180073C2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowIconic::OnGlobalTimeUpdated(CWindowIconic *this)
{
  unsigned int v2; // eax
  CTimelineBase *v3; // rcx

  v2 = *((_DWORD *)this + 14) - 1;
  if ( v2 >= (int)*(double *)(*((_QWORD *)this + 8) + 48LL) )
    v2 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v2) != *(_QWORD *)(*((_QWORD *)this + 12) + 232LL) )
  {
    CWindowIconic::LoadCentralImage(this);
    CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 13));
  }
  v3 = (CTimelineBase *)*((_QWORD *)this + 8);
  if ( *((_BYTE *)v3 + 72) )
    CTimelineBase::Restart(v3, 0.54);
  return 0LL;
}
