/*
 * XREFs of ??1?$com_ptr_t@UIImmersiveShellBroker@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180008E30
 * Callers:
 *     SetGamingFullScreenExperience$dtor$0 @ 0x1800105E8 (SetGamingFullScreenExperience$dtor$0.c)
 *     SetGamingFullScreenExperience$dtor$1 @ 0x1800105FA (SetGamingFullScreenExperience$dtor$1.c)
 *     IsGamingFullScreenExperienceActive$dtor$4 @ 0x18001063F (IsGamingFullScreenExperienceActive$dtor$4.c)
 *     IsGamingFullScreenExperienceActive$dtor$3 @ 0x180010651 (IsGamingFullScreenExperienceActive$dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>::~com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
