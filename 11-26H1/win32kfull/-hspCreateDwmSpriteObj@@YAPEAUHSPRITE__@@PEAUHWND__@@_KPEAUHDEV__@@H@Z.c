/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1400A3968
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1400A1FFC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400A3D68 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400A3ED4 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(Gre::Base *a1, __int64 a2, Gre::Base *a3, int a4)
{
  int v4; // r12d
  __int64 v7; // rbx
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  _QWORD *Object; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  Gre::Base *v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _RTL_GENERIC_TABLE *v20; // rcx
  HLSURF LogicalSurfaceObject; // rsi
  Gre::Base *v22; // rcx
  struct Gre::Base::SESSION_GLOBALS *v23; // rax
  __int64 v24; // r8
  HDEV v25; // rdx
  HDEV v26; // rdx
  __int64 NeighborSprite; // r12
  Gre::Base *v29; // rcx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int8 NewElement[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v37; // [rsp+24h] [rbp-DCh]
  __int128 v38; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+38h] [rbp-C8h]
  struct SFMLOGICALSURFACE *v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  _OWORD v43[2]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int16 *v44; // [rsp+80h] [rbp-80h]
  char v45; // [rsp+88h] [rbp-78h]
  _QWORD Buffer[2]; // [rsp+90h] [rbp-70h] BYREF
  Gre::Base *v47; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-58h]
  _BYTE v49[96]; // [rsp+C0h] [rbp-40h] BYREF

  v37 = a4;
  v48 = 0LL;
  v4 = a4;
  v42 = a2;
  v7 = 0LL;
  v8 = Gre::Base::Globals(a1);
  Object = AllocateObject(v8, 0x98u, 0xFu);
  v10 = Object;
  if ( !Object )
    return v7;
  v11 = Object + 3;
  NewElement[0] = 0;
  Object[4] = Object + 3;
  Object[3] = Object + 3;
  v12 = *((_QWORD *)v8 + 28);
  v43[0] = 0LL;
  ++*(_DWORD *)(v12 + 96);
  v43[1] = 0LL;
  PushThreadGuardedObject(
    v43,
    v43,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v44 = 0LL;
  v45 = 0;
  if ( !HmgInsertObjectInternal(v8, v10, 9u, 0xFu) )
  {
LABEL_14:
    if ( NewElement[0] )
      goto LABEL_15;
    goto LABEL_21;
  }
  v14 = *v10;
  LOBYTE(v13) = 15;
  v44 = (volatile signed __int16 *)v10;
  NewElement[0] = 1;
  HmgMarkUndeletable(v14, v13);
  v15 = *((_QWORD *)v8 + 28);
  v16 = *(Gre::Base **)(v15 + 144);
  if ( v16 )
  {
    NeighborSprite = hspGetNeighborSprite(v16, 0, 0);
    if ( NeighborSprite )
    {
      v38 = 0LL;
      v39 = 0LL;
      PushThreadGuardedObject(
        &v38,
        &v38,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v40 = 0LL;
      v30 = Gre::Base::Globals(v29);
      LOBYTE(v31) = 15;
      v40 = (struct SFMLOGICALSURFACE *)HmgLock(v30, NeighborSprite, v31, 0LL);
      v32 = ((unsigned __int64)v40 + 24) & -(__int64)(v40 != 0LL);
      v33 = *(_QWORD *)v32;
      if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) == v32 )
      {
        *v11 = v33;
        v10[4] = v32;
        *(_QWORD *)(v33 + 8) = v11;
        *(_QWORD *)v32 = v11;
        if ( v40 )
          _InterlockedDecrement16((volatile signed __int16 *)v40 + 6);
        v40 = 0LL;
        PopThreadGuardedObject(&v38);
        goto LABEL_7;
      }
    }
    else
    {
      v34 = *((_QWORD *)v8 + 28) + 80LL;
      v35 = *(_QWORD *)v34;
      if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) == v34 )
      {
        *v11 = v35;
        v10[4] = v34;
        *(_QWORD *)(v35 + 8) = v11;
        *(_QWORD *)v34 = v11;
LABEL_7:
        v4 = v37;
        goto LABEL_8;
      }
    }
LABEL_5:
    __fastfail(3u);
  }
  v17 = *(_QWORD **)(v15 + 88);
  v18 = v15 + 80;
  if ( *v17 != v18 )
    goto LABEL_5;
  *v11 = v18;
  v10[4] = v17;
  *v17 = v11;
  *(_QWORD *)(v18 + 8) = v11;
LABEL_8:
  if ( a1 )
  {
    v19 = *v10;
    v10[5] = a1;
    v20 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v8 + 28);
    Buffer[1] = v19;
    Buffer[0] = a1;
    RtlInsertElementGenericTable(v20, Buffer, 0x10u, NewElement);
  }
  if ( NewElement[0] )
  {
    EtwDwmSpriteCreateEvent(a1, *v10);
    v47 = a1;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v49);
    LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                             (HDEV)a3,
                             (unsigned int)(v4 != 0) + 4,
                             (struct _CD_HLSURF_CREATIONCONTEXT *)&v47);
    if ( LogicalSurfaceObject )
    {
      v38 = 0LL;
      v39 = 0LL;
      PushThreadGuardedObject(
        &v38,
        &v38,
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
      v40 = 0LL;
      v41 = 0;
      v23 = Gre::Base::Globals(v22);
      LOBYTE(v24) = 18;
      v40 = (struct SFMLOGICALSURFACE *)HmgLock(v23, LogicalSurfaceObject, v24, 0LL);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v25, v40);
      SFMLOGICALSURFACEREF_vDestructor((__int64)&v38);
      PopThreadGuardedObject(&v38);
    }
    else
    {
      NewElement[0] = 0;
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v49);
    goto LABEL_14;
  }
LABEL_21:
  _InterlockedAdd16((volatile signed __int16 *)v10 + 6, 1u);
LABEL_15:
  if ( v44 && !v45 )
    _InterlockedDecrement16(v44 + 6);
  PopThreadGuardedObject(v43);
  if ( NewElement[0] )
  {
    GreInitializePushLock((struct W32_PUSH_LOCK *)(v10 + 11));
    v7 = *v10;
    v10[6] = v42;
  }
  else
  {
    LOBYTE(v26) = 1;
    vspDestroyDwmSpriteObjInternal(a3, v26, (struct DWMSPRITE *)v10);
  }
  return v7;
}
