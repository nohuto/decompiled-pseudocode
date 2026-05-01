/*
 * XREFs of ??$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802A3BE4
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18065578C (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1802A3C9C (--$-0$$V@-$_Ref_count_obj2@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A2CDC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::BootProviderActivator,>(
        _QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  std::_Ref_count_base *v9; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-18h]
  void *v14; // [rsp+60h] [rbp+8h]

  v14 = operator new(0x58uLL);
  v2 = std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>(v14);
  a1[1] = v2;
  *a1 = v2 + 16;
  if ( v2 != -16 )
  {
    v3 = *(_QWORD *)(v2 + 56);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( v2 )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      v4 = (std::_Ref_count_base *)a1[1];
      v11[1] = v4;
      v11[0] = v2 + 16;
      v5 = (__int64 *)std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(v12, v11);
      v7 = *v5;
      *v5 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 32) = v7;
      v8 = v5[1];
      v5[1] = *(_QWORD *)(v6 + 40);
      v9 = v13;
      *(_QWORD *)(v6 + 40) = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
    }
  }
  return a1;
}
