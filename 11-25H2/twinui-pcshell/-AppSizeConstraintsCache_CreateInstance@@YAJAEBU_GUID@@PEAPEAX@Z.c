/*
 * XREFs of ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180052D44
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180039DF0 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAppSizeConstraintsCache@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSizeConstraintsCache@@@Z @ 0x180052EE8 (--$MakeAndInitialize@VAppSizeConstraintsCache@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSizeCo.c)
 *     ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18018A4A8 (-InternalRelease@-$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppSizeConstraintsCache_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rcx
  volatile signed __int32 *v6; // r8
  signed __int32 v7; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v10);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<AppSizeConstraintsCache,AppSizeConstraintsCache,>(&v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v10);
    return v4;
  }
  else
  {
    v5 = v10;
    *a2 = v10;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (volatile signed __int32 *)v10;
    if ( v10 )
    {
      v10 = 0LL;
      do
        v7 = *((_DWORD *)v6 + 3);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v6 + 3, v7 - 1, v7) );
      if ( v7 == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 40LL))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return 0LL;
  }
}
