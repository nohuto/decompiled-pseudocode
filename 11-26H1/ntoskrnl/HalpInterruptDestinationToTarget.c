/*
 * XREFs of HalpInterruptDestinationToTarget @ 0x140434F10
 * Callers:
 *     HalpInterruptSetRemappedDestination @ 0x140434D0C (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x140435518 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalpInterruptGenerateMessage @ 0x14057E07C (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptAddTarget @ 0x140434FF4 (HalpInterruptAddTarget.c)
 */

__int64 __fastcall HalpInterruptDestinationToTarget(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 *v5; // rax
  unsigned __int8 v6; // si
  __int64 v7; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v10; // rax
  __int64 ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = a1;
  v3 = 0;
  *a3 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v5 = *(__int64 **)(a2 + 8);
      v6 = 0;
      LODWORD(ProcNumber) = 0;
      v7 = *v5;
      LOWORD(ProcNumber) = *((_WORD *)v5 + 4);
      while ( v7 )
      {
        if ( _bittest64(&v7, v6) )
        {
          v7 &= ~(1LL << v6);
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
          HalpInterruptAddTarget(a3, ProcessorIndexFromNumber);
        }
        BYTE2(ProcNumber) = ++v6;
      }
      break;
    case 3:
      *a3 = 1;
      break;
    case 4:
      *a3 = 2;
      break;
    case 5:
      *a3 = 3;
      break;
    case 6:
      v10 = HalpInterruptLocalIds;
      *a3 = 4;
      a3[2] = *(_DWORD *)(v10 + 4LL * *(unsigned int *)(a2 + 8));
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v3;
}
