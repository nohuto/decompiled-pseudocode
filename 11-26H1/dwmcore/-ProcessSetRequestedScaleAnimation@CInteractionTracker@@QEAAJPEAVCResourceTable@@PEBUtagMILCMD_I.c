/*
 * XREFs of ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18014A85C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B578 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802058EC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScaleAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION *a3)
{
  CBaseExpression *v4; // rsi
  __int64 v5; // rdx
  __int64 Resource; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_5;
  Resource = CResourceTable::GetResource(a2, v5, 10LL);
  v4 = (CBaseExpression *)Resource;
  if ( !Resource )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( (*(_BYTE *)(Resource + 216) & 8) == 0 )
  {
LABEL_5:
    *((_BYTE *)this + 596) = *((_BYTE *)this + 596) & 0xDF | (*((_BYTE *)a3 + 12) == 0 ? 0x20 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, v4, 1LL) )
    {
      v10 = *((_DWORD *)this + 72);
      if ( v10 <= *((_DWORD *)a3 + 7) )
        v10 = *((_DWORD *)a3 + 7);
      *((_DWORD *)this + 72) = v10;
    }
    else if ( v4 )
    {
      CBaseExpression::NotifyAnimationCompleted(v4);
      if ( *((_BYTE *)a3 + 12) )
        CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 7));
    }
    *((_DWORD *)this + 63) = *((_DWORD *)a3 + 4) ^ _xmm;
    *((_DWORD *)this + 64) = *((_DWORD *)a3 + 5) ^ _xmm;
    *((_BYTE *)this + 596) &= ~0x20u;
  }
  return 0LL;
}
