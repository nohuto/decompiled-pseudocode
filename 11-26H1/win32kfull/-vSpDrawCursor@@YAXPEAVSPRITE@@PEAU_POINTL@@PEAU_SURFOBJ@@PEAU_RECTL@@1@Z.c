/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x140316B68
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1401BB830 (OffBitBlt.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rbx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _POINTL *v28; // r12
  Gre::Base *v29; // r13
  __int64 v30; // r14
  _DWORD *v31; // r15
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct _RECTL *v44; // [rsp+48h] [rbp-31h]
  Gre::Base *v45; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v46[9]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+5Fh] BYREF
  LONG *v48; // [rsp+E0h] [rbp+67h]
  struct _RECTL *v49; // [rsp+F0h] [rbp+77h]

  v49 = a4;
  v48 = (LONG *)a2;
  v47 = 0LL;
  if ( *((_QWORD *)a1 + 15) )
  {
    v8 = *((_QWORD *)a1 + 2);
    v45 = 0LL;
    v9 = Gre::Base::Globals(a1);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (Gre::Base *)&v45,
                          0LL,
                          0,
                          *((_QWORD *)v9 + 488),
                          *(_QWORD *)(*(_QWORD *)(v8 + 32) + 104LL),
                          *((_QWORD *)v9 + 484),
                          *((Gre::Base **)v9 + 484),
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_61:
      EXLATEOBJ::vAltUnlock(&v45, v10, v11);
      return;
    }
    p_pvScan0 = 0LL;
    if ( a3 )
    {
      hsurf = (int)a3[1].hsurf;
      if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &a3[-1].pvScan0;
        GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
      }
    }
    v14 = *((_QWORD *)a1 + 15);
    v15 = 0LL;
    v46[0] = 0LL;
    if ( v14 )
    {
      v16 = *(_DWORD *)(v14 + 88);
      if ( ((v16 & 0x4000) != 0 || v16 < 0) && (v16 & 0x200) == 0 )
      {
        v15 = v14 - 24;
        GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v14 + 24));
      }
    }
    v17 = *((_QWORD *)a1 + 15);
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && GreGetCurrentThread(v18)
        && *((_QWORD *)GreGetCurrentThread(v19) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v20) + 85) || *((_DWORD *)GreGetCurrentThread(v21) + 86)) )
      {
        v22 = *((_QWORD *)GreGetCurrentThread(v21) + 34);
        if ( (*(_DWORD *)(v22 + 20) & 1) != 0 )
        {
          v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v22) + 34) + 72LL);
          goto LABEL_30;
        }
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && GreGetCurrentThread(v24)
        && *((_QWORD *)GreGetCurrentThread(v25) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v26) + 85) || *((_DWORD *)GreGetCurrentThread(v27) + 86)) )
      {
        goto LABEL_29;
      }
    }
    if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_29:
      v23 = EngBitBlt;
    else
      v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_30:
    v28 = a5;
    v44 = a4;
    v29 = v45;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v23,
      v48,
      (__int64)a3,
      v46,
      v17,
      0LL,
      0LL,
      (__int64)v45,
      v44,
      (__int64 *)a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v15 )
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v15 + 48));
    v30 = *((_QWORD *)a1 + 16);
    LODWORD(v47) = v28->x;
    if ( v30 )
    {
      v31 = (_DWORD *)((char *)a1 + 136);
      HIDWORD(v47) = v28->y;
      v29 = 0LL;
      v32 = 0LL;
    }
    else
    {
      v30 = *((_QWORD *)a1 + 15);
      v31 = v46;
      HIDWORD(v47) = v28->y + (*(int *)(v30 + 36) >> 1);
      v32 = 0LL;
      if ( !v30 )
      {
LABEL_40:
        if ( a3->iType != 1 )
          goto LABEL_54;
        if ( bAllowShareAccess(a3)
          && GreGetCurrentThread(v34)
          && *((_QWORD *)GreGetCurrentThread(v35) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v36) + 85) || *((_DWORD *)GreGetCurrentThread(v37) + 86)) )
        {
          v38 = *((_QWORD *)GreGetCurrentThread(v37) + 34);
          if ( (*(_DWORD *)(v38 + 20) & 1) != 0 )
          {
            v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v38) + 34) + 72LL);
LABEL_57:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v39,
              v48,
              (__int64)a3,
              v31,
              v30,
              0LL,
              0LL,
              (__int64)v29,
              v49,
              &v47,
              0LL,
              0LL,
              0LL,
              26214);
            if ( v32 )
              GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v32 + 48));
            if ( p_pvScan0 )
              GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
            goto LABEL_61;
          }
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !GreGetCurrentThread(v40)
          || !*((_QWORD *)GreGetCurrentThread(v41) + 34)
          || !*((_DWORD *)GreGetCurrentThread(v42) + 85) && !*((_DWORD *)GreGetCurrentThread(v43) + 86) )
        {
LABEL_54:
          if ( ((__int64)a3[1].hsurf & 1) != 0 )
          {
            v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
            goto LABEL_57;
          }
        }
        v39 = EngBitBlt;
        goto LABEL_57;
      }
    }
    v33 = *(_DWORD *)(v30 + 88);
    if ( ((v33 & 0x4000) != 0 || v33 < 0) && (v33 & 0x200) == 0 )
    {
      v32 = v30 - 24;
      GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v30 + 24));
    }
    goto LABEL_40;
  }
}
