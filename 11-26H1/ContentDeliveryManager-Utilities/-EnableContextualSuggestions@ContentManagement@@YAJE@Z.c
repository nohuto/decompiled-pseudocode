/*
 * XREFs of ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x18002E7BC
 * Callers:
 *     ?put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z @ 0x18003F9E0 (-put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIProcessContextualSuggestionsEvent@ContentManagement@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIProcessContextualSuggestionsEvent@ContentManagement@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023AC8 (--$ActivateInstance@V-$ComPtr@UIProcessContextualSuggestionsEvent@ContentManagement@@@WRL@Micros.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180027C60 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::EnableContextualSuggestions(ContentManagement *this)
{
  char v1; // si
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD); // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rdx
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v1 = (char)this;
  v13 = 0LL;
  if ( WindowsCreateStringReference(L"ContentManagement.ContentManagementService", 0x2Au, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<ContentManagement::IProcessContextualSuggestionsEvent>>(
         (__int64)string,
         &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v12 = 0LL;
    v4 = v13;
    v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    LOBYTE(v6) = v1;
    v7 = v5(v4, v6, &v12);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
             v12,
             v8,
             v9);
      v3 = v7;
      if ( v7 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
        v3 = 0;
        goto LABEL_11;
      }
      v10 = 104LL;
    }
    else
    {
      v10 = 103LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7,
      (int)v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v2,
      (int)v12);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v3;
}
