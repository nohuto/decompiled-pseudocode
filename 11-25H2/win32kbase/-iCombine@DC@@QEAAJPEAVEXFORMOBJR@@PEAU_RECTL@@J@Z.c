/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390
 * Callers:
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x14000D9B0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x14000DC10 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EAFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140013C70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140098640 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140099D60 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140099EA4 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?CloseFigure@PATH_CORE@@QEAA_NXZ @ 0x14009A970 (-CloseFigure@PATH_CORE@@QEAA_NXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14009AEA0 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1400D8020 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJR *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  struct _RECTL *v9; // r9
  __int64 v10; // rsi
  unsigned int v11; // ebx
  const struct REGION_CORE *v12; // rdx
  ULONG_PTR *v14; // rcx
  __int64 v15; // rdx
  LONG cx; // r8d
  LONG v17; // ecx
  LONG cy; // r9d
  LONG v19; // edx
  _DWORD *v20; // rbx
  char *v21; // r10
  LONG v22; // r8d
  int v23; // eax
  ULONG_PTR v25; // [rsp+20h] [rbp-E0h] BYREF
  ULONG_PTR v26; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  struct tagSIZE v28; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v29[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  _QWORD v32[4]; // [rsp+90h] [rbp-70h] BYREF
  int v33; // [rsp+B0h] [rbp-50h]
  struct _RECTL v34; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-30h]
  __int16 v36; // [rsp+D8h] [rbp-28h]
  _DWORD v37[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTL v38; // [rsp+E8h] [rbp-18h] BYREF
  LONG x; // [rsp+F0h] [rbp-10h]
  LONG bottom; // [rsp+F4h] [rbp-Ch]
  LONG v41; // [rsp+F8h] [rbp-8h]
  LONG v42; // [rsp+FCh] [rbp-4h]

  left = a3->left;
  top = a3->top;
  v38.x = a3->right;
  x = v38.x;
  bottom = a3->bottom;
  v42 = bottom;
  v37[0] = left;
  v37[1] = top;
  v38.y = top;
  v41 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v29);
  if ( !v31 )
    goto LABEL_34;
  *(_QWORD *)&v34.right = 1LL;
  v35 = 0LL;
  *(_QWORD *)&v34.left = v37;
  v36 = 0;
  if ( !PATH_CORE::bMoveTo(v31 + 24, (__int64)a2, (__int64)&v34)
    || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v29, a2, &v38, 3u)
    || !v31 )
  {
    goto LABEL_35;
  }
  if ( PATH_CORE::CloseFigure((PATH_CORE *)(v31 + 24)) )
    ++v30;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26, (struct EPATHOBJ *)v29, (struct EPATHOBJ *)1, v9);
  if ( !v26 )
  {
LABEL_34:
    EngSetLastError(8u);
LABEL_35:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v29);
    return 0LL;
  }
  v10 = *((_QWORD *)this + 20);
  v11 = 0;
  DC::vReleaseRao(this);
  if ( v10 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v25);
    if ( v25 )
    {
      v27 = v10;
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v25, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v26, a4);
      if ( !v11 )
      {
        v14 = &v25;
        goto LABEL_14;
      }
      ++*(_DWORD *)(v25 + 76);
      *((_QWORD *)this + 20) = v25;
      if ( (*(_DWORD *)(v27 + 76))-- == 1 )
      {
        v14 = (ULONG_PTR *)&v27;
LABEL_14:
        RGNOBJ::vDeleteRGNOBJ(v14);
      }
    }
LABEL_30:
    RGNOBJ::vDeleteRGNOBJ(&v26);
    goto LABEL_31;
  }
  if ( a4 != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v25);
    v28 = 0LL;
    if ( v25 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27, v15);
      if ( !v27 )
        goto LABEL_27;
      DC::vGet_sizlWindow(this, &v28);
      cx = v28.cx;
      v17 = 0;
      cy = v28.cy;
      v19 = 0;
      v20 = (_DWORD *)*((_QWORD *)this + 6);
      *(_QWORD *)&v34.left = 0LL;
      *(struct tagSIZE *)&v34.right = v28;
      if ( *((_QWORD *)this + 62) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v28);
        if ( (v20[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v34.left += v20[644];
          v34.right += v20[644];
          v34.top += v20[645];
          v34.bottom += v20[645];
        }
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          *(_QWORD *)&v28);
        cy = v34.bottom;
        cx = v34.right;
        v19 = v34.top;
        v17 = v34.left;
      }
      v21 = (char *)this + 1024;
      if ( (*((_DWORD *)this + 10) & 1) == 0 )
        v21 = (char *)this + 1016;
      v22 = cx - *(_DWORD *)v21;
      v34.left = v17 - *(_DWORD *)v21;
      v23 = *((_DWORD *)v21 + 1);
      v34.right = v22;
      v34.top = v19 - v23;
      v34.bottom = cy - v23;
      RGNOBJ::vSet((RGNOBJ *)&v27, &v34);
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v25, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v26, a4);
      if ( v11 )
      {
        ++*(_DWORD *)(v25 + 76);
        *((_QWORD *)this + 20) = v25;
      }
      else
      {
LABEL_27:
        RGNOBJ::vDeleteRGNOBJ(&v25);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
    }
    goto LABEL_30;
  }
  ++*(_DWORD *)(v26 + 76);
  *((_QWORD *)this + 20) = v26;
  v11 = RGNOBJ::iComplexity((RGNOBJ *)&v26, v12);
LABEL_31:
  EPATHOBJ::vUnlock((EPATHOBJ *)v29);
  if ( v33 )
    PopThreadGuardedObject(v32);
  return v11;
}
