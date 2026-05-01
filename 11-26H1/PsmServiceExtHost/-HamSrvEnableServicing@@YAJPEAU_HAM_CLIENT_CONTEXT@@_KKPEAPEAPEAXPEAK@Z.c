/*
 * XREFs of ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z @ 0x180067390
 * Callers:
 *     HamRpcSrvServicingEnableServicing @ 0x180067370 (HamRpcSrvServicingEnableServicing.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180015080 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x180042FF4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x180066340 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvEnableServicing(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        int a3,
        void ***a4,
        unsigned int *a5)
{
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // ebx
  unsigned int v11; // edi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v12; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v13; // rdi
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v26[8]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v27; // [rsp+180h] [rbp+80h]

  v22 = (unsigned __int64)a4;
  memset_0(v25, 0, 0x88uLL);
  v8 = dword_1800E12B0;
  if ( dword_1800E12B0 )
  {
    v9 = 1;
    memset_0(v26, 0, 0x82uLL);
  }
  else
  {
    v9 = 0;
  }
  if ( v8 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE176);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v10 = a3 & 1;
  if ( v10 == a3 )
  {
    v12 = HampClientPkgFindByPackageHandle(a1, a2);
    v13 = v12;
    if ( v12 )
    {
      if ( v9 )
      {
        v14 = *((_QWORD *)v12 + 7);
        v26[0] = *(_OWORD *)(v14 + 96);
        v26[1] = *(_OWORD *)(v14 + 112);
        v26[2] = *(_OWORD *)(v14 + 128);
        v26[3] = *(_OWORD *)(v14 + 144);
        v26[4] = *(_OWORD *)(v14 + 160);
        v26[5] = *(_OWORD *)(v14 + 176);
        v26[6] = *(_OWORD *)(v14 + 192);
        v26[7] = *(_OWORD *)(v14 + 208);
        v27 = *(_WORD *)(v14 + 224);
      }
      v15 = HampClientPkgEnableServicing(
              v13,
              a1,
              (void ***)(v22 & -(__int64)(v10 != 0)),
              (unsigned int *)((unsigned __int64)a5 & -(__int64)(v10 != 0)));
      CemRcObjectDereference(v13);
      v11 = 0;
      if ( v15 < 0 )
        v11 = v15;
    }
    else
    {
      v11 = -1073741275;
    }
  }
  else
  {
    v11 = -1073741583;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( v9 && (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v21 = *a5;
    v23 = (const wchar_t *)v26;
    v20 = a3;
    v24 = a2;
    LODWORD(v22) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      (__int64)&unk_1800CDEAD,
      v17,
      v18,
      (__int64)&v22,
      (__int64)&v24,
      &v23,
      (__int64)&v21,
      (__int64)&v20);
  }
  return v11;
}
