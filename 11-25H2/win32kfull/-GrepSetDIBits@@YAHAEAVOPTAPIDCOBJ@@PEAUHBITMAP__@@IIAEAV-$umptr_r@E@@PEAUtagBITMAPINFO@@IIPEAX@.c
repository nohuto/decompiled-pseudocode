/*
 * XREFs of ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1401C44D8
 * Callers:
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401C4344 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 *     GreSetDIBits @ 0x140313160 (GreSetDIBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140094608 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DD74 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DE84 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 */

__int64 __fastcall GrepSetDIBits(
        Gre::Base *a1,
        struct HOBJ__ *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6,
        int a7,
        int a8,
        void *a9)
{
  unsigned int *v9; // r15
  HDC CompatibleDC; // rdi
  __int64 v11; // r14
  char v12; // si
  int v14; // r12d
  struct Gre::Base::SESSION_GLOBALS *v15; // rbx
  _QWORD *v16; // rbx
  _QWORD *v17; // r13
  struct Gre::Base::SESSION_GLOBALS **v18; // rax
  HDC v19; // rcx
  __int64 v20; // r13
  unsigned int v21; // ebx
  _BYTE v23[32]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h]
  _QWORD v25[22]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+188h] [rbp+80h]

  v9 = a6;
  CompatibleDC = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !a6 || *a6 >= 0x28 && a6[4] - 4 <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v14 = a6[2];
  v28 = a6[1];
  if ( v14 < 0 )
    v14 = -v14;
  v15 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&a6, v15);
  SURFREF::SURFREF((SURFREF *)v23, a2, v15);
  if ( !v24 || (*(_DWORD *)(v24 + 112) & 0x4000000) == 0 )
  {
    EngSetLastError(6u);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v23);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)a6);
    return 0LL;
  }
  if ( *(_DWORD *)(v24 + 168) )
    CompatibleDC = *(HDC *)(v24 + 160);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v23);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    (__int64)a6);
  if ( !CompatibleDC )
  {
    CompatibleDC = GrepCreateCompatibleDC(a1);
    if ( CompatibleDC )
    {
      v12 = 1;
      goto LABEL_13;
    }
    return 0LL;
  }
LABEL_13:
  v16 = (_QWORD *)((char *)a1 + 104);
  v17 = v16;
  if ( *v16 )
  {
    if ( !OPTAPIDCOBJ::bValid((HDC *)a1) )
    {
      EngSetLastError(6u);
      goto LABEL_42;
    }
    v18 = (struct Gre::Base::SESSION_GLOBALS **)a1;
    v17 = (_QWORD *)((char *)a1 + 104);
  }
  else
  {
    v18 = (struct Gre::Base::SESSION_GLOBALS **)a1;
  }
  v19 = (HDC)*v16;
  if ( *v16 )
  {
    v16 = v17;
    if ( v19 != CompatibleDC )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v25, v18);
      v11 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v25[0] + 80LL), 1LL);
      if ( v11 )
      {
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v25);
        goto LABEL_19;
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v25);
LABEL_42:
      if ( !v12 )
        return 0LL;
      goto LABEL_37;
    }
  }
LABEL_19:
  if ( !v12 )
  {
    v20 = 0LL;
    goto LABEL_21;
  }
  v20 = GreSelectBitmap(CompatibleDC, a2);
  if ( !v20 )
  {
    if ( v11 )
      GreSelectPalette(CompatibleDC, v11, 1LL);
LABEL_37:
    GrepDeleteDC(CompatibleDC, 0x400000LL);
    return 0LL;
  }
LABEL_21:
  if ( CompatibleDC == (HDC)*v16 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v25, (struct Gre::Base::SESSION_GLOBALS **)a1);
    v21 = GrepSetDIBitsToDeviceInternalImpl((XDCOBJ *)v25, 0, 0, v28, v14, 0, 0, 0, a4, a5, v9, a7, a8, 0, a9);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v25);
  }
  else
  {
    v21 = GreSetDIBitsToDeviceInternalImpl(
            CompatibleDC,
            0LL,
            0LL,
            v28,
            v14,
            0,
            0,
            0,
            a4,
            (__int64)a5,
            (__int64)v9,
            a7,
            a8,
            0,
            (__int64)a9);
  }
  if ( v12 && v20 )
    GreSelectBitmap(CompatibleDC, v20);
  if ( v11 )
    GreSelectPalette(CompatibleDC, v11, 1LL);
  if ( v12 )
    GrepDeleteDC(CompatibleDC, 0x400000LL);
  return v21;
}
