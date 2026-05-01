/*
 * XREFs of ?CFrameApplicationPresentation_CreateInstance@@YAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180224138
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800A8800 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802A50B4 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation_CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        char a3,
        struct IIAMServiceProvider *a4,
        struct IImmersiveApplicationInternal *a5,
        const struct _GUID *a6,
        void **a7)
{
  int v7; // ebx
  const struct _GUID *v8; // rcx
  const unsigned __int16 *v10; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF
  char v12; // [rsp+60h] [rbp+28h] BYREF
  struct IIAMServiceProvider *v13; // [rsp+68h] [rbp+30h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v10 = a1;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
         (unsigned int)&a6,
         (unsigned int)&v10,
         (unsigned int)&v11,
         (unsigned int)&v12,
         (__int64)&v13,
         (__int64)&a5);
  if ( v7 >= 0 )
    v7 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&a6->Data1)(
           a6,
           &GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0,
           a7);
  v8 = a6;
  if ( a6 )
  {
    a6 = 0LL;
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v8->Data1 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
