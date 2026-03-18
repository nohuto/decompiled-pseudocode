/*
 * XREFs of ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14011DE58 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C6124 (-vFreeKernelSection@@YAXPEAX@Z.c)
 * Callees:
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140083AF8 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     UmfdHostLifeTimeManager_MmUnmapViewOfSection @ 0x14011DF7C (UmfdHostLifeTimeManager_MmUnmapViewOfSection.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

bool __fastcall Gre::MapViewOfSectionObj::Unmap(Gre::MapViewOfSectionObj *this, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rcx
  bool result; // al
  int (*v7)(void); // rax
  NTSTATUS v8; // eax
  struct _GRETHREAD *CurrentThread; // rax
  void *v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  __int64 CurrentProcess; // rax

  v3 = *((unsigned int *)this + 10);
  if ( (_DWORD)v3 && (v3 = (unsigned int)(v3 - 1), (_DWORD)v3) )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      CurrentThread = GreGetCurrentThread();
      v10 = (void *)*((_QWORD *)this + 2);
      v12 = UMPDGetThreadClientPID(CurrentThread, v11);
      Gre::MapViewOfSectionObj::Unmap(v12, v10);
      return 0;
    }
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
        return 0;
      v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, a2) + 24) + 1464LL);
      if ( !v7 || v7() < 0 )
        return 0;
      v8 = UmfdHostLifeTimeManager_MmUnmapViewOfSection(*((_QWORD *)this + 2), *(_QWORD *)this);
    }
    else
    {
      v8 = MmUnmapViewInSessionSpace(*((PVOID *)this + 2));
    }
  }
  else
  {
    v13 = *((_QWORD *)this + 2);
    CurrentProcess = PsGetCurrentProcess(v3, a2);
    v8 = MmUnmapViewOfSection(CurrentProcess, v13);
  }
  if ( v8 < 0 )
    return 0;
  *((_QWORD *)this + 2) = 0LL;
  result = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 5;
  return result;
}
