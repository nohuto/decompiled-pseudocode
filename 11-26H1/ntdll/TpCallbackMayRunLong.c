/*
 * XREFs of TpCallbackMayRunLong @ 0x180054AA0
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 * Callees:
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180054F6C (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpCallbackMayRunLong(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  signed __int32 v5; // edi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // ecx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v12; // [rsp+38h] [rbp+10h]

  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1);
LABEL_20:
    v10 = -1073741811;
    goto LABEL_16;
  }
  v3 = *(_QWORD *)(a1 + 184);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 144);
  else
    v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    goto LABEL_20;
  if ( TppPoolpSerializedPool != v4 )
  {
    v5 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 420));
    _m_prefetchw((const void *)(v4 + 8));
    v6 = *(_QWORD *)(v4 + 8);
    v12 = v6;
    do
    {
      LODWORD(v12) = ((__int16)v6 + 1) ^ (v6 ^ ((__int16)v6 + 1)) & 0xFFFF0000;
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v12, v6);
      v12 = v6;
    }
    while ( v7 != v6 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v8 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 1;
    if ( v8 )
      TppFastAlpcAdjustConcurrencyCount();
    result = 0LL;
    if ( !v5 )
    {
      v11 = 1;
      return NtSetInformationWorkerFactory(*(_QWORD *)(v4 + 56), 9LL, &v11, 4LL);
    }
    return result;
  }
  v10 = -1073741637;
LABEL_16:
  result = 0LL;
  if ( v10 != -1073741637 )
    return v10;
  return result;
}
