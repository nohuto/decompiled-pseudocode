/*
 * XREFs of EtwpGetUmProcessImageInfo @ 0x18005E274
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180041FE0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800E89C0 (EtwpTrackRegBinaryInfo.c)
 * Callees:
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetUmProcessImageInfo(unsigned __int16 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // r8
  ULONG v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = EtwpLoggerArray;
  v5 = 0;
  v7 = a1 & 0x7FFF;
  v12 = v7;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v7 >= 0x40 )
  {
    result = EtwpDemuxUmTraceHandle(a1, &v12);
    if ( (_DWORD)result )
      return result;
    v7 = v12;
    v4 = EtwpLoggerArray;
  }
  v8 = 16LL * v7;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + v4 + 8));
  v9 = *(_QWORD *)(v8 + EtwpLoggerArray);
  if ( (v9 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v8 + EtwpLoggerArray + 8));
    return 4201LL;
  }
  v11 = *(_DWORD *)(v9 + 308);
  if ( (v11 & 0x800) != 0 && (v11 & 0x10000) == 0 )
    v5 = EtwpProviderArrivalCallback(*(_QWORD *)(v8 + EtwpLoggerArray), a2, v4, a4);
  result = v5;
  _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v9 + 20) + EtwpLoggerArray + 8));
  return result;
}
