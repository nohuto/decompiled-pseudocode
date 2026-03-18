/*
 * XREFs of RecalculateQueueInfo @ 0x140167210
 * Callers:
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

unsigned __int64 RecalculateQueueInfo()
{
  unsigned __int64 result; // rax
  __int64 *v1; // rdi
  __int64 i; // rcx
  __int64 j; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax

  result = (unsigned __int64)PtiCurrent();
  v1 = (__int64 *)(*(_QWORD *)(result + 496) + 176LL);
  for ( i = *v1; (__int64 *)i != v1; i = *(_QWORD *)i )
  {
    *(_DWORD *)(*(_QWORD *)(i - 304) + 448LL) = 0;
    *(_DWORD *)(*(_QWORD *)(i - 304) + 452LL) = 0;
    *(_DWORD *)(*(_QWORD *)(i - 304) + 412LL) &= ~0x2000000u;
    result = *(_QWORD *)(i - 304);
    *(_DWORD *)(result + 456) = 0;
  }
  for ( j = *v1; (__int64 *)j != v1; j = *(_QWORD *)j )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(j - 248), 0, 0);
    if ( (result & 1) == 0 )
    {
      v4 = *(_QWORD *)(W32GetUserGdiSessionState(i) + 40);
      v5 = *(_QWORD *)(j - 312);
      v6 = *(_QWORD *)v5 == v4;
      i = 0x2000LL;
      if ( !v6 )
        i = *(unsigned int *)(v5 + 864);
      v7 = *(_DWORD *)(v5 + 868);
      v8 = *(_QWORD *)(j - 304);
      if ( *(_DWORD *)(v8 + 448) >= (unsigned int)i )
      {
        if ( *(_DWORD *)(v8 + 452) != v7 )
          *(_DWORD *)(v8 + 452) = 0;
      }
      else
      {
        *(_DWORD *)(v8 + 448) = i;
        v9 = *(_QWORD *)(j - 304);
        if ( *(_DWORD *)(v9 + 452) )
          v7 = 0;
        *(_DWORD *)(v9 + 452) = v7;
      }
      result = *(unsigned int *)(j + 584);
      if ( (result & 0x40000) != 0 )
      {
        result = *(_QWORD *)(j - 304);
        *(_DWORD *)(result + 412) |= 0x2000000u;
      }
    }
  }
  return result;
}
