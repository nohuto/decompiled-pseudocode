/*
 * XREFs of GrePtInSprite @ 0x14008CE90
 * Callers:
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x14008CAA0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008CBCC (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CCB4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1401A6B10 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     EngAlphaBlend @ 0x14006D290 (EngAlphaBlend.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x14008B6B8 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x14008E7A8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1401EA564 (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x14032A2C0 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePtInSprite(SURFOBJ **a1, HWND a2, int a3, int a4, int a5, int a6)
{
  HDEV v8; // r13
  unsigned int v9; // edi
  char v10; // r12
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  HSEMAPHORE v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r15
  struct Gre::Base::SESSION_GLOBALS *v17; // r13
  struct W32_PUSH_LOCK *v18; // rbx
  _QWORD *v19; // rax
  Gre::Base *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r13
  int v25; // ecx
  struct _SURFOBJ *v26; // r15
  RECTL si128; // xmm0
  _DWORD *pvScan0; // r15
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  SURFOBJ *v30; // rdx
  XLATEOBJ *v31; // r12
  RECTL *p_prclSrc; // rcx
  struct _GRETHREAD *v33; // rax
  int v37; // [rsp+48h] [rbp-A1h]
  HSEMAPHORE v38; // [rsp+50h] [rbp-99h]
  HSEMAPHORE v40; // [rsp+60h] [rbp-89h]
  _QWORD v41[2]; // [rsp+68h] [rbp-81h] BYREF
  BLENDOBJ pBlendObj; // [rsp+78h] [rbp-71h] BYREF
  int v43; // [rsp+7Ch] [rbp-6Dh]
  char *v44; // [rsp+80h] [rbp-69h]
  char *v45; // [rsp+88h] [rbp-61h]
  char *v46; // [rsp+90h] [rbp-59h]
  _QWORD Buffer[3]; // [rsp+98h] [rbp-51h] BYREF
  int v48; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-31h] BYREF
  char v50; // [rsp+C0h] [rbp-29h]
  RECTL prclSrc; // [rsp+C8h] [rbp-21h] BYREF
  RECTL prclDest; // [rsp+D8h] [rbp-11h] BYREF

  v8 = (HDEV)a1;
  v9 = 0;
  v10 = 1;
  v37 = 1;
  v11 = Gre::Base::Globals((Gre::Base *)a1);
  v12 = (HSEMAPHORE)(*(_QWORD *)v11 + 1144LL);
  v38 = v12;
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<2>();
  if ( a6 && (unsigned int)IsDwmActive(v13) )
  {
    v40 = (HSEMAPHORE)(*(_QWORD *)v11 + 1040LL);
    GreAcquireSemaphoreSharedInternal(v40);
    GrepAcquireLockValidate<6>();
    v14 = *(_QWORD *)v11;
    v48 = 0;
    v49 = v14 + 520;
    Buffer[2] = v8;
    v50 = 1;
    GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(v14 + 520));
    GrepAcquireLockValidate<7>();
    if ( !(unsigned int)IsDwmActive(v15) )
      goto LABEL_37;
    v37 = 0;
    v16 = 0LL;
    Buffer[1] = 0LL;
    v17 = Gre::Base::Globals(0LL);
    Buffer[0] = a2;
    v18 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v17 + 17) + 72LL);
    if ( *((_QWORD *)v17 + 17) != -72LL )
      GreAcquirePushLockExclusive(v18);
    v19 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v17 + 17), Buffer);
    if ( v19 )
      v16 = v19[1];
    if ( v18 )
      GreReleasePushLockExclusive(v18);
    Gre::Base::Globals(v20);
    if ( !v16 || (LOBYTE(v21) = 15, v22 = HmgShareLockCheck(v16, v21), (v23 = v22) == 0) )
    {
LABEL_36:
      v12 = v38;
      v8 = (HDEV)a1;
LABEL_37:
      SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)&v49);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v48);
      EtwTraceGreLockReleaseSemaphore(L"Sprite", v40);
      GrepReleaseLockValidate<6>();
      GreReleaseSemaphoreSharedInternal(v40);
      if ( !v37 )
        goto LABEL_38;
      goto LABEL_46;
    }
    v24 = *(_QWORD *)(v22 + 144);
    if ( a3 >= *(_DWORD *)(v22 + 56)
      && a3 < *(_DWORD *)(v22 + 64)
      && a4 >= *(_DWORD *)(v22 + 60)
      && a4 < *(_DWORD *)(v22 + 68) )
    {
      v9 = 1;
    }
    v25 = *(_DWORD *)(v22 + 72);
    if ( v25 && v25 != 4 && (v25 != 2 || *(_BYTE *)(v22 + 79) || !*(_BYTE *)(v22 + 78)) && v9 )
    {
      a3 -= *(_DWORD *)(v22 + 56);
      a4 -= *(_DWORD *)(v22 + 60);
      v26 = *(struct _SURFOBJ **)(v24 + 184);
      if ( (v25 & 2) != 0 )
      {
        if ( v25 != 3 || *(_BYTE *)(v22 + 79) )
          v10 = 0;
        v41[0] = 0LL;
        SURFREFVIEW::bMap((SURFREFVIEW *)v41, v26);
        if ( v41[0] && v26->iBitmapFormat == 6 )
        {
          if ( v10
            && (*(_DWORD *)(v23 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v24 + 184), a3, a4, a5) & 0xFFFFFF) )
          {
            v9 = 0;
          }
          if ( v9 )
          {
            si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
            pvScan0 = a1[139]->pvScan0;
            *pvScan0 = 0;
            prclSrc.right = a3 + 1;
            prclSrc.bottom = a4 + 1;
            prclDest = si128;
            prclSrc.left = a3;
            prclSrc.top = a4;
            v43 = 0;
            v29 = Gre::Base::Globals(0LL);
            v30 = *(SURFOBJ **)(v24 + 184);
            pBlendObj = *(BLENDOBJ *)(v23 + 76);
            v31 = (XLATEOBJ *)((char *)v29 + 4552);
            v44 = (char *)v29 + 4552;
            v45 = (char *)v29 + 4552;
            v46 = (char *)v29 + 4552;
            EngAlphaBlend(a1[139], v30, 0LL, (XLATEOBJ *)((char *)v29 + 4552), &prclDest, &prclSrc, &pBlendObj);
            if ( !*pvScan0 )
            {
              *pvScan0 = -1;
              EngAlphaBlend(a1[139], *(SURFOBJ **)(v24 + 184), 0LL, v31, &prclDest, &prclSrc, &pBlendObj);
              v9 = *pvScan0 != -1;
            }
          }
        }
        else
        {
          v9 = 0;
        }
        p_prclSrc = (RECTL *)v41;
LABEL_34:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)p_prclSrc);
LABEL_35:
        DEC_SHARE_REF_CNT(v23);
        goto LABEL_36;
      }
      if ( v25 == 1 )
      {
        *(_QWORD *)&prclSrc.left = 0LL;
        SURFREFVIEW::bMap((SURFREFVIEW *)&prclSrc, v26);
        if ( *(_QWORD *)&prclSrc.left && v26->iBitmapFormat == 6 )
        {
          if ( (*(_DWORD *)(v23 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v24 + 184), a3, a4, a5) & 0xFFFFFF) )
            v9 = 0;
        }
        else
        {
          v9 = 0;
        }
        p_prclSrc = &prclSrc;
        goto LABEL_34;
      }
    }
    v23 = v22;
    goto LABEL_35;
  }
LABEL_46:
  v9 = GdiPtInSprite(v8, a2, a3, a4);
LABEL_38:
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v12);
    v33 = GreGetCurrentThreadCrossSessionCheck();
    if ( v33 )
    {
      if ( (*((_BYTE *)v33 + 10))-- == 1 )
        *(_QWORD *)v33 &= ~4uLL;
      if ( !*(_QWORD *)v33 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v12);
  }
  return v9;
}
