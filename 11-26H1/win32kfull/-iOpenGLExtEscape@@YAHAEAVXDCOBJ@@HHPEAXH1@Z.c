/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1401895FC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1401AEF4C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401C7728 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1401C7780 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14021B528 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140310430 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1403104F0 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x140310614 (--1DEVEXCLUDEWNDOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x140310638 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140310EB4 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x140311E68 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x140318840 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x14032910C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
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
  __int64 v17; // rcx
  HDEV DeviceHdev; // rax
  __int64 v19; // r8
  char *v20; // rax
  ULONG v21; // ecx
  WNDOBJ *v22; // rdx
  HDC *v23; // rdi
  __int64 v24; // r9
  int v25; // r13d
  ULONG v26; // ecx
  XLATE *v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int16 *v31; // rdx
  int Xlate; // eax
  int v33; // eax
  __int64 v34; // rcx
  struct REGION *v35; // rax
  struct REGION *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  int v40; // [rsp+34h] [rbp-864h] BYREF
  HDEV v41; // [rsp+38h] [rbp-860h] BYREF
  XLATE *v42; // [rsp+40h] [rbp-858h] BYREF
  int v43; // [rsp+48h] [rbp-850h]
  struct SURFACE *v44; // [rsp+50h] [rbp-848h]
  _QWORD *v45; // [rsp+58h] [rbp-840h]
  void *Src; // [rsp+60h] [rbp-838h]
  WNDOBJ *v47; // [rsp+68h] [rbp-830h] BYREF
  _QWORD Parameter[2]; // [rsp+70h] [rbp-828h] BYREF
  int v49; // [rsp+80h] [rbp-818h]
  signed int v50; // [rsp+84h] [rbp-814h]
  void *v51; // [rsp+88h] [rbp-810h]
  void *v52; // [rsp+90h] [rbp-808h]
  int v53; // [rsp+98h] [rbp-800h]
  unsigned int v54; // [rsp+9Ch] [rbp-7FCh]
  struct _RECTL v55; // [rsp+A0h] [rbp-7F8h] BYREF
  _BYTE v56[168]; // [rsp+B0h] [rbp-7E8h] BYREF
  WNDOBJ *pwo; // [rsp+158h] [rbp-740h]
  void *v58; // [rsp+170h] [rbp-728h] BYREF
  int v59; // [rsp+178h] [rbp-720h]
  int v60; // [rsp+17Ch] [rbp-71Ch]
  _DWORD v61[8]; // [rsp+180h] [rbp-718h] BYREF
  __int64 v62; // [rsp+1A0h] [rbp-6F8h]
  char v63[1024]; // [rsp+1B0h] [rbp-6E8h] BYREF
  char v64; // [rsp+5B0h] [rbp-2E8h] BYREF
  unsigned __int16 v65[2]; // [rsp+650h] [rbp-248h] BYREF
  struct _RECTL v66; // [rsp+654h] [rbp-244h] BYREF

  Src = a4;
  v58 = a6;
  if ( (unsigned int)dword_1403AAA30 > 5 && tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL) )
  {
    v40 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA30,
      byte_14037ABD2,
      v8,
      v9,
      (__int64)&v40);
  }
  v10 = 0;
  v43 = 0;
  v40 = 0;
  `vector constructor iterator'(v63, 64LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v12 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_6:
    `vector destructor iterator'(v63, 64LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v42 = 0LL;
  v41 = *(HDEV *)(v12 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v56, a1, v11);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v56[32] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_8;
  v16 = XDCOBJ::pSurfaceEff(a1);
  v44 = v16;
  if ( ((_DWORD)v41[10] & 0x20000) != 0 )
  {
    v17 = *(_QWORD *)a1;
    v55 = *(struct _RECTL *)(*(_QWORD *)a1 + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v17 + 48), &v55, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v41 + 318) )
      {
        v16 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 318);
        v44 = v16;
      }
      v41 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v41 + 359) || ((_DWORD)v41[10] & 0x8000) != 0 )
  {
LABEL_8:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v56);
    EXLATEOBJ::vAltUnlock(&v42, v14, v15);
    goto LABEL_6;
  }
  v45 = (_QWORD *)*((_QWORD *)a1 + 2);
  SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v55, v45);
  v47 = 0LL;
  v62 = 0LL;
  v61[0] = 0;
  v51 = 0LL;
  v54 = 0;
  Parameter[0] = &v41;
  v20 = (char *)v16 + 24;
  if ( !v16 )
    v20 = 0LL;
  Parameter[1] = v20;
  v49 = a2;
  v50 = a3;
  v53 = a5;
  v52 = v58;
  if ( a2 != 4352 )
  {
    v51 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, Parameter, 0x11800uLL) >= 0 )
      v10 = v54;
    goto LABEL_71;
  }
  if ( (unsigned __int64)a3 >= 0x18 )
  {
    if ( (unsigned __int64)a3 > 0x98 )
    {
      v23 = (HDC *)PALLOCNOZ(a3, 1818718023LL, v19);
      if ( !v23 )
      {
        v21 = 8;
        goto LABEL_23;
      }
    }
    else
    {
      v23 = (HDC *)&v64;
    }
    memmove(v23, Src, a3);
    if ( (*((_DWORD *)v23 + 1) & 4) != 0 )
    {
      v24 = *((unsigned int *)v23 + 2);
      if ( (unsigned int)v24 > 0x10 || (unsigned int)a3 < (unsigned __int64)(8 * v24 + 24) )
      {
        v26 = 8;
        goto LABEL_34;
      }
      v25 = LookUpWndobjs(a1, (struct DCOBJ *)v63, v23 + 3, v24);
      if ( v25 < 0 )
        goto LABEL_67;
    }
    else
    {
      v25 = v40;
    }
    if ( (*((_DWORD *)v23 + 1) & 2) != 0 )
    {
      if ( *((_DWORD *)v41 + 523) != 2 && *((_DWORD *)v41 + 523) != 3 )
        goto LABEL_39;
      v28 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v28 )
      {
        v29 = 16;
        if ( *((_DWORD *)v41 + 523) != 2 )
          v29 = 256;
        v30 = 0;
        v31 = v65;
        do
          *v31++ = v30++;
        while ( v30 < v29 );
        Xlate = EXLATEOBJ::bMakeXlate(&v42, v65, v28, (__int64)v44, v29, v29);
        v27 = 0LL;
        if ( Xlate )
          v27 = v42;
      }
      else
      {
        v27 = 0LL;
      }
      if ( !v27 )
LABEL_39:
        v27 = (XLATE *)(v45 + 583);
    }
    else
    {
      v27 = 0LL;
    }
    v23[2] = (HDC)v27;
    v33 = *((_DWORD *)v23 + 1);
    if ( (v33 & 4) != 0 )
      goto LABEL_60;
    if ( (v33 & 1) == 0 )
    {
      v23[1] = 0LL;
      goto LABEL_60;
    }
    v22 = pwo;
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v34 != *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        && *(_QWORD *)(*(_QWORD *)(v34 + 48) + 24LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
LABEL_67:
        if ( (unsigned int)a3 > 0x98 )
          Win32FreePool(v23);
        goto LABEL_71;
      }
      v23[1] = (HDC)pwo;
