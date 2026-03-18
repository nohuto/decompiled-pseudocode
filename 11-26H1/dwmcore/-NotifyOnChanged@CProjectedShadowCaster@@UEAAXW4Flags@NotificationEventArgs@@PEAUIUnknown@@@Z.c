/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D3E30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x1800D5FB4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 */

void __fastcall CProjectedShadowCaster::NotifyOnChanged(CProjectedShadowCaster *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdx
  struct CBrush *EffectiveMaskBrush; // rax
  CProjectedShadowCaster *v5; // rcx
  struct CBrush *v6; // rdx
  __int64 v7; // rax

  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( (CProjectedShadowCaster *)a3 == a1 )
    {
      CResource::NotifyOnChanged((__int64)a1, a2, a3);
    }
    else
    {
      v3 = *((_QWORD *)a1 + 17);
      if ( v3 && a3 == v3 )
      {
        EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(a1);
        if ( v6 == EffectiveMaskBrush )
          CProjectedShadowCaster::InvalidateMaskContent(v5);
      }
      else
      {
        v7 = *((_QWORD *)a1 + 16);
        if ( v7 && a3 == v7 )
          CProjectedShadowCaster::RequestRedraw(a1);
      }
    }
  }
}
