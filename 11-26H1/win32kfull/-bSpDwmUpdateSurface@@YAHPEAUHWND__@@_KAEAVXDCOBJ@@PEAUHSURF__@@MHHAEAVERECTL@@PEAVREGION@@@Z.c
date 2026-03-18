/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14009D9B0
 * Callers:
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14009C140 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x14014BDE4 (DwmSyncCaptureSurfaceBits.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  PVOID v9; // r12
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rcx
  void *v19; // rbx
  NTSTATUS v20; // edi
  Gre::Base *v21; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  int v23; // eax
  HSURF v24; // rbx
  __int64 v25; // rcx
  _BYTE *v26; // rsi
  __int64 CurrentProcess; // rax
  __int64 v28; // rbx
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  void *v30; // rbx
  __int64 v31; // rax
  int v33; // edx
  Gre::Base *v34; // rcx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  int v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v42; // [rsp+78h] [rbp-88h] BYREF
  char v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+84h] [rbp-7Ch]
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  void *v46; // [rsp+90h] [rbp-70h] BYREF
  HSURF v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+A4h] [rbp-5Ch]
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  __int64 v52; // [rsp+B0h] [rbp-50h]
  int v53; // [rsp+B8h] [rbp-48h]
  int v54; // [rsp+BCh] [rbp-44h]
  _BYTE v55[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-20h]
  _BYTE v57[160]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v58[4]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v59[52]; // [rsp+194h] [rbp+94h] BYREF
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  __int64 v61; // [rsp+1E0h] [rbp+E0h]
  int v62; // [rsp+1E8h] [rbp+E8h]
  int v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+220h] [rbp+120h]

  v9 = 0LL;
  Object = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v48 = 0;
  v51 = 0;
  v54 = 0;
  v47 = a4;
  v37 = a2;
  CurrentThread = GreGetCurrentThread();
  if ( CurrentThread && (*((_DWORD *)CurrentThread + 84) & 8) != 0 )
  {
    v33 = 2;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( !CurrentProcessWin32Process )
      goto LABEL_6;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      goto LABEL_6;
    if ( a1 )
      goto LABEL_6;
    v16 = *(_DWORD *)(CurrentProcessWin32Process + 276);
    if ( (v16 & 1) != 0 )
      goto LABEL_6;
    v33 = 1;
    *(_DWORD *)(CurrentProcessWin32Process + 276) = v16 | 1;
  }
  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x400000000000LL) != 0
    && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
  {
    LODWORD(v45) = v33;
    LODWORD(Handle) = 0;
    v39 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA30,
      (__int64)&unk_14037ADD0,
      0x400000000000LL,
      v14,
      (__int64)&v39,
      (__int64)&Handle,
      (__int64)&v45);
  }
LABEL_6:
  v49 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v50 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v52 = 0LL;
  v53 = 1;
  UserEnterUserCritSecShared();
  v17 = UserReferenceDwmProcess();
  v19 = (void *)UserReferenceDwmApiPort(v18);
  UserLeaveUserCritSec();
  LODWORD(Handle) = 88;
  if ( v17 && v19 )
  {
    v20 = DwmSyncCaptureSurfaceBits(v19, a7, v49, v50, v37, (__int64)&Handle, (__int64)&Object);
  }
  else
  {
    v20 = -1073741823;
    UserDereferenceDwmApiPort(v19);
  }
  v22 = Gre::Base::Globals(v21);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v45, v22);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v57);
  v23 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, a3, 0);
  v24 = v47;
  if ( v23 && **(HSURF **)(*(_QWORD *)a3 + 496LL) == v47 )
  {
    if ( v20 >= 0 )
    {
      LOBYTE(v36) = 0;
      Handle = 0LL;
      v20 = ObDuplicateObject(v17, Object, 0LL, &Handle, 4, 512, 1, v36);
      if ( v20 >= 0 )
      {
        Object = 0LL;
        v20 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
        v9 = Object;
        ZwClose(Handle);
      }
    }
  }
  else
  {
    v20 = -1073741823;
  }
  UserDereferenceDwmProcess(v17);
  v26 = 0LL;
  if ( v20 >= 0 )
  {
    v39 = 0LL;
    v37 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v25);
    v20 = ((__int64 (__fastcall *)(PVOID, __int64, void **, _QWORD, _QWORD, __int64 *, __int64 *, int, _DWORD, int))MmMapViewOfSection)(
            v9,
            CurrentProcess,
            &v46,
            0LL,
            0LL,
            &v39,
            &v37,
            2,
            0,
            2);
    if ( v20 >= 0 )
    {
      v48 = 6;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v42, (struct _DEVBITMAPINFO *)&v48, v46, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
      {
        v40 = 0;
        v39 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v39, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v40 = 1;
          v37 = v42[16];
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v37);
          v34 = (Gre::Base *)v42;
          v42[16] = v39;
          if ( v39 )
          {
            v35 = Gre::Base::Globals(v34);
            INC_SHARE_REF_CNT(v35, v39);
          }
        }
        else
        {
          v20 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v39);
      }
      else
      {
        v20 = -1073741823;
      }
    }
    if ( v20 >= 0 )
    {
      SURFREF::SURFREF((SURFREF *)v55, v24);
      if ( v56 && *(_DWORD *)(v56 + 96) == 6 )
      {
        v28 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
        v37 = v28;
        v39 = 0LL;
        SURFREFVIEW::bMap(
          (SURFREFVIEW *)&v39,
          (struct _SURFOBJ *)((unsigned __int64)(v42 + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v42 >> 64)));
        if ( v39 )
        {
          v61 = 0LL;
          v62 = 0;
          v63 = 1;
          v64 = 0LL;
          v60 = 0LL;
          if ( a9 )
          {
            XCLIPOBJ::vSetup((XCLIPOBJ *)v58, a9, a8, 0);
            v26 = v58;
          }
          if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v37) )
          {
            v29 = RedirCopyBits;
          }
          else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
          {
            v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v28 + 2832);
          }
          else
          {
            v29 = EngCopyBits;
          }
          if ( !v26 || !ERECTL::bEmpty((ERECTL *)v59) )
          {
            v37 = 0LL;
            ((void (__fastcall *)(__int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, __int64 *))v29)(
              (v56 + 24) & -(__int64)(v56 != 0),
              (unsigned __int64)(v42 + 3) & -(__int64)(v42 != 0LL),
              v26,
              0LL,
              a8,
              &v37);
          }
        }
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v39);
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v55);
    }
  }
  if ( a9 )
  {
    v37 = (__int64)a9;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
  }
  v30 = v46;
  if ( v46 )
  {
    v31 = PsGetCurrentProcess(v25);
    MmUnmapViewOfSection(v31, v30);
  }
  if ( v9 )
    ObfDereferenceObject(v9);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v57);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v45);
  SURFMEM::~SURFMEM((SURFMEM *)&v42);
  return v20 >= 0;
}
