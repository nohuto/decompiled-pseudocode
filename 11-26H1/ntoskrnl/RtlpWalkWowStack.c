/*
 * XREFs of RtlpWalkWowStack @ 0x14045F210
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpWalkWowStack(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        volatile void *Address)
{
  unsigned __int8 v11; // r12
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int i; // r9d
  char v17; // al
  unsigned int j; // r8d
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  unsigned __int64 v21; // r9
  _KPROCESS *Process; // rcx

  v11 = 1;
  v12 = *(_DWORD *)(a3 + 8196);
  if ( v12 <= (unsigned int)Address )
    return 0;
  ProbeForRead((volatile void *)(unsigned int)Address, v12 - (unsigned int)Address, 4u);
  v13 = *a4;
  if ( a2 )
  {
    if ( a5 > v13 )
    {
      if ( v13 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v13 - a6)) = *a2;
      ++*a4;
    }
  }
  else
  {
    v14 = (unsigned int)Address;
    for ( i = 0; i < 2 && v13 < a5 && v14 < v12 && v14 >= (unsigned int)Address && v12 - v14 >= 4; ++i )
    {
      if ( v13 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v13 - a6)) = *(unsigned int *)v14;
      v14 += 4;
      ++v13;
    }
    *a4 = v13;
    if ( v13 >= a5 )
      return v11;
  }
  v17 = 1;
  for ( j = *a4; j < a5 && a7 < v12; ++j )
  {
    if ( v17 )
    {
      if ( a7 < (unsigned int)Address )
        break;
    }
    else if ( a7 <= (unsigned int)Address )
    {
      break;
    }
    if ( v12 - a7 < 8 )
      break;
    v19 = *(_DWORD *)a7;
    v20 = *(_DWORD *)(a7 + 4LL);
    if ( (unsigned int)Address <= v20 && v20 < v12 )
      break;
    v21 = *(unsigned int *)(a7 + 4LL);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v21 < 0x10000 || v21 >= *(_QWORD *)&Process[1].PrimaryGroup )
      break;
    if ( j >= a6 )
      *(_QWORD *)(a1 + 8LL * (j - a6)) = v21;
    if ( a7 >= v19 || v19 >= v12 )
    {
      ++j;
      break;
    }
    a7 = v19;
    v17 = 0;
  }
  *a4 = j;
  return v11;
}
