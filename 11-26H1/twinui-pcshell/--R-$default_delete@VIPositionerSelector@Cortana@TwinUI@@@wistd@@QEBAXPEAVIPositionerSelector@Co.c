/*
 * XREFs of ??R?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@QEBAXPEAVIPositionerSelector@Cortana@TwinUI@@@Z @ 0x180371D78
 * Callers:
 *     ??1?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1803719BC (--1-$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U-$default_delete@VIPositionerSelector@Cort.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x180371ABC (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180374FC0 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803750FC (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::default_delete<TwinUI::Cortana::IPositionerSelector>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 1LL);
  return result;
}
