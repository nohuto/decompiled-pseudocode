/*
 * XREFs of ?RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z @ 0x140098E60
 * Callers:
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140098DA0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_fill_path_with_outline(
        Win32kRS *this,
        const struct REGION_CORE *a2,
        struct EPATHOBJ *a3,
        const struct EXFORMOBJ *a4)
{
  struct REGION_CORE *v4; // rdi
  char *v8; // rbx

  v4 = qword_1402A10B0;
  v8 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  LODWORD(v4) = (*(__int64 (__fastcall **)(Win32kRS *, const struct REGION_CORE *, struct EPATHOBJ *))(*(_QWORD *)v4 + 312LL))(
                  this,
                  a2,
                  a3);
  ExReleasePushLockSharedEx(v8, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
