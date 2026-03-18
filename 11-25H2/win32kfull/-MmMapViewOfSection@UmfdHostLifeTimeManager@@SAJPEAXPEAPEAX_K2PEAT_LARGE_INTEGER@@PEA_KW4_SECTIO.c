/*
 * XREFs of ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1401B5FA0
 * Callers:
 *     UmfdHostLifeTimeManager_MmMapViewOfSection @ 0x1401B5F40 (UmfdHostLifeTimeManager_MmMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmMapViewOfSection(
        void *a1,
        void **a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6,
        enum _SECTION_INHERIT a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 *a10)
{
  struct W32_PUSH_LOCK *v14; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rbx
  unsigned int v20; // esi

  v14 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 24256LL);
  GreAcquirePushLockShared(v14);
  if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v16, v15) + 96) + 24288LL) )
  {
    v19 = *(_QWORD *)(W32GetSessionState(v18, v17) + 96);
    v20 = MmMapViewOfSection(a1, *(_QWORD *)(v19 + 24192), a2, a3, a4, a5, a6, a7, a8, a9);
    *a10 = *(_QWORD *)(v19 + 24184);
    if ( v14 )
      GreReleasePushLockShared(v14);
    return v20;
  }
  else
  {
    if ( v14 )
      GreReleasePushLockShared(v14);
    return 3221225473LL;
  }
}
