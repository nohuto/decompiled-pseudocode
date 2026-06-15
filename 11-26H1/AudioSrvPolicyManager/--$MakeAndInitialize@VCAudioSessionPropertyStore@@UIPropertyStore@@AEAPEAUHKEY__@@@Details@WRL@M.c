/*
 * XREFs of ??$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUHKEY__@@@Z @ 0x1800032E8
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180002654 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800021E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 *     ??0CAudioSessionPropertyStore@@QEAA@XZ @ 0x1800033E0 (--0CAudioSessionPropertyStore@@QEAA@XZ.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x180003488 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180003D2C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UI.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180004A60 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionPropertyStore,IPropertyStore,HKEY__ * &>(
        _QWORD *a1,
        __int64 *a2)
{
  CAudioSessionPropertyStore *v4; // rax
  CAudioSessionPropertyStore *v6; // rax
  __int64 v7; // rbp
  CAudioSessionPropertyStore *v8; // rbx
  HKEY v9; // rdi
  int PropertyStore; // eax
  unsigned int v11; // edi
  volatile int *v12; // rdx
  volatile int *v13; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CAudioSessionPropertyStore *)operator new[](0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v6 = CAudioSessionPropertyStore::CAudioSessionPropertyStore(v4);
  v7 = *a2;
  v8 = v6;
  v17 = 0LL;
  v9 = (HKEY)*((_QWORD *)v6 + 7);
  if ( v9 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v16);
    RegCloseKey(v9);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v16);
  }
  *((_QWORD *)v8 + 7) = v7;
  PropertyStore = CAudioSessionPropertyStore::LoadPropertyStore(v8);
  v11 = PropertyStore;
  if ( PropertyStore >= 0 )
  {
    v11 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>>(
            v8,
            &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
            a1);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::Release(
        (__int64)v8,
        v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F0,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)PropertyStore,
      v14);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::Release(
        (__int64)v8,
        v12);
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v17);
  }
  return v11;
}
