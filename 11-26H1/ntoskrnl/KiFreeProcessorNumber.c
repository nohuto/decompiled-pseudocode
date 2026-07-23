/*
 * XREFs of KiFreeProcessorNumber @ 0x1405F2384
 * Callers:
 *     KiFreeProcessorStateInitializationParameters @ 0x1405EDD74 (KiFreeProcessorStateInitializationParameters.c)
 * Callees:
 *     KiFindSubNodeForProcessorNumber @ 0x1405F22D4 (KiFindSubNodeForProcessorNumber.c)
 *     KiUncommitGroupSubNodeAssignments @ 0x1405F2930 (KiUncommitGroupSubNodeAssignments.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiFreeProcessorNumber(unsigned __int16 *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0;
  P = 0LL;
  KiFindSubNodeForProcessorNumber((__int64)a1, &v9, &v10, &P);
  v3 = v10;
  v4 = *(_QWORD *)(v10 + 16) & ~(1LL << *((_BYTE *)a1 + 2));
  *(_QWORD *)(v10 + 16) = v4;
  if ( !v4 )
  {
    v5 = KeNodeBlock[*(unsigned __int16 *)(v3 + 2)];
    *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * (unsigned int)--*(_DWORD *)(v5 + 44)) = 0LL;
    *(_QWORD *)(KiSubNodes + 8LL * v9) = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  result = *((unsigned __int8 *)a1 + 2);
  v7 = 4LL * *a1;
  v8 = KiGroupBlock[v7] & ~(1LL << result);
  KiGroupBlock[v7] = v8;
  if ( !v8 )
    return KiUncommitGroupSubNodeAssignments(*a1, v7 * 8, v2, v3);
  return result;
}
