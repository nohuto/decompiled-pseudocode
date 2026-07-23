/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x14063C3E4
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x14063AFB4 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v5; // rdx
  char v6; // cl
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r9
  _QWORD *v10; // r8
  __int64 v11; // rdx
  _QWORD *v12; // rbx

  v2 = *(_QWORD *)a1 & a2;
  if ( (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(v2 + 0x10) ^ v2) == a1
    && (v6 = *(_BYTE *)(a1 + 8),
        v7 = v2 + 32 * ((unsigned __int64)(unsigned int)(a2 - v2) >> v6),
        v5 = v7 - 32LL * *(unsigned __int8 *)(v7 + 26),
        (*(_BYTE *)(v5 + 24) & 3) == 3) )
  {
    if ( v2 + ((unsigned int)((__int64)(v5 - v2) >> 5) << v6) != a2 && (*(_BYTE *)(v5 + 24) & 0x1Cu) < 8 )
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  result = *(_BYTE *)(v5 + 24) & 0x1C;
  if ( (unsigned int)result < 8 )
  {
    *(_DWORD *)(v5 + 8) |= 1u;
  }
  else if ( (_DWORD)result == 8 )
  {
    MEMORY[0] |= 0x4000u;
  }
  else if ( (_DWORD)result == 12 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = (_QWORD *)(a2 - 16);
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 && (a2 & 0xFFF) == 0 )
      v10 = (_QWORD *)(a2 - 32);
    result = *(_QWORD *)&PspTlsContext.Timer.Processor >> 16;
    v11 = 16 * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(v10) ^ WORD1(*v10)) - 16;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
    {
      result = (__int64)(v10 + 4);
      if ( ((unsigned __int64)(v10 + 4) & 0xFFF) == 0 )
        v11 = 16 * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(v10) ^ WORD1(*v10)) - 32;
    }
    *(_WORD *)(v11 + a2 - 2) |= 0x4000u;
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 144);
    guard_dispatch_icall_no_overrides(*v12, a2);
    return guard_dispatch_icall_no_overrides(*v12, a2);
  }
  return result;
}
