/*
 * XREFs of ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180228710
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065AC80 (-QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065AC90 (-QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065ACA0 (-QueryInterface@CLaunchActivatedEventArgs@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065ACC0 (-QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065ACD0 (-QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065ACE0 (-QueryInterface@CLaunchActivatedEventArgs@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065AD00 (-QueryInterface@CLaunchActivatedEventArgs@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065AD20 (-QueryInterface@CLaunchActivatedEventArgs@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065AD40 (-QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065AD60 (-QueryInterface@CLaunchActivatedEventArgs@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065AD80 (-QueryInterface@CLaunchActivatedEventArgs@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18065ADA0 (-QueryInterface@CLaunchActivatedEventArgs@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>>(
           this,
           a2,
           a3);
}
