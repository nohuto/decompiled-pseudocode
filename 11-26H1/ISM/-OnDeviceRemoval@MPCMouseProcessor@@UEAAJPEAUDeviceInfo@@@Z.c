/*
 * XREFs of ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007BD80 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x18008EB40 (-_Erase@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@st.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800980A0 (-count@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCMouseProcessor::OnDeviceRemoval(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  const char *v3; // r9
  unsigned int *v4; // r10
  __int64 *v5; // r11
  __int64 *v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  unsigned int v10; // r9d
  const char *v11; // r9
  int v12; // eax
  __int64 result; // rax
  int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::count(
          (char *)this + 5360,
          a2) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x189,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      v3);
  v6 = (__int64 *)*v5;
  v7 = (__int64 *)*v5;
  v8 = *(__int64 **)(*v5 + 8);
  v9 = v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v10 = *v4;
    do
    {
      if ( *((_DWORD *)v9 + 8) >= v10 )
      {
        if ( *((_BYTE *)v7 + 25) && v10 < *((_DWORD *)v9 + 8) )
          v7 = v9;
        v6 = v9;
      }
      else
      {
        v9 += 2;
      }
      v9 = (__int64 *)*v9;
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( !*((_BYTE *)v7 + 25) )
    v8 = (__int64 *)*v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( *v4 >= *((_DWORD *)v8 + 8) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
  }
  v15 = v7;
  *(_QWORD *)v14 = v6;
  if ( !std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Erase(
          v5,
          v14) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      v11);
  if ( *((_QWORD *)this + 671) )
    return 0LL;
  v12 = MPCInputProviderBase::OnDeviceRemoval(this, *((struct DeviceInfo **)this + 6));
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v12,
      v14[0]);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 460) + 40LL))(
             *((_QWORD *)this + 460),
             *((_QWORD *)this + 6));
  if ( (int)result < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)result,
      v14[0]);
  return result;
}
