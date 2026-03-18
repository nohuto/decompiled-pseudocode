/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x140117B90
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1401178F4 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x140095760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     DwmSyncCaptureSurfaceBits @ 0x14011861C (DwmSyncCaptureSurfaceBits.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14012ADAC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        __int64 a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  PVOID v9; // r15
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rcx
  void *v18; // rbx
  int v19; // edi
  Gre::Base *v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  PVOID v22; // r15
  _BYTE *v23; // rsi
  __int64 CurrentProcess; // rax
  __int64 v25; // rbx
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r11
  void *v27; // rbx
  __int64 v28; // rax
  int v30; // eax
  unsigned __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  int v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  char v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+94h] [rbp-6Ch]
  HSEMAPHORE v43[2]; // [rsp+98h] [rbp-68h] BYREF
  void *v44; // [rsp+A8h] [rbp-58h] BYREF
  HSURF v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B8h] [rbp-48h] BYREF
  int v47; // [rsp+BCh] [rbp-44h]
  int v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C4h] [rbp-3Ch]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D4h] [rbp-2Ch]
  _BYTE v53[32]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-8h]
  _BYTE v55[144]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v56[4]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v57[156]; // [rsp+194h] [rbp+94h] BYREF

  v9 = 0LL;
  Object = 0LL;
  v44 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v42 = 0;
  v46 = 0;
  v49 = 0;
  v52 = 0;
  v45 = a4;
  v35 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  if ( !CurrentThread || (*((_DWORD *)CurrentThread + 86) & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( !CurrentProcessWin32Process )
      goto LABEL_7;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      goto LABEL_7;
    if ( a1 )
      goto LABEL_7;
    v15 = *(_DWORD *)(CurrentProcessWin32Process + 276);
    if ( (v15 & 1) != 0 )
      goto LABEL_7;
    *(_DWORD *)(CurrentProcessWin32Process + 276) = v15 | 1;
  }
  if ( (unsigned int)dword_14039BBC0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x400000000000LL) )
  {
    LODWORD(v43[0]) = v33;
    LODWORD(Handle) = 0;
    v37 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14039BBC0,
      (unsigned int)&unk_14036C1BA,
      v32,
      v33,
      (__int64)&v37,
      (__int64)&Handle,
      (__int64)v43);
  }
LABEL_7:
  v47 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v48 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v50 = 0LL;
  v51 = 1;
  UserEnterUserCritSecShared();
  v16 = UserReferenceDwmProcess();
  v18 = (void *)UserReferenceDwmApiPort(v17);
  UserLeaveUserCritSec();
  LODWORD(Handle) = 88;
  if ( v16 && v18 )
  {
    v30 = DwmSyncCaptureSurfaceBits(v18, a7, v47, v48, v35, (__int64)&Handle, (__int64)&Object);
    v9 = Object;
    v19 = v30;
  }
  else
  {
    v19 = -1073741823;
    UserDereferenceDwmApiPort(v18);
  }
  v21 = Gre::Base::Globals(v20);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(v43, v21);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v55);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v55, a3, 0) && **(HSURF **)(*(_QWORD *)a3 + 496LL) == v45 )
  {
    if ( v19 >= 0 )
    {
      LOBYTE(v34) = 0;
      Handle = 0LL;
      v19 = ObDuplicateObject(v16, v9, 0LL, &Handle, 4, 512, 1, v34);
      if ( v19 >= 0 )
      {
        Object = 0LL;
        v19 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
        v22 = Object;
        ZwClose(Handle);
        goto LABEL_15;
      }
    }
  }
  else
  {
    v19 = -1073741823;
  }
  v22 = 0LL;
LABEL_15:
  UserDereferenceDwmProcess(v16);
  v23 = 0LL;
  if ( v19 >= 0 )
  {
    v37 = 0LL;
    v35 = 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v19 = MmMapViewOfSection(v22, CurrentProcess, &v44, 0LL, 0LL, &v37, &v35, 2, 0, 2);
    if ( v19 >= 0 )
    {
      v46 = 6;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v40, (struct _DEVBITMAPINFO *)&v46, v44, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v38 = 0;
        v37 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v37, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v31 = v40;
          v38 = 1;
          v35 = *(_QWORD *)(v40 + 128);
          if ( v35 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v35);
            v31 = v40;
          }
          *(_QWORD *)(v31 + 128) = v37;
          if ( v37 )
            INC_SHARE_REF_CNT(v37);
        }
        else
        {
          v19 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v37);
      }
      else
      {
        v19 = -1073741823;
      }
    }
    if ( v19 >= 0 )
    {
      SURFREF::SURFREF((SURFREF *)v53, v45);
      if ( v54 && *(_DWORD *)(v54 + 96) == 6 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
        v35 = v25;
        v37 = 0LL;
        SURFREFVIEW::bMap(
          (SURFREFVIEW *)&v37,
          (struct _SURFOBJ *)((v40 + 24) & ((unsigned __int128)-(__int128)v40 >> 64)));
        if ( v37 )
        {
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v56);
          if ( a9 )
          {
            XCLIPOBJ::vSetup((XCLIPOBJ *)v56, a9, a8, 0);
            v23 = v56;
          }
          if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v35) )
          {
            v26 = RedirCopyBits;
          }
          else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
          {
            v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v25 + 2832);
          }
          else
          {
            v26 = EngCopyBits;
          }
          if ( !v23 || !ERECTL::bEmpty((ERECTL *)v57) )
          {
            v35 = 0LL;
            ((void (__fastcall *)(__int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, __int64 *))v26)(
              -(__int64)(v54 != 0) & (v54 + 24),
              (v40 + 24) & -(__int64)(v40 != 0),
              v23,
              0LL,
              a8,
              &v35);
          }
        }
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v37);
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v53);
    }
  }
  if ( a9 )
  {
    v35 = (__int64)a9;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
  }
  v27 = v44;
  if ( v44 )
  {
    v28 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v28, v27);
  }
  if ( v22 )
    ObfDereferenceObject(v22);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v55);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    (__int64)v43[0]);
  SURFMEM::~SURFMEM((SURFMEM *)&v40);
  return v19 >= 0;
}
