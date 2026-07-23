/*
 * XREFs of PspCriticalProcessDeathBufferStringTruncateCopy @ 0x140800600
 * Callers:
 *     PspCriticalProcessDeathUserModulesCollect @ 0x14080091C (PspCriticalProcessDeathUserModulesCollect.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall PspCriticalProcessDeathBufferStringTruncateCopy(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r15
  __int64 v4; // rsi
  unsigned __int16 *v5; // r14
  unsigned __int16 v6; // bx
  unsigned __int64 v7; // rsi
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax
  __int64 result; // rax

  v3 = (_DWORD *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 12);
  v5 = (unsigned __int16 *)(a2 + 2);
  v6 = *(_WORD *)(a2 + 2);
  if ( v6 >= (unsigned __int16)(-22272 - v4) )
    v6 = -22272 - v4;
  v7 = *(_QWORD *)(a1 + 32) + v4;
  RtlCopyFromUser((void *)v7, *(void **)(a2 + 8), v6);
  v8 = *v5;
  if ( *v5 >= v6 )
    v8 = v6;
  *v5 = v8;
  v9 = *(_WORD *)a2;
  if ( *(_WORD *)a2 >= v6 )
    v9 = v6;
  *(_WORD *)a2 = v9;
  result = v7 & -(__int64)(v6 != 0);
  *(_QWORD *)(a2 + 8) = result;
  *v3 += v6;
  return result;
}
