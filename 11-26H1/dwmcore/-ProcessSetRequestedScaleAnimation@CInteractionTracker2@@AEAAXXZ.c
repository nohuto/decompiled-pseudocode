/*
 * XREFs of ?ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ @ 0x1802753D0
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550 (-NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180276224 (-SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessSetRequestedScaleAnimation(CInteractionTracker2 *this)
{
  __int64 *v1; // rsi
  CBaseExpression *v3; // rdi
  __int64 v4; // rdx
  int v5; // eax

  v1 = (__int64 *)((char *)this + 968);
  v3 = (CBaseExpression *)*((_QWORD *)this + 121);
  if ( !v3 || (*((_BYTE *)v3 + 216) & 8) == 0 )
  {
    v4 = *((_QWORD *)this + 121);
    *((_BYTE *)this + 828) ^= (*((_BYTE *)this + 828) ^ (*((_BYTE *)this + 828) << 6)) & 0x40;
    if ( (unsigned __int8)CInteractionTracker2::SetCustomAnimation(this, v4, 1LL) )
    {
      v5 = *((_DWORD *)this + 131);
      if ( v5 <= *((_DWORD *)this + 67) )
        v5 = *((_DWORD *)this + 67);
      *((_DWORD *)this + 131) = v5;
    }
    else if ( v3 )
    {
      CBaseExpression::NotifyAnimationCompleted(v3);
      if ( (*((_BYTE *)this + 828) & 1) == 0 )
        CInteractionTracker2::NotifyRequestIgnored(this, *((_DWORD *)this + 67));
    }
    *((_DWORD *)this + 123) = *((_DWORD *)this + 64) ^ _xmm;
    *((_DWORD *)this + 124) = *((_DWORD *)this + 65) ^ _xmm;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
    *((_BYTE *)this + 828) &= ~0x40u;
  }
}
