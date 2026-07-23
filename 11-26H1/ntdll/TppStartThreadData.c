/*
 * XREFs of TppStartThreadData @ 0x1800BE040
 * Callers:
 *     RtlpTpWaitCallback @ 0x1800BDBE0 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x1800BDDD0 (TppJobpExecuteCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall TppStartThreadData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _QWORD *ThreadPoolData; // r10
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  result = NtCurrentTeb();
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v8 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    *((_DWORD *)ThreadPoolData + 3) = v8;
    v9 = &ThreadPoolData[4 * v8];
    v9[6] = a4;
    v9[4] = a2;
    v9[5] = a3;
    result = (struct _TEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    v9[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    *a1 = v9 + 4;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
