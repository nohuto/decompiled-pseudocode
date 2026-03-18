/*
 * XREFs of RecalculateQueueInfo @ 0x1400B9570
 * Callers:
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

unsigned __int64 __fastcall RecalculateQueueInfo(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *i; // rcx
  volatile signed __int32 *j; // rbx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  unsigned int v11; // ecx
  __int64 v12; // rax

  result = (unsigned __int64)PtiCurrent(a1, a2);
  v3 = (volatile signed __int32 *)(*(_QWORD *)(result + 488) + 176LL);
  for ( i = *(volatile signed __int32 **)v3; i != v3; i = *(volatile signed __int32 **)i )
  {
    *(_DWORD *)(*((_QWORD *)i - 38) + 472LL) = 0;
    *(_DWORD *)(*((_QWORD *)i - 38) + 476LL) = 0;
    *(_DWORD *)(*((_QWORD *)i - 38) + 436LL) &= ~0x2000000u;
    result = *((_QWORD *)i - 38);
    *(_DWORD *)(result + 480) = 0;
  }
  for ( j = *(volatile signed __int32 **)v3; j != v3; j = *(volatile signed __int32 **)j )
  {
    result = (unsigned int)_InterlockedCompareExchange(j - 62, 0, 0);
    if ( (result & 1) == 0 )
    {
      v8 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
      v9 = *((_QWORD *)j - 39);
      v10 = *(_QWORD *)v9 == v8;
      v11 = 0x2000;
      if ( !v10 )
        v11 = *(_DWORD *)(v9 + 864);
      v7 = *(_DWORD *)(v9 + 868);
      v12 = *((_QWORD *)j - 38);
      if ( *(_DWORD *)(v12 + 472) < v11 )
      {
        *(_DWORD *)(v12 + 472) = v11;
        v6 = *((_QWORD *)j - 38);
        if ( *(_DWORD *)(v6 + 476) )
          v7 = 0;
        *(_DWORD *)(v6 + 476) = v7;
      }
      else if ( *(_DWORD *)(v12 + 476) != v7 )
      {
        *(_DWORD *)(v12 + 476) = 0;
      }
      result = *((unsigned int *)j + 148);
      if ( (result & 0x40000) != 0 )
      {
        result = *((_QWORD *)j - 38);
        *(_DWORD *)(result + 436) |= 0x2000000u;
      }
    }
  }
  return result;
}
