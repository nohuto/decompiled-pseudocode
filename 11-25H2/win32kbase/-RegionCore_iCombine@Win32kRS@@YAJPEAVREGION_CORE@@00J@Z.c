/*
 * XREFs of ?RegionCore_iCombine@Win32kRS@@YAJPEAVREGION_CORE@@00J@Z @ 0x1400F32DC
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F310C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_iCombine(
        Win32kRS *this,
        struct REGION_CORE *a2,
        struct REGION_CORE *a3,
        struct REGION_CORE *a4)
{
  struct REGION_CORE *v4; // rdi
  unsigned int v5; // esi
  char *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // esi

  v4 = qword_1402A10B0;
  v5 = (unsigned int)a4;
  v9 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9, 2LL);
  v10 = *(_QWORD *)v4;
  v11 = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, struct REGION_CORE *, _QWORD))(v10 + 192))(
          this,
          a2,
          a3,
          v5);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v10 + 216))(this) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, this, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v9, 2LL);
  KeLeaveCriticalRegion();
  return v11;
}
