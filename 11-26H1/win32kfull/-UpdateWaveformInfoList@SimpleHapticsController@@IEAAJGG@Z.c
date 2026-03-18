/*
 * XREFs of ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x140301508
 * Callers:
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x140300568 (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x1400045B4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SimpleHapticsController::UpdateWaveformInfoList(
        SimpleHapticsController *this,
        __int16 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rax
  __int64 v5; // r10
  const char *v7; // [rsp+40h] [rbp-18h] BYREF
  __int16 v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+78h] [rbp+20h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 10);
    if ( *(_WORD *)(v5 + 8 * i) == a2 )
    {
      *(_WORD *)(v5 + 8 * i + 2) = a3;
      return 0LL;
    }
  }
  if ( (unsigned int)dword_1403AAAA0 > 4 )
  {
    v9 = a2;
    v7 = "SimpleHapticsController::UpdateWaveformInfoList Ordinal not found";
    v8 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      (__int64)this,
      (__int64)&unk_14037A067,
      a3,
      a4,
      (void **)&v7,
      (__int64)&v9,
      (__int64)&v8);
  }
  return 3221226021LL;
}
