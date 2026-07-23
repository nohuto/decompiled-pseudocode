/*
 * XREFs of AuthzBasepResetOperands @ 0x140462C30
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepResetOperands(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  __int64 *v5; // rsi

  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( *a2 )
  {
    _mm_lfence();
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 16) + 24LL), 0);
    result = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(result + 24) = 0LL;
    *a2 = 0;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = (__int64 *)(a1 + 56);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a2[1] )
  {
    _mm_lfence();
    ExFreePoolWithTag(*(PVOID *)(*v5 + 24), 0);
    result = *v5;
    *(_QWORD *)(*v5 + 24) = 0LL;
    a2[1] = 0;
  }
  *v5 = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
