/*
 * XREFs of ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC
 * Callers:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140015AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1400B4540 (NtGdiGetDIBitsInternal.c)
 *     GreGetDIBitsInternal @ 0x1401B5FB8 (GreGetDIBitsInternal.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x140330114 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepGetDIBits(
        OPTAPIDCOBJ *this,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned int *v9; // rdi
  Gre::Base *v12; // rcx
  char v13; // r14
  int v14; // ebx
  struct Gre::Base::SESSION_GLOBALS *v15; // rsi
  Gre::Base *v16; // rcx
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  _DWORD *v20; // rbx
  unsigned int v21; // r12d
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  Gre::Base *v25; // rcx
  int v26; // eax
  unsigned int v27; // edi
  Gre::Base *v28; // rcx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  unsigned int v31; // r8d
  unsigned int v32; // r9d
  int v33; // edx
  int v34; // eax
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  int v36; // eax
  __int16 v37; // ax
  unsigned int DIBitsInternalWorker; // ebx
  _OWORD v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  char v42[8]; // [rsp+90h] [rbp-70h] BYREF
  char v43[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h] BYREF
  int v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int128 v48; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v49; // [rsp+E0h] [rbp-20h] BYREF
  char v50; // [rsp+100h] [rbp+0h]
  _QWORD v51[20]; // [rsp+110h] [rbp+10h] BYREF

  v9 = a6;
  if ( !a6 || a7 && (unsigned int)(a7 - 1) >= 2 || a9 < 0xC )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( !a4 )
  {
    *(_QWORD *)a5 = 0LL;
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_QWORD *)(a5 + 16) = 0LL;
    *(_WORD *)(a5 + 24) = 0;
  }
  v13 = 1;
  if ( OPTAPIDCOBJ::bValid(this)
    && (APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, this),
        v14 = *(_DWORD *)(*(_QWORD *)(v51[0] + 48LL) + 40LL),
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v51),
        (v14 & 0x8000) != 0) )
  {
    v13 = 0;
    v15 = Gre::Base::Globals(v12);
  }
  else
  {
    v15 = Gre::Base::Globals(v12);
    GreAcquireSemaphoreShared<1,>(v15);
  }
  memset(v39, 0, sizeof(v39));
  PushThreadGuardedObject(
    v39,
    v39,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v17 = Gre::Base::Globals(v16);
  LOBYTE(v18) = 5;
  v19 = HmgShareLock(v17, a2, v18, 0LL);
  v40 = v19;
  v20 = (_DWORD *)v19;
  if ( !v19 )
    goto LABEL_30;
  v21 = *v9;
  if ( *(_QWORD *)a5 )
  {
LABEL_11:
    if ( v21 < 0x28 || (v22 = v9[4], v22 != 5) && v22 != 4 )
    {
LABEL_14:
      v23 = 0LL;
      if ( OPTAPIDCOBJ::bValid(this) )
      {
        v46 = *((_QWORD *)this + 2);
        v47 = 0LL;
        v44 = 0LL;
        v45 = 0;
        UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v48);
        UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v49);
        v24 = *(_QWORD *)this;
        v50 = 0;
        v44 = v24;
        v25 = *(Gre::Base **)(v24 + 48);
        a6 = (unsigned int *)v25;
        v41 = *(_QWORD *)(v24 + 88);
        if ( (*((_DWORD *)v25 + 10) & 0x8000) != 0 )
        {
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   v21,
                                   (unsigned int)&v44,
                                   (unsigned int)&a6,
                                   (unsigned int)v39,
                                   (__int64)&v41,
                                   a3,
                                   a4,
                                   a5,
                                   (__int64)v9,
                                   a7,
                                   a8,
                                   a9);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v44);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
          if ( v13 )
            GreReleaseSemaphoreShared<1,>((__int64 *)v15);
          return DIBitsInternalWorker;
        }
        else
        {
          if ( IsDwmActive(v25) )
          {
            NEEDGRELOCK::vLock((NEEDGRELOCK *)v42, (struct XDCOBJ *)&v44);
            if ( v40 )
            {
              if ( v40 != -24 )
              {
                v26 = *(_DWORD *)(v40 + 112);
                if ( ((v26 & 0x4000) != 0 || v26 < 0) && (v26 & 0x200) == 0 )
                {
                  v23 = v40;
                  GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v40 + 48));
                }
              }
            }
            v27 = GreGetDIBitsInternalWorker(
                    v21,
                    (unsigned int)&v44,
                    (unsigned int)&a6,
                    (unsigned int)v39,
                    (__int64)&v41,
                    a3,
                    a4,
                    a5,
                    (__int64)v9,
                    a7,
                    a8,
                    a9);
            if ( v23 )
              GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v23 + 48));
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v42);
            APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v44);
            if ( v40 )
            {
              v29 = Gre::Base::Globals(v28);
              DEC_SHARE_REF_CNT(v29, v40);
            }
            PopThreadGuardedObject(v39);
          }
          else
          {
            NEEDGRELOCK::vLock((NEEDGRELOCK *)v43, (struct XDCOBJ *)&v44);
            SPRITELOCK::SPRITELOCK((SPRITELOCK *)v42, (struct PDEVOBJ *)&a6);
            if ( v40 )
            {
              if ( v40 != -24 )
              {
                v36 = *(_DWORD *)(v40 + 112);
                if ( ((v36 & 0x4000) != 0 || v36 < 0) && (v36 & 0x200) == 0 )
                {
                  v23 = v40;
                  GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v40 + 48));
                }
              }
            }
            v27 = GreGetDIBitsInternalWorker(
                    v21,
                    (unsigned int)&v44,
                    (unsigned int)&a6,
                    (unsigned int)v39,
                    (__int64)&v41,
                    a3,
                    a4,
                    a5,
                    (__int64)v9,
                    a7,
                    a8,
                    a9);
            if ( v23 )
              GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v23 + 48));
            SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v42);
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v43);
            APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v44);
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
          }
          if ( v13 )
            GreReleaseSemaphoreShared<1,>((__int64 *)v15);
          return v27;
        }
      }
      goto LABEL_30;
    }
    EngSetLastError(0x57u);
LABEL_30:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
    if ( v13 )
      GreReleaseSemaphoreShared<1,>((__int64 *)v15);
    return 0LL;
  }
  if ( v21 == 12 )
  {
    if ( *((_WORD *)v9 + 5) )
      goto LABEL_14;
    *((_WORD *)v9 + 2) = *(_WORD *)(v19 + 56);
    *((_WORD *)v9 + 3) = *(_WORD *)(v19 + 60);
    *((_WORD *)v9 + 4) = 1;
    v37 = gaulConvert[2 * *(unsigned int *)(v19 + 96)];
    *((_WORD *)v9 + 5) = v37;
    if ( (unsigned __int16)v37 >= 0x10u )
      *((_WORD *)v9 + 5) = 24;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
  }
  else
  {
    if ( a9 < 0x28 )
      goto LABEL_30;
    if ( *((_WORD *)v9 + 7) )
      goto LABEL_11;
    if ( v21 > 0x28 )
      memset_0(v9, 0, *v9);
    *v9 = 40;
    v31 = v20[14];
    v9[1] = v31;
    v32 = v20[15];
    v9[2] = v32;
    *((_WORD *)v9 + 6) = 1;
    v9[4] = 0;
    v33 = (unsigned __int16)gaulConvert[2 * v20[24]];
    *((_WORD *)v9 + 7) = v33;
    if ( v33 == 16 || v33 == 32 )
      v9[4] = 3;
    *((_QWORD *)v9 + 3) = 0LL;
    v9[5] = v32 * (((int)(v31 * v33 + 31) >> 3) & 0xFFFFFFFC);
    v34 = dword_140370E80[v20[24]];
    v9[9] = v34;
    v9[8] = v34;
    v35 = Gre::Base::Globals((Gre::Base *)0x140000000LL);
    DEC_SHARE_REF_CNT(v35, v40);
    PopThreadGuardedObject(v39);
  }
  if ( v13 )
    GreReleaseSemaphoreShared<1,>((__int64 *)v15);
  return 1LL;
}
