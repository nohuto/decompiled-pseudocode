/*
 * XREFs of ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x18029E1AC
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x1801319A8 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18029D19C (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreateTaskPool(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        __int64 **a3,
        struct DDisplayTaskPoolResources *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, GUID *, __int128 *); // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, _QWORD, char *); // rbx
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64 *, _QWORD, GUID *, __int64 *); // rdi
  unsigned int v21; // [rsp+20h] [rbp-40h]
  GUID v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  __int128 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h] BYREF

  v4 = *a3;
  v24 = 0LL;
  v25 = 0LL;
  v7 = *v4;
  v23 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 64))(v4, &v23);
  v10 = v9;
  if ( v9 < 0 )
  {
    v21 = 527;
    goto LABEL_12;
  }
  v11 = *((_QWORD *)a2 + 68);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int128 *))(*(_QWORD *)v11 + 544LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v24);
  v13 = v12(v11, 0LL, 2LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, &v24);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x215u, 0LL);
    goto LABEL_13;
  }
  v14 = v24;
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, char *))(*(_QWORD *)v24 + 56LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&v24 + 1,
    0LL);
  v9 = v15(v14, 0LL, 0x10000000LL, 0LL, (char *)&v24 + 8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v21 = 540;
    goto LABEL_12;
  }
  v16 = v25;
  v17 = a3[4];
  v18 = *v17;
  v25 = 0LL;
  v19 = *(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v18 + 32);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v22 = GUID_04dcf9ef_3406_5700_8fec_77eba4c5a74b;
  v9 = v19(v17, *((_QWORD *)&v24 + 1), &v22, &v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    v21 = 545;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v21, 0LL);
    goto LABEL_13;
  }
  DDisplayTaskPoolResources::operator=((__int64 *)a4, &v23);
LABEL_13:
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)&v23);
  return v10;
}
