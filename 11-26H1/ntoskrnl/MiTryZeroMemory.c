/*
 * XREFs of MiTryZeroMemory @ 0x140456F34
 * Callers:
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 * Callees:
 *     MiGetZeroingContext @ 0x140457050 (MiGetZeroingContext.c)
 *     MiAllocateEngineDescriptor @ 0x14050E6A8 (MiAllocateEngineDescriptor.c)
 *     MiPerformTimedMemoryZeroing @ 0x1405213F4 (MiPerformTimedMemoryZeroing.c)
 */

__int64 __fastcall MiTryZeroMemory(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 ZeroingContext; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  _DWORD *v7; // r14
  __int64 EngineDescriptor; // rax
  _DWORD *v9; // rdx

  v1 = 0;
  ZeroingContext = a1;
  if ( !*(_DWORD *)(a1 + 64) )
    ZeroingContext = MiGetZeroingContext(a1);
  v4 = *(_QWORD *)(ZeroingContext + 40);
  v5 = *(unsigned int *)(ZeroingContext + 64);
  v6 = MiPageSizes[v5];
  if ( !(_DWORD)v5 )
  {
    v6 = 512LL;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 304LL) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 320) << 21);
  }
  v7 = *(_DWORD **)(a1 + 80);
  if ( *v7 )
  {
    EngineDescriptor = 0LL;
    v9 = (_DWORD *)(a1 + 432);
LABEL_7:
    if ( v6 > 0x40 && (v6 & 7) == 0 )
      v9 = v7 + 38;
    goto LABEL_8;
  }
  EngineDescriptor = *(_QWORD *)(a1 + 424);
  if ( !EngineDescriptor )
  {
    EngineDescriptor = MiAllocateEngineDescriptor(*(_QWORD *)(a1 + 80));
    if ( EngineDescriptor )
      *(_QWORD *)(a1 + 424) = EngineDescriptor;
    else
      v1 = 1;
  }
  v9 = (_DWORD *)(a1 + 432);
  if ( !EngineDescriptor )
    goto LABEL_7;
LABEL_8:
  MiPerformTimedMemoryZeroing(a1, v9, EngineDescriptor, v4, v6 << 12, 1);
  return v1;
}
