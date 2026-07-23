/*
 * XREFs of sub_140A24318 @ 0x140A24318
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A24318(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // eax
  unsigned int v7; // r10d
  _DWORD *v8; // rdx
  unsigned int i; // ecx
  unsigned int v10; // eax
  _DWORD *Pool2; // rax

  v2 = 0;
  if ( a2 )
  {
    v4 = *((_QWORD *)a2 + 1);
    if ( v4 )
    {
      v7 = *a2;
      v8 = (_DWORD *)*((_QWORD *)a2 + 1);
      for ( i = 0; i < v7; ++i )
      {
        v10 = *v8 + 4;
        if ( *v8 >= 0xFFFFFFFC || (_DWORD *)((char *)v8 + v10) < v8 )
          return (unsigned int)-1073741675;
        v8 = (_DWORD *)((char *)v8 + v10);
      }
      if ( v8 + 1 < v8 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v8 + 2) > v4 + (unsigned __int64)(unsigned int)a2[1] )
        return (unsigned int)-1073741789;
      *v8 = 4;
      v8[1] = -2147467263;
      ++*a2;
    }
    else
    {
      v5 = a2[1];
      if ( v5 + 8 < v5 )
      {
        a2[1] = -1;
        return (unsigned int)-1073741675;
      }
      a2[1] = v5 + 8;
      ++*a2;
    }
    if ( !a2[1] )
      return (unsigned int)-1073741762;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *((_QWORD *)a2 + 1) = Pool2;
    *a2 = 0;
    if ( Pool2 + 1 >= Pool2 )
    {
      if ( Pool2 + 2 <= (_DWORD *)((char *)Pool2 + (unsigned int)a2[1]) )
      {
        *Pool2 = 4;
        Pool2[1] = -2147467263;
        ++*a2;
        return v2;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741811;
}
