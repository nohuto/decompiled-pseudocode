/*
 * XREFs of ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14009ED44
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x14009E158 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14009E81C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400A3D68 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpNotifyLSurface(_QWORD *a1, HLSURF a2, int a3, int a4, struct _CD_HLSURF_CREATIONCONTEXT *a5)
{
  HSEMAPHORE v7; // rbx
  __int64 v9; // r14
  unsigned int v10; // edi
  struct _GRETHREAD *v11; // rax
  __int64 v14; // xmm1_8
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-28h]
  _QWORD *v18; // [rsp+80h] [rbp+8h] BYREF

  v18 = a1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v7 = (HSEMAPHORE)a1[6];
  v9 = a3;
  GreAcquireSemaphoreInternal(v7);
  GrepAcquireLockValidate<8>();
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v18) )
  {
    *(_QWORD *)&v15 = a2;
    DWORD2(v15) = a4;
    if ( a5 )
    {
      v14 = *((_QWORD *)a5 + 2);
      v16 = *(_OWORD *)a5;
      v17 = v14;
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int128 *))a1[428])(
            a1[223],
            65541 - (unsigned int)((_DWORD)v9 != 0),
            40LL,
            &v15);
    EtwBindLogicalSurfaceRHEvent(a2, v9);
  }
  else
  {
    v10 = -1073741822;
  }
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v7);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    if ( v11 )
    {
      if ( (*((_BYTE *)v11 + 16))-- == 1 )
        *(_QWORD *)v11 &= ~0x100uLL;
      if ( !*(_QWORD *)v11 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
  return v10;
}
