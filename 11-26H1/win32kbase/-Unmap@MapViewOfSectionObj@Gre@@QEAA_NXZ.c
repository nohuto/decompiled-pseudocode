/*
 * XREFs of ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x140024EA0
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400246B0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C0010 (-vFreeKernelSection@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140024160 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     UmfdHostLifeTimeManager_MmUnmapViewOfSection @ 0x140163130 (UmfdHostLifeTimeManager_MmUnmapViewOfSection.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall Gre::MapViewOfSectionObj::Unmap(Gre::MapViewOfSectionObj *this)
{
  int v1; // edx
  int v3; // edx
  __int64 v4; // rdx
  int v5; // edx
  NTSTATUS v6; // eax
  bool result; // al
  int v8; // edx
  int (*v9)(void); // rax
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  struct _GRETHREAD *CurrentThread; // rax
  void *v13; // rbx
  int v14; // eax

  v1 = *((_DWORD *)this + 8);
  if ( v1 && (v3 = v1 - 1) != 0 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( !(_DWORD)v4 )
    {
      CurrentThread = GreGetCurrentThread((__int64)this, v4);
      v13 = (void *)*((_QWORD *)this + 2);
      v14 = UMPDGetThreadClientPID(CurrentThread);
      Gre::MapViewOfSectionObj::Unmap(v14, v13);
      return 0;
    }
    v5 = v4 - 1;
    if ( v5 && (v8 = v5 - 1) != 0 )
    {
      if ( v8 != 1 )
        return 0;
      v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 24) + 1424LL);
      if ( !v9 || v9() < 0 )
        return 0;
      v6 = UmfdHostLifeTimeManager_MmUnmapViewOfSection(*((_QWORD *)this + 2), *(_QWORD *)this);
    }
    else
    {
      v6 = MmUnmapViewInSessionSpace(*((PVOID *)this + 2));
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 2);
    CurrentProcess = PsGetCurrentProcess();
    v6 = MmUnmapViewOfSection(CurrentProcess, v10);
  }
  if ( v6 >= 0 )
  {
    *((_QWORD *)this + 2) = 0LL;
    result = 1;
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 8) = 6;
    return result;
  }
  return 0;
}
