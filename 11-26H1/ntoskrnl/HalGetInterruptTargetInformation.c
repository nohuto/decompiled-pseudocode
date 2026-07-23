/*
 * XREFs of HalGetInterruptTargetInformation @ 0x14057F4B0
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptIsMsiSupported @ 0x14050FAA4 (HalpInterruptIsMsiSupported.c)
 */

__int64 __fastcall HalGetInterruptTargetInformation(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  bool v7; // zf
  int v8; // edi
  unsigned int i; // ecx
  ULONG_PTR v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax

  if ( !a1 || a1 == 2 )
  {
    *(_QWORD *)(a3 + 4) = 0LL;
    *(_QWORD *)(a3 + 12) = 0LL;
    *(_DWORD *)(a3 + 24) = 0;
    v7 = HalpInterruptPhysicalModeOnly == 0;
    *(_DWORD *)a3 = a1;
    if ( v7 && HalpInterruptLogicalMode )
    {
      if ( HalpInterruptClusterModeEnabled )
      {
        v8 = 3;
        *(_DWORD *)(a3 + 24) = HalpInterruptMaxClusterSize;
      }
      else
      {
        v8 = 2;
      }
    }
    else
    {
      v8 = 1;
    }
    *(_DWORD *)(a3 + 20) = v8;
    if ( HalpInterruptIsMsiSupported(0) )
      *(_DWORD *)(a3 + 8) = 1;
    if ( a1 == 2 )
    {
      return 0LL;
    }
    else
    {
      result = 3221226021LL;
      for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
      {
        v10 = HalpInterruptProcessorState;
        v11 = (unsigned __int64)i << 6;
        if ( *(_BYTE *)(v11 + HalpInterruptProcessorState + 13) && *(_DWORD *)(v11 + HalpInterruptProcessorState) == a2 )
        {
          v12 = HalpInterruptTargets;
          *(_DWORD *)(a3 + 4) = *(_DWORD *)(v11 + HalpInterruptProcessorState + 16);
          v13 = 3LL * *(unsigned int *)(v11 + v10 + 20);
          if ( v8 == 1
            || (v14 = qword_140FBD028[*(unsigned __int16 *)(v11 + v10 + 16)],
                _bittest64(&v14, *(unsigned __int8 *)(v11 + v10 + 18))) )
          {
            *(_DWORD *)(a3 + 12) = 0;
            *(_DWORD *)(a3 + 20) = 1;
          }
          else
          {
            *(_DWORD *)(a3 + 20) = v8;
            if ( v8 == 2 )
            {
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v12 + 8 * v13 + 8);
            }
            else
            {
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v12 + 8 * v13 + 12);
              *(_DWORD *)(a3 + 16) = *(_DWORD *)(v12 + 8 * v13 + 8);
            }
          }
          return 0LL;
        }
      }
    }
  }
  else
  {
    HalpInterruptSetProblemEx(0LL, 19, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1D9u);
    return 3221225485LL;
  }
  return result;
}
