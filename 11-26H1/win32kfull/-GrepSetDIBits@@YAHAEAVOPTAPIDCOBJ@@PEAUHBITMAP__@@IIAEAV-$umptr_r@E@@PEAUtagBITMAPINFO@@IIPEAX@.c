/*
 * XREFs of ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x14016AE30
 * Callers:
 *     ?GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x14016959C (-GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEA.c)
 *     GreSetDIBits @ 0x140336C78 (GreSetDIBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x140078F30 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 */

__int64 __fastcall GrepSetDIBits(
        OPTAPIDCOBJ *this,
        __int64 a2,
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
  unsigned int v14; // eax
  int v15; // r12d
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  HDC *v21; // rbx
  __int64 v22; // rbx
  unsigned int v23; // r15d
  _OWORD v25[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-58h]
  _QWORD v27[20]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+178h] [rbp+70h]

  v9 = a6;
  CompatibleDC = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !a6 || *a6 >= 0x28 && ((v14 = a6[4], v14 == 4) || v14 == 5) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v15 = a6[2];
  v29 = a6[1];
  if ( v15 < 0 )
    v15 = -v15;
  v16 = Gre::Base::Globals(this);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&a6, v16);
  memset(v25, 0, sizeof(v25));
  PushThreadGuardedObject(
    v25,
    v25,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v17) = 5;
  v18 = HmgShareLock(v16, a2, v17, 0LL);
  v26 = v18;
  if ( !v18 || (*(_DWORD *)(v18 + 112) & 0x4000000) == 0 )
  {
    EngSetLastError(6u);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)a6);
    return 0LL;
  }
  if ( *(_DWORD *)(v18 + 168) )
    CompatibleDC = *(HDC *)(v18 + 160);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    (__int64)a6);
  if ( !CompatibleDC )
  {
    CompatibleDC = GrepCreateCompatibleDC(this);
    if ( CompatibleDC )
    {
      v12 = 1;
      goto LABEL_14;
    }
    return 0LL;
  }
LABEL_14:
  v21 = (HDC *)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
  {
    if ( !OPTAPIDCOBJ::bValid(this, v19, v20) )
    {
      EngSetLastError(6u);
      goto LABEL_43;
    }
    a6 = (unsigned int *)((char *)this + 96);
  }
  else
  {
    a6 = (unsigned int *)((char *)this + 96);
  }
  if ( *v21 && *v21 != CompatibleDC )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v27, this);
    v11 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v27[0] + 80LL), 1LL);
    if ( v11 )
    {
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v27);
      goto LABEL_21;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v27);
LABEL_43:
    if ( !v12 )
      return 0LL;
    goto LABEL_38;
  }
LABEL_21:
  if ( !v12 )
  {
    v22 = 0LL;
    goto LABEL_23;
  }
  v22 = GreSelectBitmap(CompatibleDC, a2);
  if ( !v22 )
  {
    if ( v11 )
      GreSelectPalette(CompatibleDC, v11, 1LL);
LABEL_38:
    GrepDeleteDC(CompatibleDC, 0x400000LL);
    return 0LL;
  }
LABEL_23:
  if ( CompatibleDC == *(HDC *)a6 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v27, this);
    v23 = GrepSetDIBitsToDeviceInternalImpl((struct XDCOBJ *)v27, 0, 0, v29, v15, 0, 0, 0, a4, a5, v9, a7, a8, 0, a9);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v27);
  }
  else
  {
    v23 = GreSetDIBitsToDeviceInternalImpl(
            CompatibleDC,
            0,
            0,
            v29,
            v15,
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
  if ( v12 && v22 )
    GreSelectBitmap(CompatibleDC, v22);
  if ( v11 )
    GreSelectPalette(CompatibleDC, v11, 1LL);
  if ( v12 )
    GrepDeleteDC(CompatibleDC, 0x400000LL);
  return v23;
}
