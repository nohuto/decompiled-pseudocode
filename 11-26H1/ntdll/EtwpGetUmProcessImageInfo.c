/*
 * XREFs of EtwpGetUmProcessImageInfo @ 0x180012B44
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180057A60 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800E97B0 (EtwpTrackRegBinaryInfo.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x180011110 (EtwpDemuxUmTraceHandle.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpGetUmProcessImageInfo(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = EtwpLoggerArray;
  v3 = 0;
  v5 = a1 & 0x7FFF;
  v10 = v5;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v5 >= 0x40 )
  {
    result = EtwpDemuxUmTraceHandle(a1, &v10);
    if ( (_DWORD)result )
      return result;
    v5 = v10;
    v2 = EtwpLoggerArray;
  }
  v6 = 16LL * v5;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + v2 + 8));
  v7 = *(_QWORD *)(v6 + EtwpLoggerArray);
  if ( (v7 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
    return 4201LL;
  }
  v9 = *(_DWORD *)(v7 + 308);
  if ( (v9 & 0x800) != 0 && (v9 & 0x10000) == 0 )
    v3 = EtwpProviderArrivalCallback(*(_QWORD *)(v6 + EtwpLoggerArray), a2);
  result = v3;
  _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v7 + 20) + EtwpLoggerArray + 8));
  return result;
}
