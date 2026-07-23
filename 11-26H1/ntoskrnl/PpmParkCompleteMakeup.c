/*
 * XREFs of PpmParkCompleteMakeup @ 0x1405305A0
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1404A02A0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

unsigned __int64 PpmParkCompleteMakeup()
{
  unsigned __int64 result; // rax
  unsigned __int16 i; // bx
  __int64 v2; // rsi
  __int64 v3; // rdi
  const void *v4; // rdx
  void *v5; // rcx
  size_t v6; // r8
  unsigned __int8 j; // bp
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // r8d
  const void *v11; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v2 = PpmParkNodes;
    v3 = 1264LL * i;
    v4 = *(const void **)(v3 + PpmParkNodes + 1080);
    v5 = *(void **)(v3 + PpmParkNodes + 1088);
    v6 = (unsigned int)(8 * *(_DWORD *)(v3 + PpmParkNodes + 1128));
    *(_QWORD *)(v3 + PpmParkNodes + 1112) = *(_QWORD *)(v3 + PpmParkNodes + 1104);
    memmove(v5, v4, v6);
    if ( *(_BYTE *)(v3 + v2 + 1153) )
    {
      for ( j = 0; j < *(_BYTE *)(v3 + v2 + 10); ++j )
      {
        v8 = *(_QWORD *)(v3 + v2 + 1256);
        v9 = 624LL * j;
        v10 = *(_DWORD *)(v9 + v8 + 608);
        v11 = *(const void **)(v9 + v8 + 560);
        *(_QWORD *)(v9 + v8 + 592) = *(_QWORD *)(v9 + v8 + 584);
        memmove(*(void **)(v9 + v8 + 568), v11, (unsigned int)(8 * v10));
      }
    }
    ++i;
  }
  return result;
}
