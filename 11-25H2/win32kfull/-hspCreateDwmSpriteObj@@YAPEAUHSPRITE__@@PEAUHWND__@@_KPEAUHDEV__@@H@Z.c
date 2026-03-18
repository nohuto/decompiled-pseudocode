/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1401735A8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14005B174 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14008FAA0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400920E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x140095D60 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x14009797C (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140099690 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14017387C (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1401742B8 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?InterlockedIncrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x140321E10 (-InterlockedIncrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(Gre::Base *a1, __int64 a2, HDEV a3, int a4)
{
  __int64 v7; // rbx
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  __int64 Object; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  HSPRITE v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  struct _RTL_GENERIC_TABLE *v23; // rcx
  HLSURF LogicalSurfaceObject; // rax
  HDEV v25; // rdx
  HDEV v26; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+28h] [rbp-D8h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-D0h] BYREF
  Gre::Base *v36; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+48h] [rbp-B8h]
  _BYTE v38[32]; // [rsp+58h] [rbp-A8h] BYREF
  struct SFMLOGICALSURFACE *v39; // [rsp+78h] [rbp-88h]
  _BYTE v40[32]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v41; // [rsp+A8h] [rbp-58h]
  _BYTE v42[96]; // [rsp+B0h] [rbp-50h] BYREF

  v34 = a2;
  v37 = 0LL;
  v7 = 0LL;
  v8 = Gre::Base::Globals(a1);
  Object = AllocateObject(152LL, 15LL);
  v13 = (_QWORD *)Object;
  if ( Object )
  {
    v14 = (_QWORD *)(Object + 24);
    NewElement[0] = 0;
    *(_QWORD *)(Object + 32) = Object + 24;
    *(_QWORD *)(Object + 24) = Object + 24;
    ++*(_DWORD *)(*((_QWORD *)v8 + 17) + 96LL);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v40, v10, v11, v12);
    if ( v41 )
      goto LABEL_14;
    LOBYTE(v15) = 15;
    if ( !HmgInsertObjectInternal(v13, 9LL, v15) )
      goto LABEL_14;
    v17 = *v13;
    LOBYTE(v16) = 15;
    v41 = v13;
    NewElement[0] = 1;
    HmgMarkUndeletable(v17, v16);
    v18 = *((_QWORD *)v8 + 17);
    v19 = *(HSPRITE *)(v18 + 144);
    if ( !v19 )
    {
      v20 = *(_QWORD **)(v18 + 88);
      v21 = v18 + 80;
      if ( *v20 != v21 )
        goto LABEL_6;
      *v14 = v21;
      v14[1] = v20;
      *v20 = v14;
      *(_QWORD *)(v21 + 8) = v14;
      goto LABEL_8;
    }
    NeighborSprite = hspGetNeighborSprite(v19, 0, 0);
    if ( NeighborSprite )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v38, NeighborSprite);
      v29 = (__int64 *)(((unsigned __int64)v39 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v39 >> 64));
      v30 = *v29;
      if ( *(__int64 **)(*v29 + 8) == v29 )
      {
        *v14 = v30;
        v14[1] = v29;
        *(_QWORD *)(v30 + 8) = v14;
        *v29 = (__int64)v14;
        DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v38);
LABEL_8:
        if ( a1 )
        {
          v22 = *v13;
          v13[5] = a1;
          v23 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v8 + 17);
          Buffer[1] = v22;
          Buffer[0] = a1;
          RtlInsertElementGenericTable(v23, Buffer, 0x10u, NewElement);
        }
        if ( !NewElement[0] )
        {
LABEL_18:
          OBJECT::InterlockedIncrementExclusiveLockCount((OBJECT *)v13);
LABEL_15:
          HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v40);
          if ( NewElement[0] )
          {
            GreInitializePushLock((struct W32_PUSH_LOCK *)(v13 + 11));
            v7 = *v13;
            v13[6] = v34;
          }
          else
          {
            LOBYTE(v26) = 1;
            vspDestroyDwmSpriteObjInternal(a3, v26, (struct DWMSPRITE *)v13);
          }
          return v7;
        }
        EtwDwmSpriteCreateEvent(a1, *v13);
        v36 = a1;
        ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v42);
        LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                                 a3,
                                 (unsigned int)(a4 != 0) + 4,
                                 (struct _CD_HLSURF_CREATIONCONTEXT *)&v36);
        if ( LogicalSurfaceObject )
        {
          SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v38, LogicalSurfaceObject);
          DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v13, v25, v39);
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v38);
        }
        else
        {
          NewElement[0] = 0;
        }
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v42);
LABEL_14:
        if ( NewElement[0] )
          goto LABEL_15;
        goto LABEL_18;
      }
    }
    else
    {
      v31 = *((_QWORD *)v8 + 17) + 80LL;
      v32 = *(_QWORD *)v31;
      if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) == v31 )
      {
        *v14 = v32;
        v14[1] = v31;
        *(_QWORD *)(v32 + 8) = v14;
        *(_QWORD *)v31 = v14;
        goto LABEL_8;
      }
    }
LABEL_6:
    __fastfail(3u);
  }
  return v7;
}
