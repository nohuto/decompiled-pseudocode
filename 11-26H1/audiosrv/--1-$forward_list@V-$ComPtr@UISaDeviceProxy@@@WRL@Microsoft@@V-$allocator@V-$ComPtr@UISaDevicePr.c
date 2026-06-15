/*
 * XREFs of ??1?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800E0344
 * Callers:
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$0 @ 0x180168AE3 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_180168AE3.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$1 @ 0x180168AF5 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_180168AF5.c)
 *     _CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor$0 @ 0x180168E67 (_CBtAudioResourceManagerBase--ReleaseSaDevices_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor$1 @ 0x180168E79 (_CBtAudioResourceManagerBase--ReleaseSaDevices_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$6 @ 0x180168EE5 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        _QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1 + 1);
      std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
