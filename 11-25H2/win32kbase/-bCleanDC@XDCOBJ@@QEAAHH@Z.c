/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350
 * Callers:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1400D9C88 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     GreCleanDC @ 0x1401083E0 (GreCleanDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C90C0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x14001C840 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GreDCSelectBrush @ 0x14001CA90 (GreDCSelectBrush.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1400754F8 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     GreDCSelectPen @ 0x140090080 (GreDCSelectPen.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400C6308 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400C637C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7A2C (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  BOOL v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // r9
  DC *v11; // rsi
  struct HPATH__ *v12; // rdx
  char *v13; // rcx
  __int128 *v14; // rcx
  __int64 v15; // rdx
  __int128 *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm0
  __int128 *v19; // rcx
  __int128 *v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // rbx
  int (*v23)(void); // rax
  unsigned int v24; // ebx
  void (__fastcall *v25)(DC **, _QWORD); // rax
  __int64 v26; // rbx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // rbx
  void (__fastcall *v31)(__int64); // rax
  DC *v32; // rdx
  __int64 v33; // rax
  int v34; // ecx
  int v35; // edx
  char v37[16]; // [rsp+20h] [rbp-A8h] BYREF
  char v38[8]; // [rsp+30h] [rbp-98h] BYREF
  struct _BASEOBJECT *v39; // [rsp+38h] [rbp-90h]
  ULONG_PTR v40; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 122);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v4, *(_QWORD *)(v5 + 160));
    v4 = *this;
  }
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(v4);
  v7 = *this;
  v8 = *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (*((_DWORD *)v7 + 63) & 1) != 0;
  if ( *((int *)v7 + 26) > 1 )
    GrepRestoreDCOBJ((struct XDCOBJ *)this, 1);
  v9 = *(_QWORD *)(W32GetSessionState(v7) + 88);
  if ( *((_QWORD *)*this + 11) != *(_QWORD *)(v9 + 3768) )
    GrepSelectPalette((struct XDCOBJ *)this, *(HPALETTE *)(v9 + 584), 1);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    LOBYTE(v10) = 5;
    if ( a2 )
      LOBYTE(v10) = 7;
    GrepSelectBitmap(v37, this, *(_QWORD *)(*(_QWORD *)(v9 + 3008) + 168LL), v10);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1044) = -1;
  if ( *((_QWORD *)*this + 20) )
  {
    v40 = *((_QWORD *)*this + 20);
    RGNOBJ::vDeleteRGNOBJ(&v40);
    *((_QWORD *)*this + 20) = 0LL;
  }
  if ( *((_QWORD *)*this + 21) )
  {
    v40 = *((_QWORD *)*this + 21);
    RGNOBJ::vDeleteRGNOBJ(&v40);
    *((_QWORD *)*this + 21) = 0LL;
  }
  v11 = *this;
  v12 = (struct HPATH__ *)*((_QWORD *)*this + 25);
  if ( v12 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v38, v12);
    if ( v39 && (*((_DWORD *)v39 + 22) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v39, 0LL);
    *((_QWORD *)v11 + 25) = 0LL;
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v38);
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 19));
  HmgDecrementShareReferenceCountEx(*((struct _BASEOBJECT **)*this + 12), 0LL);
  v13 = (char *)*((_QWORD *)*this + 37);
  if ( v13 && v13 != (char *)*this + 264 )
  {
    GreDeleteFastMutex(v13);
    *((_QWORD *)*this + 37) = 0LL;
  }
  v14 = (__int128 *)(v9 + 584);
  v15 = 3LL;
  v16 = (__int128 *)((char *)*this + 80);
  v17 = 3LL;
  do
  {
    v16 += 8;
    v18 = *v14;
    v14 += 8;
    *(v16 - 8) = v18;
    *(v16 - 7) = *(v14 - 7);
    *(v16 - 6) = *(v14 - 6);
    *(v16 - 5) = *(v14 - 5);
    *(v16 - 4) = *(v14 - 4);
    *(v16 - 3) = *(v14 - 3);
    *(v16 - 2) = *(v14 - 2);
    *(v16 - 1) = *(v14 - 1);
    --v17;
  }
  while ( v17 );
  *v16 = *v14;
  v16[1] = v14[1];
  v19 = (__int128 *)*((_QWORD *)*this + 122);
  v20 = (__int128 *)(v9 + 144);
  do
  {
    v19 += 8;
    v21 = *v20;
    v20 += 8;
    *(v19 - 8) = v21;
    *(v19 - 7) = *(v20 - 7);
    *(v19 - 6) = *(v20 - 6);
    *(v19 - 5) = *(v20 - 5);
    *(v19 - 4) = *(v20 - 4);
    *(v19 - 3) = *(v20 - 3);
    *(v19 - 2) = *(v20 - 2);
    *(v19 - 1) = *(v20 - 1);
    --v15;
  }
  while ( v15 );
  *v19 = *v20;
  v19[1] = v20[1];
  v19[2] = v20[2];
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  HmgIncrementShareReferenceCount(*((struct _BASEOBJECT **)*this + 17));
  HmgIncrementShareReferenceCount(*((struct _BASEOBJECT **)*this + 18));
  v22 = *((_QWORD *)*this + 6);
  v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1496LL);
  if ( v23 )
  {
    if ( v23() >= 0 )
    {
      v24 = *(_DWORD *)(v22 + 40) & 1;
      v25 = *(void (__fastcall **)(DC **, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1504LL);
      if ( v25 )
        v25(this, v24);
    }
  }
  v26 = *((_QWORD *)*this + 6);
  if ( v26 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 56968) + 48LL) )
    **((_DWORD **)*this + 122) |= 2u;
  v27 = *((_DWORD *)*this + 63);
  v28 = v27 | 1;
  v29 = v27 & 0xFFFFFFFE;
  if ( !v8 )
    v28 = v29;
  *((_DWORD *)*this + 63) = v28;
  HmgIncrementShareReferenceCount(*((struct _BASEOBJECT **)*this + 12));
  v30 = *((_QWORD *)*this + 220);
  v31 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2000LL);
  if ( v31 )
    v31(v30);
  *((_QWORD *)*this + 220) = 0LL;
  v32 = *this;
  v33 = *((_DWORD *)*this + 10) & 1;
  v34 = *((_DWORD *)*this + 2 * v33 + 255);
  *((_DWORD *)v32 + 298) = *((_DWORD *)*this + 2 * v33 + 254);
  *((_DWORD *)v32 + 299) = v34;
  DC::vReleaseRao(*this);
  v35 = *((_DWORD *)*this + 130);
  if ( (v35 & 1) != 0 && (v35 & 2) == 0 )
    DC::vClearDpiScaling(*this);
  return 1LL;
}
