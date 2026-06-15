/*
 * XREFs of ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1801100A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008D064 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800EDC1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010FF14 (-OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180110144 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall CKsSoftwareNotificationsMonitor::OnNotify(
        CKsSoftwareNotificationsMonitor *this,
        __int64 a2,
        const struct _GUID *a3)
{
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 20) != 3 )
    {
LABEL_11:
      CKsSoftwareNotificationsMonitor::OnVolumeLimitCapsChange(this);
      return 0LL;
    }
LABEL_10:
    CKsSoftwareNotificationsMonitor::OnFormatCapsChange(this);
    return 0LL;
  }
  if ( *(_QWORD *)&a3->Data1 == PINCAPS_FORMATCHANGE_CONTEXT && *(_QWORD *)a3->Data4 == 0xA95C15A5DE2490A6uLL )
    goto LABEL_10;
  if ( *(_QWORD *)&a3->Data1 == VOLUMELIMIT_CONTEXT && *(_QWORD *)a3->Data4 == 0x4B7CC56725C9648FLL )
    goto LABEL_11;
  if ( *(_QWORD *)&a3->Data1 == PINCAPS_INVALIDATECLIENTS_CONTEXT && *(_QWORD *)a3->Data4 == 0x152E9B5B9B81B1BFLL )
    CKsSoftwareNotificationsMonitor::OnClientInvalidation(this);
  return 0LL;
}
