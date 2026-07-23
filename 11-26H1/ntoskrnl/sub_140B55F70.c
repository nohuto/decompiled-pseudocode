/*
 * XREFs of sub_140B55F70 @ 0x140B55F70
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B55F70(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  struct _KTHREAD *v8; // rsi
  _DWORD *Pool2; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned int i; // ecx
  unsigned int v15; // eax

  v5 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v6 = *(_DWORD *)(a2 + 16) + 52;
  if ( v6 < *(_DWORD *)(a2 + 16) + 48 || v6 + v5 < v6 )
    return (unsigned int)-1073741675;
  v7 = 0;
  if ( a3 < v6 + v5 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (struct _KTHREAD *)__rdtsc();
    ExpPlatformBinaryLock.WaitBlock[0].Thread = v8;
  }
  if ( a4 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
    if ( Pool2 + 1 >= Pool2 )
    {
      if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
        return (unsigned int)-1073741789;
      *Pool2 = 4;
      Pool2[1] = 0;
      ++*(_DWORD *)a4;
      v11 = *(_QWORD *)(a4 + 8);
      if ( v11 )
      {
        v13 = *(_QWORD *)(a4 + 8);
        for ( i = 0; i < *(_DWORD *)a4; ++i )
        {
          v15 = *(_DWORD *)v13 + 4;
          if ( *(_DWORD *)v13 >= 0xFFFFFFFC || v13 + v15 < v13 )
            return (unsigned int)-1073741675;
          v13 += v15;
        }
        if ( v13 + 4 >= v13 )
        {
          if ( v13 + 12 > v11 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *(_DWORD *)v13 = 8;
          *(_QWORD *)(v13 + 4) = v8;
LABEL_21:
          ++*(_DWORD *)a4;
          return v7;
        }
      }
      else
      {
        v12 = *(_DWORD *)(a4 + 4);
        if ( v12 + 12 >= v12 )
        {
          *(_DWORD *)(a4 + 4) = v12 + 12;
          goto LABEL_21;
        }
        *(_DWORD *)(a4 + 4) = -1;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741811;
}
