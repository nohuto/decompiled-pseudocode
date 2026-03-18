/*
 * XREFs of ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x1400173F4
 * Callers:
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1400172E0 (NtGdiCreateCompatibleBitmap.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x14016959C (-GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEA.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x140017A80 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14006B7F4 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14006B880 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?vSetPID@SURFREF@@QEAAXK@Z @ 0x1401DAC94 (-vSetPID@SURFREF@@QEAAXK@Z.c)
 */

__int64 __fastcall GrepCreateCompatibleBitmap(
        struct OPTAPIDCOBJ *this,
        int a2,
        int a3,
        unsigned int a4,
        struct _LUID *a5,
        unsigned __int16 *a6)
{
  int v6; // r12d
  __int64 v7; // r14
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v12; // r13d
  BOOL v13; // eax
  int v14; // r15d
  __int64 v15; // rax
  Gre::Base *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  __int64 v21; // r14
  __int64 v22; // r10
  __int64 v23; // r12
  unsigned int v24; // r14d
  __int64 *v25; // rax
  float v26; // xmm6_4
  float v27; // xmm8_4
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  struct Gre::Base::SESSION_GLOBALS *v33; // rax
  __m128i v35; // xmm0
  int v36; // r9d
  __m128i v37; // xmm1
  unsigned int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r8d
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  struct _LUID *v45; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  struct SURFACE *v47; // rax
  __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  BOOL v51; // [rsp+90h] [rbp-78h]
  unsigned __int64 v52; // [rsp+98h] [rbp-70h]
  _BYTE v53[32]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-48h]
  _BYTE v55[8]; // [rsp+C8h] [rbp-40h] BYREF
  HSEMAPHORE v56; // [rsp+D0h] [rbp-38h]
  __int64 v57; // [rsp+D8h] [rbp-30h] BYREF
  int v58; // [rsp+E0h] [rbp-28h]
  __int64 v59; // [rsp+E8h] [rbp-20h]
  __int64 v60; // [rsp+F0h] [rbp-18h]
  _OWORD v61[2]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v62[2]; // [rsp+118h] [rbp+10h] BYREF
  char v63; // [rsp+138h] [rbp+30h]
  _BYTE v64[208]; // [rsp+148h] [rbp+40h] BYREF
  BOOL v65; // [rsp+268h] [rbp+160h]
  int v66; // [rsp+270h] [rbp+168h]

  v6 = 0;
  v7 = 0LL;
  v9 = a3;
  v10 = a2;
  v66 = 0;
  v52 = __PAIR64__(a3, a2);
  v51 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v6 = 1;
      v66 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v12 = a4 & 0x4000000;
  v13 = (a4 & 0x4000000) != 0;
  v14 = (a4 >> 27) & 1;
  v65 = v13;
  if ( (int)v10 <= 0 || (int)v9 <= 0 || (unsigned __int64)(v9 * v10) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( *((_QWORD *)this + 12) )
  {
    if ( OPTAPIDCOBJ::bValid(this) )
    {
      v15 = *((_QWORD *)this + 2);
      v60 = 0LL;
      v57 = 0LL;
      v58 = 0;
      v59 = v15;
      memset(v61, 0, sizeof(v61));
      PushThreadGuardedObject(
        v61,
        &v57,
        UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
      memset(v62, 0, sizeof(v62));
      PushThreadGuardedObject(
        v62,
        &v57,
        UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
      v17 = *(_QWORD *)this;
      v63 = 0;
      v57 = v17;
      v18 = *(_QWORD *)(v17 + 48);
      v50 = v18;
      if ( (*(_DWORD *)(v18 + 40) & 0x8000) != 0 )
      {
        v47 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v57);
        if ( *(_DWORD *)(v57 + 32) == 1 )
        {
          v48 = *((unsigned int *)v47 + 24);
          v32 = 0LL;
          v49 = (__int64 *)*((_QWORD *)v47 + 16);
          if ( v49 )
            v7 = *v49;
        }
        else
        {
          v48 = *(unsigned int *)(v18 + 2092);
          if ( (*(_DWORD *)(v18 + 2156) & 0x100) == 0 )
            v7 = **(_QWORD **)(v18 + 1792);
          v32 = 0LL;
        }
        CreateCompatibleSurface(
          v53,
          *(_QWORD *)(v57 + 48),
          v48,
          v7,
          v10,
          v9,
          v51,
          v6,
          v65,
          0,
          0,
          0,
          v14,
          0,
          0,
          0LL,
          v50);
        if ( v54 )
        {
          SURFREF::vSetPID((SURFREF *)v53, 0x80000002);
          v32 = *(_QWORD *)(v54 + 32);
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v53);
        goto LABEL_26;
      }
      v56 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v16) + 624LL);
      GreAcquireSemaphoreSharedInternal(v56);
      GrepAcquireLockValidate<1>();
      v20 = Gre::Base::Globals(v19);
      v21 = *(_QWORD *)(v57 + 496);
      if ( v21 )
      {
        if ( v60 )
          v21 = v60;
      }
      else
      {
        v21 = *((_QWORD *)v20 + 547);
      }
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v55, (struct XDCOBJ *)&v57);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v64, (struct PDEVOBJ *)&v50);
      v22 = v57;
      v23 = 0LL;
      if ( *(_DWORD *)(v57 + 32) == 1 )
      {
        v25 = *(__int64 **)(v21 + 128);
        v24 = *(_DWORD *)(v21 + 96);
        if ( !v25 )
        {
LABEL_14:
          v26 = 0.0;
          v27 = 0.0;
          if ( a6 )
          {
            if ( *a6 != 96 )
            {
              ScaledLogPixels = GreGetScaledLogPixels();
              v22 = v57;
              v26 = (float)ScaledLogPixels / 96.0;
              v27 = v26;
              goto LABEL_31;
            }
          }
          else
          {
            v28 = *(_DWORD *)(v57 + 520);
            if ( (v28 & 1) != 0 && (v28 & 2) == 0 )
            {
              v26 = *(float *)(v57 + 524);
              HIDWORD(v50) = *(_DWORD *)(v57 + 528);
              LODWORD(v50) = HIDWORD(v50);
              v27 = *((float *)&v50 + 1);
LABEL_31:
              if ( v26 != 0.0 )
                goto LABEL_32;
            }
          }
          if ( v27 == 0.0 )
          {
LABEL_17:
            if ( v12 )
            {
              if ( (*(_DWORD *)(v18 + 40) & 0x4000000) != 0 )
              {
                if ( a5 )
                {
                  v45 = *(struct _LUID **)(v18 + 1784);
                  if ( v45 )
                  {
                    v45[13] = *a5;
                    v22 = v57;
                  }
                }
              }
            }
            CreateCompatibleSurface(
              v53,
              *(_QWORD *)(v22 + 48),
              v24,
              v23,
              v10,
              v9,
              v51,
              v66,
              v65,
              0,
              0,
              0,
              v14,
              0,
              0,
              0LL,
              v50);
            v30 = v54;
            if ( v54 )
            {
              if ( v26 != 0.0 || v27 != 0.0 )
              {
                v31 = v52;
                *(_DWORD *)(v54 + 116) |= 0x800u;
                *(_QWORD *)(v30 + 668) = v31;
                *(float *)(v30 + 660) = v26;
                *(float *)(v30 + 664) = v27;
                v30 = v54;
              }
              LOBYTE(v29) = 5;
              HmgSetOwner(*(_QWORD *)(v30 + 32), 2147483650LL, v29);
              v30 = v54;
              v32 = *(_QWORD *)(v54 + 32);
            }
            else
            {
              v32 = 0LL;
            }
            if ( v30 )
            {
              v33 = Gre::Base::Globals((Gre::Base *)v30);
              DEC_SHARE_REF_CNT(v33, v54);
            }
            PopThreadGuardedObject(v53);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v64);
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v55);
            EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v56);
            GrepReleaseLockValidate<1>();
            GreReleaseSemaphoreSharedInternal(v56);
