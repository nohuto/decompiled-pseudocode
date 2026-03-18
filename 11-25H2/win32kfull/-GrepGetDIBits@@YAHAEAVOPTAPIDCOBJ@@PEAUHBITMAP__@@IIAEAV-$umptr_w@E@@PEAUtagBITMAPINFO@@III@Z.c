/*
 * XREFs of ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C
 * Callers:
 *     GreGetDIBitsInternal @ 0x14007C00C (GreGetDIBitsInternal.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x14007C330 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x140150C80 (NtGdiGetDIBitsInternal.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x14033D6B4 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A700 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GrepGetDIBits(
        struct OPTAPIDCOBJ *a1,
        HSURF a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        unsigned int a8,
        unsigned int a9)
{
  unsigned int *v9; // rsi
  struct OPTAPIDCOBJ *v11; // rdi
  char v12; // r15
  int v13; // ebx
  __int64 *v14; // r14
  unsigned int *v15; // rbx
  unsigned int v16; // r12d
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  int v19; // ecx
  int v20; // ecx
  __int64 v22; // rbx
  int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _DC_ATTR *UserAttr; // rax
  OBJECT *v28; // rax
  __int16 v29; // ax
  unsigned int DIBitsInternalWorker; // ebx
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[24]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  _BYTE v35[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[14]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v37[20]; // [rsp+110h] [rbp+10h] BYREF

  v9 = a6;
  v11 = a1;
  if ( !a6 || a7 && (unsigned int)(a7 - 1) > 1 || a9 < 0xC )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( !a4 )
  {
    *(_QWORD *)a5 = 0LL;
    v33 = 0;
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_QWORD *)(a5 + 16) = 0LL;
    *(_WORD *)(a5 + 24) = 0;
  }
  v12 = 1;
  if ( *(_QWORD *)a1 )
    goto LABEL_7;
  if ( *((_BYTE *)a1 + 113) == 1 )
    goto LABEL_8;
  XDCOBJ::vLockIgnoreAttributes(a1, *((HDC *)a1 + 13));
  if ( *(_QWORD *)v11 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 44LL) & 2) == 0 )
    {
      if ( (*((_DWORD *)v11 + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(v11);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)v11, UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)v11);
            *(_QWORD *)v11 = 0LL;
            goto LABEL_46;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)v11 + 44LL) |= 2u;
      *((_DWORD *)v11 + 2) = 1;
    }
    a1 = *(struct OPTAPIDCOBJ **)v11;
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(a1);
  }
LABEL_46:
  v28 = *(OBJECT **)v11;
  *((_BYTE *)v11 + 113) = 1;
  if ( !v28 )
    goto LABEL_8;
  if ( *((_WORD *)v28 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v25, v26);
  if ( *(_WORD *)(*(_QWORD *)v11 + 12LL) != 1 )
  {
    if ( *(_QWORD *)v11 )
      XDCOBJ::vUnlockFast(v11);
    *(_QWORD *)v11 = 0LL;
    goto LABEL_8;
  }
LABEL_7:
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v37, (struct Gre::Base::SESSION_GLOBALS **)v11);
  v13 = *(_DWORD *)(*(_QWORD *)(v37[0] + 48LL) + 40LL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v37);
  if ( (v13 & 0x8000) == 0 )
  {
LABEL_8:
    v14 = (__int64 *)Gre::Base::Globals(a1);
    GreAcquireSemaphoreShared<1,>(v14);
    goto LABEL_9;
  }
  v12 = 0;
  v14 = (__int64 *)Gre::Base::Globals(a1);
LABEL_9:
  SURFREF::SURFREF((SURFREF *)v32, a2);
  v15 = (unsigned int *)v34;
  if ( !v34 )
    goto LABEL_37;
  v16 = *v9;
  if ( !*(_QWORD *)a5 )
  {
    if ( v16 == 12 )
    {
      if ( !*((_WORD *)v9 + 5) )
      {
        *((_WORD *)v9 + 2) = *(_WORD *)(v34 + 56);
        *((_WORD *)v9 + 3) = *((_WORD *)v15 + 30);
        *((_WORD *)v9 + 4) = 1;
        v29 = gaulConvert[2 * v15[24]];
        *((_WORD *)v9 + 5) = v29;
        if ( (unsigned __int16)v29 >= 0x10u )
          *((_WORD *)v9 + 5) = 24;
        goto LABEL_19;
      }
      goto LABEL_24;
    }
    if ( a9 < 0x28 )
      goto LABEL_37;
    if ( !*((_WORD *)v9 + 7) )
    {
      if ( v16 > 0x28 )
        memset_0(v9, 0, *v9);
      *v9 = 40;
      v17 = v15[14];
      v9[1] = v17;
      v18 = v15[15];
      v9[2] = v18;
      *((_WORD *)v9 + 6) = 1;
      v9[4] = 0;
      v19 = (unsigned __int16)gaulConvert[2 * v15[24]];
      *((_WORD *)v9 + 7) = v19;
      if ( v19 == 32 || v19 == 16 )
        v9[4] = 3;
      *((_QWORD *)v9 + 3) = 0LL;
      v9[5] = v18 * (((int)(v17 * v19 + 31) >> 3) & 0xFFFFFFFC);
      v20 = dword_140363A28[v15[24]];
      v9[9] = v20;
      v9[8] = v20;
LABEL_19:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
      if ( v12 )
        GreReleaseSemaphoreShared<1,>(v14);
      return 1LL;
    }
  }
  if ( v16 >= 0x28 && v9[4] - 4 <= 1 )
  {
    EngSetLastError(0x57u);
LABEL_37:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
    if ( v12 )
      GreReleaseSemaphoreShared<1,>(v14);
    return 0LL;
  }
LABEL_24:
  v22 = 0LL;
  if ( !OPTAPIDCOBJ::bValid(v11) )
    goto LABEL_37;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v36, (struct Gre::Base::SESSION_GLOBALS **)v11);
  v31 = *(_QWORD *)(v36[0] + 48LL);
  a6 = *(unsigned int **)(v36[0] + 88LL);
  if ( (*(_DWORD *)(v31 + 40) & 0x8000) != 0 )
  {
    DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                             v16,
                             (__int64)v36,
                             (__int64)&v31,
                             (__int64)v32,
                             (__int64 *)&a6,
                             a3,
                             a4,
                             (__int64 *)a5,
                             (__int64)v9,
                             a7,
                             a8,
                             a9);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v36);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
    if ( v12 )
      GreReleaseSemaphoreShared<1,>(v14);
    return DIBitsInternalWorker;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v35, (struct XDCOBJ *)v36);
    if ( v34 )
    {
      if ( v34 != -24 )
      {
        v23 = *(_DWORD *)(v34 + 112);
        if ( (v23 & 0x80004000) != 0 && (v23 & 0x200) == 0 )
        {
          v22 = v34;
          GreLockDisplayDevice(*(_QWORD *)(v34 + 48));
        }
      }
    }
    v24 = GreGetDIBitsInternalWorker(
            v16,
            (__int64)v36,
            (__int64)&v31,
            (__int64)v32,
            (__int64 *)&a6,
            a3,
            a4,
            (__int64 *)a5,
            (__int64)v9,
            a7,
            a8,
            a9);
    if ( v22 )
      GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v35);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v36);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
    if ( v12 )
      GreReleaseSemaphoreShared<1,>(v14);
    return v24;
  }
}
