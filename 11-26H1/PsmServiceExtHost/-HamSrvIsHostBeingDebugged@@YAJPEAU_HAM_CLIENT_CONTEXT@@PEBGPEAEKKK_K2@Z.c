/*
 * XREFs of ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180055C28
 * Callers:
 *     ?HampInProcIsHostBeingDebugged@@YAJPEAXPEBGPEAEKKK_K2@Z @ 0x1800744B0 (-HampInProcIsHostBeingDebugged@@YAJPEAXPEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000174C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180027964 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002936C (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180055E60 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvIsHostBeingDebugged(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _HAM_CLIENT_CONTEXT *a7,
        bool *a8)
{
  char v11; // di
  int v12; // ebx
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rsi
  int IsDebugEnabled; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-ACh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_CLIENT_CONTEXT *v23; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v24; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[560]; // [rsp+100h] [rbp+0h] BYREF

  v23 = a1;
  memset_0(v25, 0, 0x88uLL);
  memset_0(v26, 0, 0x228uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CDDF0);
  v11 = 0;
  v22 = 0LL;
  v21 = 0;
  v12 = HampUtilValidateAndCapturePsmInformation(
          (struct _RM_PSM_HOST_INFO *)v26,
          a2,
          a3,
          a4,
          a5,
          a6,
          (unsigned __int64)a7);
  if ( v12 >= 0 )
  {
    HostWithFullInfo = RmHamFindHostWithFullInfo(
                         (*((_QWORD *)v23 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)v23 + 164) - 16,
                         (__int64)v26,
                         2,
                         &v22);
    v15 = v22;
    v12 = HostWithFullInfo;
    if ( HostWithFullInfo >= 0 )
    {
      IsDebugEnabled = HampHostQueryIsDebugEnabled(v22, &v21);
      v11 = v21;
      v12 = IsDebugEnabled;
      if ( IsDebugEnabled >= 0 )
      {
        v12 = 0;
        *a8 = v21 != 0;
      }
    }
    if ( v15 )
      RmHamHostDereference(v15);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v20[0] = v11;
    v23 = a7;
    v21 = a6;
    v24 = a2;
    LODWORD(v22) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v17,
      (__int64)&unk_1800CED1D,
      v18,
      v19,
      (__int64)&v22,
      &v24,
      (__int64)&v21,
      (__int64)&v23,
      (__int64)v20);
  }
  return (unsigned int)v12;
}