LABEL_26:
            APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v57);
            return v32;
          }
LABEL_32:
          v35 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v10);
          *(float *)v35.m128i_i32 = *(float *)v35.m128i_i32 * v26;
          v37 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v9);
          v36 = _mm_cvtsi128_si32(v35);
          *(float *)v37.m128i_i32 = *(float *)v37.m128i_i32 * v27;
          v38 = (unsigned __int8)(v36 >> 23);
          if ( v38 <= 0x9E )
          {
            v39 = v36 & 0x7FFFFF | 0x800000LL;
            v40 = v38 < 0x76 ? v39 >> (118 - (unsigned __int8)v38) : v39 << ((unsigned __int8)v38 - 118);
            v10 = (v40 + 0x80000000LL) >> 32;
            if ( v36 < 0 )
              LODWORD(v10) = -(int)v10;
          }
          v41 = _mm_cvtsi128_si32(v37);
          v42 = (unsigned __int8)(v41 >> 23);
          if ( v42 <= 0x9E )
          {
            v43 = v41 & 0x7FFFFF | 0x800000LL;
            v44 = v42 < 0x76 ? v43 >> (118 - (unsigned __int8)v42) : v43 << ((unsigned __int8)v42 - 118);
            v9 = (v44 + 0x80000000LL) >> 32;
            if ( v41 < 0 )
              LODWORD(v9) = -(int)v9;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v24 = *(_DWORD *)(v18 + 2092);
        if ( (*(_DWORD *)(v18 + 2156) & 0x100) != 0 )
          goto LABEL_14;
        v25 = *(__int64 **)(v18 + 1792);
      }
      v23 = *v25;
      goto LABEL_14;
    }
    return 0LL;
  }
  return GreCreateBitmap((unsigned int)v10, (unsigned int)v9, 1LL, 1LL, 0LL);
}
