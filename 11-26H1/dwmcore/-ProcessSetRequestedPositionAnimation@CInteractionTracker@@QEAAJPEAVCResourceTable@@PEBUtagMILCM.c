/*
 * XREFs of ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18014B494
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B578 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802058EC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPositionAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION *a3)
{
  CBaseExpression *v4; // rdi
  __int64 v5; // rdx
  __int64 Resource; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_4;
  Resource = CResourceTable::GetResource(a2, v5, 10LL);
  v4 = (CBaseExpression *)Resource;
  if ( Resource )
  {
    if ( (*(_BYTE *)(Resource + 216) & 8) != 0 )
      return 0LL;
LABEL_4:
    *((_BYTE *)this + 596) = *((_BYTE *)this + 596) & 0xDF | (*((_BYTE *)a3 + 12) == 0 ? 0x20 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, v4, 0LL) )
    {
      v9 = *((_DWORD *)this + 72);
      if ( v9 <= *((_DWORD *)a3 + 5) )
        v9 = *((_DWORD *)a3 + 5);
      *((_DWORD *)this + 72) = v9;
    }
    else if ( v4 )
    {
      CBaseExpression::NotifyAnimationCompleted(v4);
      if ( *((_BYTE *)a3 + 12) )
        CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 5));
    }
    *((_BYTE *)this + 596) &= ~0x20u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x218,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)0x88980403LL);
  return 2291663875LL;
}
