/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180019D3C
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x18001AD90 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CemRcTableFind @ 0x1800150B0 (CemRcTableFind.c)
 *     ?HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180019CE0 (-HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18001A1E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18001B970 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x18001B9E0 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026690 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180036A4C (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z @ 0x18003C024 (-HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800412A0 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180043B9C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007E4BC (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  int v5; // esi
  __int64 v6; // r15
  unsigned __int16 **v8; // r14
  unsigned int v9; // edi
  int v10; // r13d
  int v11; // r12d
  __int64 v12; // rax
  struct _HAM_APPLICATION *i; // rax
  struct _HAM_APPLICATION *v14; // r15
  int AumidFromKey; // ebx
  unsigned __int16 *v16; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned __int16 *Heap; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  int v27; // r13d
  void **v28; // r12
  __int64 v29; // r13
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 **v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  char *v39; // [rsp+78h] [rbp-88h] BYREF
  struct _HAM_PACKAGE *v40; // [rsp+80h] [rbp-80h]
  unsigned __int16 ***v41; // [rsp+88h] [rbp-78h]
  unsigned int *v42; // [rsp+90h] [rbp-70h]
  _BYTE v43[144]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v44[136]; // [rsp+130h] [rbp+30h] BYREF

  v5 = a3;
  v32 = a3;
  v6 = a2;
  v37 = a2;
  v42 = a5;
  v41 = a4;
  memset_0(v43, 0, 0x88uLL);
  v31 = 0;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE601);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v43);
  v8 = 0LL;
  v9 = 0;
  v35 = 0LL;
  v33 = 0;
  v10 = 0;
  v11 = 0;
  if ( (v5 & 3) != v5 )
  {
    AumidFromKey = -1073741583;
    goto LABEL_14;
  }
  v38 = v6;
  v12 = CemRcTableFind(
          (__int64)a1 + 72,
          (__int64)&v38,
          (__int64 (__fastcall *)(__int64, __int64))HampClientPkgCompareByHandle);
  v36 = v12;
  if ( !v12 )
  {
    AumidFromKey = -1073741275;
    goto LABEL_14;
  }
  v40 = *(struct _HAM_PACKAGE **)(v12 + 56);
  for ( i = HampPkgGetFirstApplication(v40); ; i = HampPkgGetNextApplication(v40, v14) )
  {
    v14 = i;
    if ( !i )
    {
      *v41 = v8;
      v8 = 0LL;
      AumidFromKey = 0;
      *v42 = v9;
LABEL_7:
      v16 = 0LL;
      goto LABEL_8;
    }
    if ( !HampPkgIsPpleApplication(i) )
    {
      if ( (v5 & 2) == 0
        || (HampAppAcquireLockShared(v14),
            v11 = (*((_DWORD *)v14 + 154) >> 25) & 7,
            v27 = *((_DWORD *)v14 + 155) >> 5,
            HampAppReleaseLockShared(v14),
            (v10 = v27 & 7) == 0)
        || !v11 )
      {
        if ( (v5 & 1) == 0 || HampAppGetHasStartedWindow(v14) )
          break;
      }
    }
LABEL_23:
    ;
  }
  v31 = 130;
  AumidFromKey = PsmGetAumidFromKey((char *)v14 + 96, &v31, v44);
  if ( AumidFromKey < 0 )
    goto LABEL_7;
  Heap = (unsigned __int16 *)HampAllocateHeap(2LL * v31);
  v16 = Heap;
  if ( Heap )
  {
    StringCchCopyW(Heap, v31, v44);
    v30 = v9 + 1;
    v22 = RmpArrayGrow<unsigned short *>(&v35, &v33, v9 + 1);
    v8 = v35;
    AumidFromKey = v22;
    if ( v22 < 0 )
      goto LABEL_8;
    v26 = v9;
    v9 = v30;
    v35[v26] = v16;
    if ( (unsigned int)dword_1800E12B0 > 5 )
    {
      v30 = v11;
      v39 = (char *)v14 + 96;
      v34 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v23,
        (unsigned int)&unk_1800CE838,
        v24,
        v25,
        (__int64)&v39,
        (__int64)&v34,
        (__int64)&v30);
    }
    LOBYTE(v5) = v32;
    goto LABEL_23;
  }
  AumidFromKey = -1073741801;
LABEL_8:
  if ( v8 )
  {
    if ( v9 )
    {
      v28 = (void **)v8;
      v29 = v9;
      do
      {
        HampFreeHeap(*v28++);
        --v29;
      }
      while ( v29 );
    }
    HampFreeHeap(v8);
  }
  CemRcObjectDereference(v36);
  if ( v14 )
    CemRcObjectDereference(v14);
  if ( v16 )
    HampFreeHeap(v16);
  v6 = v37;
  v5 = v32;
LABEL_14:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v34 = v9;
    v30 = v5;
    v36 = v6;
    v33 = AumidFromKey;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (unsigned int)&unk_1800CEC9A,
      v18,
      v19,
      (__int64)&v33,
      (__int64)&v36,
      (__int64)&v30,
      (__int64)&v34);
  }
  return (unsigned int)AumidFromKey;
}
