/*
 * XREFs of HalpInterruptGetNextProcessorLocalId @ 0x14057ECA8
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 */

__int64 __fastcall HalpInterruptGetNextProcessorLocalId(char a1, _DWORD *a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  unsigned int MaximumRegisteredProcessorCount; // eax
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int v11; // ecx
  _BYTE *v12; // rax
  int v13; // eax
  unsigned int i; // ecx
  __int64 v15; // rdx
  unsigned int j; // edx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int128 v19; // xmm0

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
  if ( *a2 == -1 )
  {
    if ( (a1 & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
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
      {
        return 3221226021LL;
      }
      else
      {
        v13 = *(_DWORD *)v5;
        *(_BYTE *)(v5 + 12) = 1;
        *a2 = v13;
        return 0LL;
      }
    }
  }
  else
  {
    result = 3221226021LL;
    for ( i = 0; ; ++i )
    {
      v15 = (unsigned int)HalpInterruptProcessorCount;
      if ( i >= (unsigned int)HalpInterruptProcessorCount )
        break;
      v5 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      if ( *(_DWORD *)v5 == *a2 )
      {
        if ( *(_BYTE *)(v5 + 12) )
          return 3221227272LL;
        *(_BYTE *)(v5 + 12) = 1;
        result = 0LL;
        break;
      }
    }
    if ( (a1 & 2) != 0 )
      return 0LL;
    if ( (_DWORD)result == -1073741275 )
    {
      if ( (a1 & 1) == 0 )
        return result;
      v5 = HalpInterruptProcessorState + (v15 << 6);
      *(_BYTE *)(v5 + 12) = 1;
      *(_DWORD *)v5 = *a2;
      *(_DWORD *)(v5 + 8) = *a2;
      if ( v4 )
        *(_DWORD *)(v5 + 8) = *(_DWORD *)(v4 + 8);
      LODWORD(HalpInterruptProcessorCount) = v15 + 1;
      result = 0LL;
    }
    else if ( (a1 & 1) == 0 )
    {
      return result;
    }
    if ( !v4 )
    {
      for ( j = 0; j < v7; ++j )
      {
        v17 = HalpInterruptDynamicProcessorState;
        v18 = (unsigned __int64)j << 6;
        if ( !*(_BYTE *)(v18 + HalpInterruptDynamicProcessorState + 12) )
        {
          v19 = *(_OWORD *)v5;
          ++HalpInterruptDynamicProcessorCount;
          *(_OWORD *)(v18 + HalpInterruptDynamicProcessorState) = v19;
          *(_OWORD *)(v18 + v17 + 16) = *(_OWORD *)(v5 + 16);
          *(_OWORD *)(v18 + v17 + 32) = *(_OWORD *)(v5 + 32);
          *(_OWORD *)(v18 + v17 + 48) = *(_OWORD *)(v5 + 48);
          return result;
        }
      }
    }
  }
  return result;
}
