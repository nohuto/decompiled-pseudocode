/*
 * XREFs of RtlpHpSegSuballocatorCommit @ 0x1404B2710
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x140350650 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegSuballocatorCommit(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r11
  char v10; // cl
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 result; // rax
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a1;
  v14 = 0;
  v6 = a2 & v4;
  if ( (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((a2 & v4) + 0x10) ^ a2 & v4) != a1
    || (v10 = *(_BYTE *)(a1 + 8),
        v11 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v10),
        v12 = v11 - 32LL * *(unsigned __int8 *)(v11 + 26),
        (*(_BYTE *)(v12 + 24) & 3) != 3)
    || v6 + ((unsigned int)((v12 - v6) >> 5) << v10) != a2 && (*(_BYTE *)(v12 + 24) & 0x1Cu) < 8 )
  {
    v12 = 0LL;
  }
  result = RtlpHpSegPageRangeCommit(
             a1,
             v12,
             ((_DWORD)a2
            - ((unsigned int)((v12 - (v12 & v4)) >> 5) << *(_BYTE *)(a1 + 8))
            - ((unsigned int)v12 & (unsigned int)v4)) >> 12,
             a3 >> 12,
             0,
             &v14);
  if ( (int)result >= 0 )
  {
    if ( a4 )
      *a4 = v14 << 12;
  }
  return result;
}
