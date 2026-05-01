/*
 * XREFs of ??$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A1CA8
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18065578C (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A1DA0 (--0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A2CDC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
        _QWORD *a1,
        __int64 a2)
{
  char *v4; // rsi
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  char v12[8]; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-18h]

  v4 = (char *)operator new(0xC0uLL);
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::`vftable';
  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler(v4 + 16, a2);
  *a1 = v4 + 16;
  a1[1] = v4;
  if ( v4 != (char *)-16LL )
  {
    v5 = *((_QWORD *)v4 + 12);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      v11[0] = v4 + 16;
      v6 = (std::_Ref_count_base *)a1[1];
      v11[1] = v6;
      v7 = (__int64 *)std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(v12, v11);
      v8 = *v7;
      *v7 = *((_QWORD *)v4 + 11);
      *((_QWORD *)v4 + 11) = v8;
      v9 = v7[1];
      v7[1] = *((_QWORD *)v4 + 12);
      *((_QWORD *)v4 + 12) = v9;
      if ( v13 )
        std::_Ref_count_base::_Decwref(v13);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
    }
  }
  return a1;
}
