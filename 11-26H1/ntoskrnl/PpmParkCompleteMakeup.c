/*
 * XREFs of PpmParkCompleteMakeup @ 0x14052E080
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1404A6C10 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

unsigned __int64 PpmParkCompleteMakeup()
{
  unsigned __int64 result; // rax
  unsigned __int16 i; // bx
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int128 v4; // kr00_16
  size_t v5; // r8
  unsigned __int8 j; // bp
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // r8d
  const void *v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; i < PopModernStandbyStateNotify.SystemCallNumber; result = i )
  {
    v2 = *(__int64 *)((char *)&PopModernStandbyStateNotify.116 + 4);
    v3 = 1264LL * i;
    v4 = *(_OWORD *)(v3 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1080);
    v5 = (unsigned int)(8 * *(_DWORD *)(v3 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1128));
    *(_QWORD *)(v3 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1112) = *(_QWORD *)(v3 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1104);
    memmove(*((void **)&v4 + 1), (const void *)v4, v5);
    if ( *(_BYTE *)(v3 + v2 + 1153) )
    {
      for ( j = 0; j < *(_BYTE *)(v3 + v2 + 10); ++j )
      {
        v7 = *(_QWORD *)(v3 + v2 + 1256);
        v8 = 624LL * j;
        v9 = *(_DWORD *)(v8 + v7 + 608);
        v10 = *(const void **)(v8 + v7 + 560);
        *(_QWORD *)(v8 + v7 + 592) = *(_QWORD *)(v8 + v7 + 584);
        memmove(*(void **)(v8 + v7 + 568), v10, (unsigned int)(8 * v9));
      }
    }
    ++i;
  }
  return result;
}
