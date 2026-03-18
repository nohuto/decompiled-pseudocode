/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920
 * Callers:
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 * Callees:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x140011B40 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035F30 (-vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400C0E94 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1400C18B0 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x1400C2A10 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x140116E20 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140178B40 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJR *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  __int64 v9; // rcx
  struct tagSIZE v10; // rsi
  unsigned int v11; // ebx
  __int64 SessionState; // rax
  struct tagSIZE *v14; // rcx
  LONG cx; // r9d
  LONG v16; // edx
  LONG cy; // r10d
  LONG v18; // r8d
  _DWORD *v19; // rbx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // eax
  LONG v23; // r9d
  int v24; // eax
  __int64 v26; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v27; // [rsp+28h] [rbp-A1h] BYREF
  struct tagSIZE v28; // [rsp+30h] [rbp-99h] BYREF
  __int64 v29; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v30[8]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v31; // [rsp+48h] [rbp-81h]
  struct _RECTL v32; // [rsp+C0h] [rbp-9h] BYREF
  struct _POINTL v33; // [rsp+D0h] [rbp+7h] BYREF
  struct _POINTL v34; // [rsp+D8h] [rbp+Fh] BYREF
  LONG x; // [rsp+E0h] [rbp+17h]
  LONG bottom; // [rsp+E4h] [rbp+1Bh]
  LONG v37; // [rsp+E8h] [rbp+1Fh]
  LONG v38; // [rsp+ECh] [rbp+23h]

  left = a3->left;
  top = a3->top;
  v34.x = a3->right;
  x = v34.x;
  bottom = a3->bottom;
  v38 = bottom;
  v33.x = left;
  v33.y = top;
  v34.y = top;
  v37 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v30);
  if ( !v31 )
    goto LABEL_28;
  if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v30, a2, &v33)
    || !(unsigned __int8)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v30, a2, &v34, 3u)
    || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v30) )
  {
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v30);
    return 0LL;
  }
  v27 = 0LL;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v27, (struct EPATHOBJ *)v30, 1u, 0LL);
  if ( !v27 )
  {
LABEL_28:
    EngSetLastError(8u);
    v11 = 0;
    goto LABEL_29;
  }
  v10 = (struct tagSIZE)*((_QWORD *)this + 20);
  v11 = 0;
  SessionState = W32GetSessionState(v9);
  DC::vReleaseRao(this, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
  if ( v10 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
    if ( v26 )
    {
      v28 = v10;
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v26, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&v27, a4);
      if ( !v11 )
      {
        v14 = (struct tagSIZE *)&v26;
        goto LABEL_12;
      }
      ++*(_DWORD *)(v26 + 76);
      *((_QWORD *)this + 20) = v26;
      if ( (*(_DWORD *)(*(_QWORD *)&v28 + 76LL))-- == 1 )
      {
        v14 = &v28;
LABEL_12:
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v14);
      }
    }
LABEL_26:
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
    goto LABEL_29;
  }
  if ( a4 != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
    v28 = 0LL;
    if ( v29 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
      if ( !v26 )
        goto LABEL_23;
      DC::vGet_sizlWindow(this, &v28);
      cx = v28.cx;
      v16 = 0;
      cy = v28.cy;
      v18 = 0;
      v19 = (_DWORD *)*((_QWORD *)this + 6);
      *(_QWORD *)&v32.left = 0LL;
      *(struct tagSIZE *)&v32.right = v28;
      if ( *((_QWORD *)this + 62) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v28);
        if ( (v19[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v32.left += v19[644];
          v32.right += v19[644];
          v32.top += v19[645];
          v32.bottom += v19[645];
        }
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          *(_QWORD *)&v28,
          v20);
        cy = v32.bottom;
        cx = v32.right;
        v18 = v32.top;
        v16 = v32.left;
      }
      v21 = *((_DWORD *)this + 10) & 1;
      v22 = *((_DWORD *)this + 2 * v21 + 254);
      v23 = cx - v22;
      v32.left = v16 - v22;
      v24 = *((_DWORD *)this + 2 * v21 + 255);
      v32.right = v23;
      v32.top = v18 - v24;
      v32.bottom = cy - v24;
      RGNOBJ::vSet((RGNOBJ *)&v26, &v32);
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v29, (struct RGNOBJ *)&v26, (struct RGNOBJ *)&v27, a4);
      if ( v11 )
      {
        ++*(_DWORD *)(v29 + 76);
        *((_QWORD *)this + 20) = v29;
      }
      else
      {
LABEL_23:
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
    }
    goto LABEL_26;
  }
  ++*(_DWORD *)(v27 + 76);
  *((_QWORD *)this + 20) = v27;
  v11 = RGNOBJ::iComplexity((RGNOBJ *)&v27);
LABEL_29:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v30);
  return v11;
}
