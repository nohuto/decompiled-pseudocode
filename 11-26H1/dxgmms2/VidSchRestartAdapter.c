/*
 * XREFs of VidSchRestartAdapter @ 0x1400C3950
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x140002468 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_140002468.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     VidSchResetFlipQueueTimeout @ 0x14009BCF8 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1400C0650 (VidSchResetGPUTimeout.c)
 *     VidSchiAcceptDriverCallback @ 0x1400C4560 (VidSchiAcceptDriverCallback.c)
 */

__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  __int64 v10; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int16 *v11; // [rsp+70h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8h] BYREF
  __int16 v13; // [rsp+90h] [rbp+10h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  void *v15; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
  {
    v4 = *(_QWORD *)(a1 + 3264);
    v15 = (void *)(v4 + 2821);
    v9 = *(_QWORD *)(v4 + 2808);
    v14 = *(_DWORD *)(a1 + 3280);
    v10 = v4;
    v5 = *(_QWORD *)(a1 + 16);
    v11 = *(unsigned __int16 **)(v5 + 1968);
    v12 = *(_QWORD *)(v5 + 412);
    v13 = 2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      v5,
      (__int64)&unk_14007E315,
      v2,
      v3,
      (__int64)&v13,
      (__int64)&v12,
      &v11,
      (__int64)&v10,
      (__int64)&v14,
      (__int64)&v9,
      &v15);
  }
  *(_BYTE *)(a1 + 3284) &= ~4u;
  v6 = 0LL;
  *(_BYTE *)(a1 + 3285) = 0;
  *(_QWORD *)(a1 + 3264) = 0LL;
  *(_DWORD *)(a1 + 3260) = 0;
  *(_DWORD *)(a1 + 3300) = 0;
  *(_QWORD *)(a1 + 488) = 0LL;
  for ( *(_QWORD *)(a1 + 496) = 0LL; (unsigned int)v6 < *(_DWORD *)(a1 + 88); *(_QWORD *)(*(_QWORD *)v7 + 40LL) = 0LL )
  {
    v7 = *(_QWORD *)(a1 + 696);
    if ( (unsigned int)v6 < *(_DWORD *)(a1 + 768) )
      v7 += 8 * v6;
    v6 = (unsigned int)(v6 + 1);
  }
  *(_QWORD *)(a1 + 3272) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(a1);
  VidSchiAcceptDriverCallback(a1);
  return 0LL;
}
