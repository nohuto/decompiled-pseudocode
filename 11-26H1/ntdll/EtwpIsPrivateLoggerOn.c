/*
 * XREFs of EtwpIsPrivateLoggerOn @ 0x1800FFAF8
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 */

bool __fastcall EtwpIsPrivateLoggerOn(int a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  bool result; // al
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = EtwpLoggerArray;
  v2 = a1 & 0xFFFF7FFF;
  v6 = a1 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 0;
  if ( v2 >= 0x40 )
  {
    if ( (unsigned int)EtwpDemuxUmTraceHandle(a1, &v6) )
      return 0;
    v2 = v6;
    v1 = EtwpLoggerArray;
  }
  v3 = 16LL * v2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + v1 + 8));
  v4 = *(_QWORD *)(v3 + EtwpLoggerArray);
  if ( (v4 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v3 + EtwpLoggerArray + 8));
    return 0;
  }
  result = *(_DWORD *)(v4 + 312) != 0;
  _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v4 + 20) + EtwpLoggerArray + 8));
  return result;
}
