/*
 * XREFs of HalpInterruptGetNextProcessorLocalId @ 0x14057C778
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140BEA190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057CE5C (HalpQueryMaximumRegisteredProcessorCount.c)
 */

__int64 __fastcall HalpInterruptGetNextProcessorLocalId(char a1, _DWORD *a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  unsigned int MaximumRegisteredProcessorCount; // eax
  unsigned int v7; // ebp
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v11; // ecx
  _BYTE *v12; // rax
  int v13; // eax
  unsigned int v14; // edx
  unsigned int i; // r9d
  __int64 v16; // r8
  unsigned int j; // ecx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int128 v20; // xmm0

  v4 = 0LL;
  v5 = 0LL;
  MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
  v7 = MaximumRegisteredProcessorCount;
  if ( (a1 & 1) != 0 )
  {
    v8 = 0;
    if ( MaximumRegisteredProcessorCount )
    {
      v9 = HalpInterruptDynamicProcessorState;
      do
      {
        v5 = v9;
        if ( !*(_BYTE *)(v9 + 12) )
          break;
        if ( *(_DWORD *)v9 == *a2 )
          v4 = v9;
        ++v8;
        v9 += 64LL;
      }
      while ( v8 < MaximumRegisteredProcessorCount );
    }
  }
  if ( *a2 != -1 )
  {
    v14 = -1073741275;
    for ( i = 0; ; ++i )
    {
      v16 = (unsigned int)HalpInterruptProcessorCount;
      if ( i >= (unsigned int)HalpInterruptProcessorCount )
        break;
      v5 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      if ( *(_DWORD *)v5 == *a2 )
      {
        if ( *(_BYTE *)(v5 + 12) )
          return 3221227272LL;
        *(_BYTE *)(v5 + 12) = 1;
        v14 = 0;
        break;
      }
    }
    if ( (a1 & 2) != 0 )
      return 0LL;
    if ( v14 == -1073741275 )
    {
      if ( (a1 & 1) == 0 )
        return v14;
      v5 = HalpInterruptProcessorState + (v16 << 6);
      *(_BYTE *)(v5 + 12) = 1;
      *(_DWORD *)v5 = *a2;
      *(_DWORD *)(v5 + 8) = *a2;
      if ( v4 )
        *(_DWORD *)(v5 + 8) = *(_DWORD *)(v4 + 8);
      LODWORD(HalpInterruptProcessorCount) = v16 + 1;
      v14 = 0;
    }
    else if ( (a1 & 1) == 0 )
    {
      return v14;
    }
    if ( !v4 )
    {
      for ( j = 0; j < v7; ++j )
      {
        v18 = HalpInterruptDynamicProcessorState;
        v19 = (unsigned __int64)j << 6;
        if ( !*(_BYTE *)(v19 + HalpInterruptDynamicProcessorState + 12) )
        {
          v20 = *(_OWORD *)v5;
          ++HalpInterruptDynamicProcessorCount;
          *(_OWORD *)(v19 + HalpInterruptDynamicProcessorState) = v20;
          *(_OWORD *)(v19 + v18 + 16) = *(_OWORD *)(v5 + 16);
          *(_OWORD *)(v19 + v18 + 32) = *(_OWORD *)(v5 + 32);
          *(_OWORD *)(v19 + v18 + 48) = *(_OWORD *)(v5 + 48);
          return v14;
        }
      }
    }
    return v14;
  }
  if ( (a1 & 1) != 0 )
    return 3221225485LL;
  v11 = 0;
  if ( (_DWORD)HalpInterruptProcessorCount )
  {
    v12 = (_BYTE *)(HalpInterruptProcessorState + 56);
    do
    {
      v5 = (ULONG_PTR)(v12 - 56);
      if ( !*(v12 - 44) && !*v12 )
        break;
      ++v11;
      v12 += 64;
    }
    while ( v11 < (unsigned int)HalpInterruptProcessorCount );
  }
  if ( v11 == (_DWORD)HalpInterruptProcessorCount )
    return 3221226021LL;
  v13 = *(_DWORD *)v5;
  v14 = 0;
  *(_BYTE *)(v5 + 12) = 1;
  *a2 = v13;
  return v14;
}
