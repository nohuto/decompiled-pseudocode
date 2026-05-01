/*
 * XREFs of ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180146590
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680D50 (-QueryInterface@CLaunchActivatedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680D60 (-QueryInterface@CLaunchActivatedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680D70 (-QueryInterface@CLaunchActivatedEventArgs@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680D90 (-QueryInterface@CLaunchActivatedEventArgs@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680DA0 (-QueryInterface@CLaunchActivatedEventArgs@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680DB0 (-QueryInterface@CLaunchActivatedEventArgs@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680DD0 (-QueryInterface@CLaunchActivatedEventArgs@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680DF0 (-QueryInterface@CLaunchActivatedEventArgs@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680E10 (-QueryInterface@CLaunchActivatedEventArgs@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680E30 (-QueryInterface@CLaunchActivatedEventArgs@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680E50 (-QueryInterface@CLaunchActivatedEventArgs@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLaunchActivatedEventArgs@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180680E70 (-QueryInterface@CLaunchActivatedEventArgs@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLaunchActivatedEventArgs::QueryInterface(
        CLaunchActivatedEventArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>>(
           this,
           a2,
           a3);
}
