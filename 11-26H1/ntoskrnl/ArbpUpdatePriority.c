/*
 * XREFs of ArbpUpdatePriority @ 0x14078CAB0
 * Callers:
 *     ArbGetNextAllocationRange @ 0x14078B3A0 (ArbGetNextAllocationRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ArbpUpdatePriority(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  char v5; // r9
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rbx
  bool v12; // cf
  unsigned __int64 v13; // rcx
  int v14; // edx

  v4 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v4 == 2147483646 || (_DWORD)v4 == 2147483645 )
    goto LABEL_25;
  v5 = *(_BYTE *)a2[5] & 1;
  if ( (_DWORD)v4 )
  {
    result = *((unsigned int *)a2 + 9);
    if ( (result & 2) == 0 )
    {
      if ( (int)v4 <= 0 )
        v4 = (unsigned int)-(int)v4;
      v7 = *(_QWORD **)(a1 + 64);
      v6 = &v7[2 * v4];
      goto LABEL_9;
    }
LABEL_25:
    *((_DWORD *)a2 + 8) = 0x7FFFFFFF;
    return result;
  }
  v6 = *(_QWORD **)(a1 + 64);
  v7 = v6;
LABEL_9:
  v9 = (unsigned __int64)&v7[2 * *(unsigned __int16 *)(a1 + 56)];
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= v9 )
    {
      result = 2147483646 - (unsigned int)(v5 != 0);
      *((_DWORD *)a2 + 8) = result;
      return result;
    }
    v10 = *v6;
    v11 = *a2;
    v12 = *v6 < (unsigned __int64)*a2;
    if ( *v6 > (unsigned __int64)*a2 )
    {
      if ( a2[1] < v10 )
        goto LABEL_21;
      v12 = v10 < v11;
    }
    if ( !v12 || v6[1] >= v11 )
    {
      result = v6[1];
      v13 = a2[1];
      if ( v13 >= result )
        v13 = v6[1];
      if ( v11 > v10 )
        v10 = *a2;
      if ( v13 - v10 + 1 >= a2[2] )
        break;
    }
LABEL_21:
    v6 += 2;
  }
  v14 = (((__int64)v6 - *(_QWORD *)(a1 + 64)) >> 4) + 1;
  *((_DWORD *)a2 + 8) = v14;
  if ( v5 )
    *((_DWORD *)a2 + 8) = -v14;
  return result;
}
