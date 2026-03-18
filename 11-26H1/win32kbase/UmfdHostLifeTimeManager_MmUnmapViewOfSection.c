/*
 * XREFs of UmfdHostLifeTimeManager_MmUnmapViewOfSection @ 0x140163130
 * Callers:
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x140024EA0 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager_MmUnmapViewOfSection(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1432LL);
  if ( v4 )
    return v4(a1, a2);
  else
    return 3221225659LL;
}
