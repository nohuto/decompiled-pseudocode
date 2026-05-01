/*
 * XREFs of ??$make_unique_nothrow@VCortanaPositionerSelector@Cortana@TwinUI@@AEAPEAUIServiceProvider@@PEAVCortanaExperienceManagerNotification@@@wil@@YA?AV?$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U?$default_delete@VCortanaPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@AEAPEAUIServiceProvider@@$$QEAPEAVCortanaExperienceManagerNotification@@@Z @ 0x180370E20
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180374FC0 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::make_unique_nothrow<TwinUI::Cortana::CortanaPositionerSelector,IServiceProvider * &,CortanaExperienceManagerNotification *>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = (*a3 + 8LL) & -(__int64)(*a3 != 0LL);
    v8 = *a2;
    *v6 = &TwinUI::Cortana::CortanaPositionerSelector::`vftable';
    v6[1] = 0LL;
    v6[2] = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    v6[4] = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6 + 4);
    v6[5] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = v6;
  return a1;
}
