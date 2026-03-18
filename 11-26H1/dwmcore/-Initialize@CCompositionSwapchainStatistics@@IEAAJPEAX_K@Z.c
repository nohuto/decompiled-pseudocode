/*
 * XREFs of ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x180132868
 * Callers:
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x180112280 (-Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Initialize(
        CCompositionSwapchainStatistics *this,
        void *a2,
        __int64 a3)
{
  char *v3; // rbx
  unsigned int v7; // edi
  __int64 v9; // rcx
  int v10; // eax
  char *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v7 = 0;
  if ( !a2 )
    goto LABEL_2;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v11,
    0LL);
  v9 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = OpenFlipConsumer(a2, (char *)this + 64, &v11);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v3 = v11;
LABEL_2:
    *((_QWORD *)this + 9) = a3;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x31u, 0LL);
  v3 = v11;
LABEL_3:
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  return v7;
}