LABEL_60:
      if ( pwo )
      {
        if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
        {
          v47 = pwo;
          EngControlSprites(pwo, 1u);
        }
      }
      else
      {
        v35 = XDCOBJ::prgnEffRao((DC **)a1);
        v58 = *(void **)((char *)v35 + 52);
        v59 = *((_DWORD *)v35 + 15);
        v60 = *((_DWORD *)v35 + 16);
        v36 = XDCOBJ::prgnEffRao((DC **)a1);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v65, v36, (struct ERECTL *)&v58, 0);
        DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v61, a1, &v66);
      }
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
      v51 = v23;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, Parameter, 0x11800uLL) >= 0 )
      {
        v10 = v54;
        if ( (*((_DWORD *)v23 + 1) & 4) != 0 )
          v10 = (v25 << 16) | (unsigned __int16)v54;
      }
      goto LABEL_67;
    }
    v26 = 6;
LABEL_34:
    EngSetLastError(v26);
    goto LABEL_67;
  }
  v21 = 87;
LABEL_23:
  EngSetLastError(v21);
LABEL_71:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v61, (__int64)v22);
  DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(&v47);
  if ( *(_QWORD *)&v55.left )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      *(__int64 *)&v55.left);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v56);
  EXLATEOBJ::vAltUnlock(&v42, v37, v38);
  `vector destructor iterator'(v63, 64LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v10;
}
