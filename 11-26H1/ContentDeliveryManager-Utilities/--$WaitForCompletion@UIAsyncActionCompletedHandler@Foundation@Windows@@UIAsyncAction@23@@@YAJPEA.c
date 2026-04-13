/*
 * XREFs of ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180027C60
 * Callers:
 *     ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x18002E7BC (-EnableContextualSuggestions@ContentManagement@@YAJE@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VFTMEventDelegate@?1???$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@V1?1???$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJ012@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVFTMEventDelegate@?1???$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@@Z @ 0x1800258F0 (--$MakeAndInitialize@VFTMEventDelegate@-1---$WaitForCompletion@UIAsyncActionCompletedHandler@Fou.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18003A9E4 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int a2,
        __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // r9d
  int v6; // eax
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v9; // [rsp+20h] [rbp-20h]
  unsigned int v10; // [rsp+28h] [rbp-18h]
  void *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  int (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+38h] BYREF

  v14 = a3;
  v13 = a2;
  v15 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v4 = ___MakeAndInitialize_VFTMEventDelegate__1____WaitForCompletion_UIAsyncActionCompletedHandler_Foundation_Windows__UIAsyncAction_23___YAJPEAUIAsyncAction_Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z_V1_1____WaitForCompletion_UIAsyncActionCompletedHandler_Foundation_Windows__UIAsyncAction_23___YAJ012_Z___V_Details_WRL_Microsoft__YAJPEAPEAVFTMEventDelegate__1____WaitForCompletion_UIAsyncActionCompletedHandler_Foundation_Windows__UIAsyncAction_23___YAJPEAUIAsyncAction_Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z__Z(&v14);
  v13 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[6])(a1, v14);
    v13 = v4;
    if ( v4 >= 0 )
    {
      v11[0] = *(void **)(v14 + 56);
      v11[1] = 0LL;
      if ( SHProcessMessagesUntilEventsEx((HWND)v11[0], v11, 1u, v5, v9, v10) == -1 )
      {
        v6 = -2147467259;
        v13 = -2147467259;
      }
      else
      {
        v6 = v13;
      }
      v12 = 0LL;
      if ( v6 >= 0 && *(_DWORD *)(v14 + 48) != 1 )
      {
        v7 = **a1;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
        if ( v7(a1, &GUID_00000036_0000_0000_c000_000000000046, &v12) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 64LL))(v12, &v13);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      v4 = v13;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return (unsigned int)v4;
}
