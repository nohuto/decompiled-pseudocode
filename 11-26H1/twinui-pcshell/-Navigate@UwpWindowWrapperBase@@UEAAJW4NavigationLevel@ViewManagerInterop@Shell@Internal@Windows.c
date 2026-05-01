/*
 * XREFs of ?Navigate@UwpWindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::Navigate(__int64 a1, int a2)
{
  _OWORD *v2; // rsi
  DWORD CurrentThreadId; // r14d
  HRESULT ApartmentType; // eax
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  const char *v9; // r9
  __int64 result; // rax
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  APTTYPE pAptType; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+20h] BYREF

  v14 = a2;
  v2 = (_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v11, &v14, a1 - 8);
  CurrentThreadId = GetCurrentThreadId();
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  try
  {
    if ( ApartmentType < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      v5 = 0;
    else
      v5 = 4;
    v15 = 0;
    v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
      *((_OWORD *)v7 + 1) = *v2;
      *v7 = &off_18070CE00;
      v7[4] = &v15;
    }
    else
    {
      v7 = 0LL;
    }
    v8 = SHTaskPoolQueueTask(v5, 32LL, CurrentThreadId);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    if ( v8 >= 0 )
      v8 = v15;
    result = (unsigned int)v8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x368,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return result;
}
