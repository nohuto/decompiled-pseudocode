/*
 * XREFs of ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006743C
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x1800687A4 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 *     ??$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18008B0F4 (--$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@V1?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@23@YAJ01K2@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@@Z @ 0x180066B54 (--$MakeAndInitialize@VCompletionDelegate@-1---$WaitForCompletion@PEAUIAsyncAction@Foundation@Win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        DWORD a2,
        int a3)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  HANDLE pHandles; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  DWORD dwindex; // [rsp+68h] [rbp+28h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = a3;
  dwindex = a2;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v4 = ___MakeAndInitialize_VCompletionDelegate__1____WaitForCompletion_PEAUIAsyncAction_Foundation_Windows___details_wil__YAJPEAUIAsyncAction_Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z_V1_1____WaitForCompletion_PEAUIAsyncAction_Foundation_Windows___23_YAJ01K2_Z___V_Details_WRL_Microsoft__YAJPEAPEAVCompletionDelegate__1____WaitForCompletion_PEAUIAsyncAction_Foundation_Windows___details_wil__YAJPEAUIAsyncAction_Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z__Z(&v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1608LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[6])(a1, v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1609LL;
    goto LABEL_5;
  }
  pHandles = *(HANDLE *)(v14 + 56);
  dwindex = 0;
  v4 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1621LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v14 + 48) == 1 )
  {
    v5 = 0;
  }
  else
  {
    v9 = 0LL;
    v7 = **a1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    v5 = v7(a1, &GUID_00000036_0000_0000_c000_000000000046, &v9);
    if ( v5 >= 0 )
    {
      v13 = -2147418113;
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 64LL))(v9, &v13);
      if ( v5 >= 0 )
        v5 = v13;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return (unsigned int)v5;
}
