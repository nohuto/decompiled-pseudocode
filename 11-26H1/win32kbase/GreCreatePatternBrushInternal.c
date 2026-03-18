/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1400243A0
 * Callers:
 *     GreCreatePatternBrush @ 0x140198A40 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140023450 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140024FB0 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140025048 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rdi
  unsigned int v7; // r8d
  unsigned int v8; // edx
  HSURF Clone; // rdx
  __int64 v10; // rax
  BOOL v11; // r9d
  __int64 v12; // rcx
  __int64 SessionState; // rax
  __int64 v14; // rcx
  ULONG v15; // ecx
  __int64 v16; // rax
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[4]; // [rsp+48h] [rbp-B8h] BYREF
  struct SURFACE *v20; // [rsp+68h] [rbp-98h]
  unsigned int *v21; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v22[4]; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+A0h] [rbp-60h]
  _BYTE v24[96]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0LL;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v18);
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v19);
  SURFREF::vLock((SURFREF *)v19, (HSURF)a1);
  if ( !v20 )
  {
    v15 = 6;
LABEL_16:
    EngSetLastError(v15);
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v20 + 28) & 0x4000000) == 0 )
  {
    v15 = 87;
    goto LABEL_16;
  }
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v24);
  if ( a3 )
  {
    v8 = 8;
    v7 = 8;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  Clone = (HSURF)hbmCreateClone(v20, v8, v7);
  if ( Clone )
  {
    v10 = *((_QWORD *)v20 + 16);
    v11 = v10 && (*(_DWORD *)(v10 + 24) & 0x2000) != 0;
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)&v21, Clone, a1, v11, 0, 0x40u, a2);
    if ( v21 )
    {
      v6 = *(_QWORD *)v21;
      v23 = 1;
      SessionState = W32GetSessionState(v12);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v21);
      if ( !v23 )
        bDeleteBrush(*(HBRUSH *)v21);
      v21 = 0LL;
    }
    PopThreadGuardedObject(v22);
  }
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v24);
LABEL_17:
  if ( v20 )
  {
    v16 = W32GetSessionState(v14);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v16 + 88), (unsigned int *)v20);
  }
  PopThreadGuardedObject(v19);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v18);
  return v6;
}
