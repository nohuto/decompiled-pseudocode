/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140328140
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x140077B78 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14015073C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14019EB54 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401D18A8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401E5E48 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140326D78 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140326F1C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x140327040 (--1DEVEXCLUDEWNDOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x140327064 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140327CF0 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1403289B0 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x14032FCA0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140333DFC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct XDCOBJ *a1, int a2, signed int a3, void *a4, int a5, void *a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct SURFACE *v16; // r13
  HDEV v17; // rcx
  HDEV DeviceHdev; // rax
  ULONG v19; // ecx
  WNDOBJ *v20; // rdx
  HDC *v21; // rdi
  __int64 v22; // r9
  int v23; // r13d
  ULONG v24; // ecx
  XLATE *v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned __int16 *v29; // rdx
  int Xlate; // eax
  int v31; // eax
  __int64 v32; // rcx
  struct REGION *v33; // rax
  struct REGION *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  int v38; // [rsp+34h] [rbp-8C4h] BYREF
  HDEV v39; // [rsp+38h] [rbp-8C0h] BYREF
  XLATE *v40; // [rsp+40h] [rbp-8B8h] BYREF
  int v41; // [rsp+48h] [rbp-8B0h]
  struct SURFACE *v42; // [rsp+50h] [rbp-8A8h]
  _QWORD *v43; // [rsp+58h] [rbp-8A0h]
  void *Src; // [rsp+60h] [rbp-898h]
  WNDOBJ *v45; // [rsp+68h] [rbp-890h] BYREF
  HDEV *Parameter; // [rsp+70h] [rbp-888h] BYREF
  char *v47; // [rsp+78h] [rbp-880h]
  int v48; // [rsp+80h] [rbp-878h]
  signed int v49; // [rsp+84h] [rbp-874h]
  void *v50; // [rsp+88h] [rbp-870h]
  void *v51; // [rsp+90h] [rbp-868h]
  int v52; // [rsp+98h] [rbp-860h]
  unsigned int v53; // [rsp+9Ch] [rbp-85Ch]
  struct _RECTL v54; // [rsp+A0h] [rbp-858h] BYREF
  _BYTE v55[144]; // [rsp+B0h] [rbp-848h] BYREF
  WNDOBJ *pwo; // [rsp+140h] [rbp-7B8h]
  void *v57; // [rsp+150h] [rbp-7A8h] BYREF
  int v58; // [rsp+158h] [rbp-7A0h]
  int v59; // [rsp+15Ch] [rbp-79Ch]
  _DWORD v60[8]; // [rsp+160h] [rbp-798h] BYREF
  __int64 v61; // [rsp+180h] [rbp-778h]
  char v62; // [rsp+190h] [rbp-768h] BYREF
  char v63[1152]; // [rsp+230h] [rbp-6C8h] BYREF
  unsigned __int16 v64[2]; // [rsp+6B0h] [rbp-248h] BYREF
  struct _RECTL v65; // [rsp+6B4h] [rbp-244h] BYREF

  Src = a4;
  v57 = a6;
  if ( (unsigned int)dword_14039BBC0 > 5 && tlgKeywordOn((__int64)&dword_14039BBC0, 0x400000000000LL) )
  {
    v38 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBC0,
      byte_14036C1F7,
      v8,
      v9,
      (__int64)&v38);
  }
  v10 = 0;
  v41 = 0;
  v38 = 0;
  `vector constructor iterator'(v63, 72LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v12 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_6:
    `vector destructor iterator'(v63, 72LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v40 = 0LL;
  v39 = *(HDEV *)(v12 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v55, a1, v11);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v55[32] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_8;
  v16 = XDCOBJ::pSurfaceEff(a1);
  v42 = v16;
  if ( ((_DWORD)v39[10] & 0x20000) != 0 )
  {
    v17 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v54 = *(struct _RECTL *)(*(_QWORD *)a1 + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v17, &v54, (struct EWNDOBJ *)((unsigned __int64)pwo & -(__int64)(pwo != 0LL)));
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v39 + 318) )
      {
        v16 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 318);
        v42 = v16;
      }
      v39 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v39 + 359) || ((_DWORD)v39[10] & 0x8000) != 0 )
  {
LABEL_8:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v55);
    EXLATEOBJ::vAltUnlock(&v40, v14, v15);
    goto LABEL_6;
  }
  v43 = (_QWORD *)*((_QWORD *)a1 + 2);
  SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v54, v43);
  v45 = 0LL;
  v61 = 0LL;
  v60[0] = 0;
  v50 = 0LL;
  v53 = 0;
  Parameter = &v39;
  if ( v16 )
    v47 = (char *)v16 + 24;
  else
    v47 = 0LL;
  v48 = a2;
  v49 = a3;
  v52 = a5;
  v51 = v57;
  if ( a2 != 4352 )
  {
    v50 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v10 = v53;
    goto LABEL_73;
  }
  if ( (unsigned __int64)a3 >= 0x18 )
  {
    if ( (unsigned __int64)a3 > 0x98 )
    {
      v21 = (HDC *)PALLOCNOZ(a3, 1818718023LL);
      if ( !v21 )
      {
        v19 = 8;
        goto LABEL_24;
      }
    }
    else
    {
      v21 = (HDC *)&v62;
    }
    memmove(v21, Src, a3);
    if ( (*((_DWORD *)v21 + 1) & 4) != 0 )
    {
      v22 = *((unsigned int *)v21 + 2);
      if ( (unsigned int)v22 > 0x10 || (unsigned int)a3 < (unsigned __int64)(8 * v22 + 24) )
      {
        v24 = 8;
        goto LABEL_35;
      }
      v23 = LookUpWndobjs(a1, (struct DCOBJ *)v63, v21 + 3, v22);
      if ( v23 < 0 )
        goto LABEL_69;
    }
    else
    {
      v23 = v38;
    }
    if ( (*((_DWORD *)v21 + 1) & 2) != 0 )
    {
      if ( *((_DWORD *)v39 + 523) != 2 && *((_DWORD *)v39 + 523) != 3 )
        goto LABEL_40;
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v26 )
      {
        v27 = 16;
        if ( *((_DWORD *)v39 + 523) != 2 )
          v27 = 256;
        v28 = 0;
        v29 = v64;
        do
          *v29++ = v28++;
        while ( v28 < v27 );
        Xlate = EXLATEOBJ::bMakeXlate(&v40, v64, v26, (__int64)v42, v27, v27);
        v25 = 0LL;
        if ( Xlate )
          v25 = v40;
      }
      else
      {
        v25 = 0LL;
      }
      if ( !v25 )
LABEL_40:
        v25 = (XLATE *)(v43 + 569);
    }
    else
    {
      v25 = 0LL;
    }
    v21[2] = (HDC)v25;
    v31 = *((_DWORD *)v21 + 1);
    if ( (v31 & 4) != 0 )
      goto LABEL_62;
    if ( (v31 & 1) == 0 )
    {
      v21[1] = 0LL;
      goto LABEL_62;
    }
    v20 = pwo;
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v32 != *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        && *(_QWORD *)(*(_QWORD *)(v32 + 48) + 24LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
LABEL_69:
        if ( (unsigned int)a3 > 0x98 )
          Win32FreePool(v21);
        goto LABEL_73;
      }
      v21[1] = (HDC)pwo;
