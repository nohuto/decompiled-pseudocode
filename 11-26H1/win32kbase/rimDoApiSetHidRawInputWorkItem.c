/*
 * XREFs of rimDoApiSetHidRawInputWorkItem @ 0x140079AE4
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     IsProcessHidRawInputSupported @ 0x140079B40 (IsProcessHidRawInputSupported.c)
 *     ProcessHidRawInput @ 0x140079B78 (ProcessHidRawInput.c)
 */

__int64 __fastcall rimDoApiSetHidRawInputWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned int v3; // edi
  __int64 v4; // rsi

  v1 = (*(_QWORD *)(a1 + 56) + 72LL) & -(__int64)(*(_QWORD *)(a1 + 56) != 0LL);
  result = *(unsigned int *)(v1 + 0x50);
  if ( (result & 4) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 100);
    v4 = *(_QWORD *)(a1 + 104);
    result = IsProcessHidRawInputSupported();
    if ( (int)result >= 0 )
      return ProcessHidRawInput(v1, v4, v3);
  }
  return result;
}
