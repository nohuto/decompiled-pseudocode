/*
 * XREFs of ??$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A412C
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18065578C (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A4208 (--0SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A2CDC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  std::_Ref_count_base *v12; // rcx
  _QWORD v14[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v16; // [rsp+40h] [rbp-18h]
  _DWORD *v17; // [rsp+60h] [rbp+8h]

  v17 = operator new(0x70uLL);
  *(_OWORD *)v17 = 0LL;
  v17[2] = 1;
  v17[3] = 1;
  *(_QWORD *)v17 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator>::`vftable';
  winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::SwitchProviderActivator(v17 + 4, a2);
  *a1 = v4;
  a1[1] = v5;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v7 = (std::_Ref_count_base *)a1[1];
      v14[1] = v7;
      v14[0] = v4;
      v8 = (__int64 *)std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(v15, v14);
      v10 = *v8;
      *v8 = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 32) = v10;
      v11 = v8[1];
      v8[1] = *(_QWORD *)(v9 + 40);
      v12 = v16;
      *(_QWORD *)(v9 + 40) = v11;
      if ( v12 )
        std::_Ref_count_base::_Decwref(v12);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
  }
  return a1;
}
