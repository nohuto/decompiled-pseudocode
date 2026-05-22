/*
 * XREFs of ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x180159598
 * Callers:
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015974C (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 * Callees:
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x18007EB58 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C7E80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyControllerClientProxy::EdgyControllerClientProxy(__int64 a1, _QWORD *a2)
{
  struct EdgyConnection *v4; // rax
  struct EdgyConnection *v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoEdgyControllerClientProxyImpl::`vftable';
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &EdgyControllerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(a1 + 8) = &EdgyControllerClientProxy::`vftable'{for `IEdgyControllerClientProxy'};
  std::wstring::wstring(a1 + 88);
  v4 = EdgyConnection::Get();
  v5 = v4;
  *(_QWORD *)(a1 + 120) = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 128) = *a2;
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(a1 + 128, v5);
  if ( !*a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x27,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\server\\edgycontrolle"
           "rclientproxy.cpp",
      v6);
  if ( !*(_QWORD *)(a1 + 120) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\server\\edgycontrolle"
           "rclientproxy.cpp",
      v6);
  return a1;
}