LABEL_62:
      if ( pwo )
      {
        if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
        {
          v45 = pwo;
          EngControlSprites(pwo, 1u);
        }
      }
      else
      {
        v33 = XDCOBJ::prgnEffRao((DC **)a1);
        v57 = *(void **)((char *)v33 + 52);
        v58 = *((_DWORD *)v33 + 15);
        v59 = *((_DWORD *)v33 + 16);
        v34 = XDCOBJ::prgnEffRao((DC **)a1);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v64, v34, (struct ERECTL *)&v57);
        DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v60, a1, &v65);
      }
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
      v50 = v21;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      {
        v10 = v53;
        if ( (*((_DWORD *)v21 + 1) & 4) != 0 )
          v10 = (v23 << 16) | (unsigned __int16)v53;
      }
      goto LABEL_69;
    }
    v24 = 6;
LABEL_35:
    EngSetLastError(v24);
    goto LABEL_69;
  }
  v19 = 87;
LABEL_24:
  EngSetLastError(v19);
LABEL_73:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v60, (__int64)v20);
  DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(&v45);
  if ( *(_QWORD *)&v54.left )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      *(__int64 *)&v54.left);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v55);
  EXLATEOBJ::vAltUnlock(&v40, v35, v36);
  `vector destructor iterator'(v63, 72LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v10;
}
