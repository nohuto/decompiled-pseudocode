/*
 * XREFs of UmfdHostLifeTimeManager_MmUnmapViewOfSection @ 0x14011DF7C
 * Callers:
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager_MmUnmapViewOfSection(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1472LL);
  if ( v4 )
    return v4(a1, a2);
  else
    return 3221225659LL;
}
