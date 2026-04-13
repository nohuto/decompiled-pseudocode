/*
 * XREFs of ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800B45A8
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800B0210 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::BackfillItems(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  __int64 *v11; // rbp
  unsigned int v12; // r8d
  __int64 *v13; // r12
  _BYTE *v14; // rdi
  __int64 v15; // r13
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-B8h]
  _QWORD *v21; // [rsp+40h] [rbp-98h]
  const WCHAR *v22; // [rsp+48h] [rbp-90h] BYREF
  __int64 v23; // [rsp+50h] [rbp-88h]
  __int64 (__fastcall *v24)(__int64, PVOID, __int64, __int64); // [rsp+58h] [rbp-80h]
  __int64 *v25; // [rsp+60h] [rbp-78h] BYREF
  std::_Ref_count_base *v26; // [rsp+68h] [rbp-70h]
  HSTRING_HEADER v27; // [rsp+70h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v21 = a3;
  v3 = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = v5;
    v9 = *v3;
    result = (v3[1] - *v3) >> 4;
    if ( v4 >= result )
      return result;
    result = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a3[1] - *a3) >> 3);
    if ( v5 >= result )
      return result;
    v11 = (__int64 *)(v6 + *a3);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      &v25,
      (__int64 *)(v7 + v9));
    v13 = v25;
    v14 = v11 + 6;
    if ( *((_BYTE *)v25 + 48) )
    {
      ++v4;
      v7 += 16LL;
    }
    else if ( !*v14 )
    {
      v24 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64))(*(_QWORD *)a1 + 48LL);
      v15 = v25[1];
      v23 = *v25;
      if ( (unsigned __int64)v11[3] >= 8 )
        v11 = (__int64 *)*v11;
      v22 = (const WCHAR *)v11;
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, &v22, v12);
      v17 = v24(a1, v16[1].Reserved.Reserved1, v23, v15);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          151LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
          (const char *)(unsigned int)v17,
          v18);
      *((_BYTE *)v13 + 48) = 1;
      *v14 = 1;
      ++v4;
      v7 += 16LL;
      ++v5;
      v6 += 56LL;
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
      goto LABEL_19;
    }
    if ( *v14 )
      v6 += 56LL;
    ++v5;
    if ( !*v14 )
      v5 = v8;
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
LABEL_19:
    v3 = a2;
    a3 = v21;
  }
}
