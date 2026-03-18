/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18027E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x1800D5FD4 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18021DFE8 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::NotifyOnChanged(CProjectedShadowReceiver *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdx
  struct CBrush *EffectiveMaskBrush; // rax
  volatile signed __int32 **v5; // rcx
  struct CBrush *v6; // rdx

  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( (CProjectedShadowReceiver *)a3 == a1 )
    {
      CResource::NotifyOnChanged((__int64)a1, a2, a3);
    }
    else
    {
      v3 = *((_QWORD *)a1 + 14);
      if ( v3 && a3 == v3 )
      {
        EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(a1);
        if ( v6 == EffectiveMaskBrush )
          CProjectedShadowReceiver::InvalidateMaskContent(v5);
      }
    }
  }
}
