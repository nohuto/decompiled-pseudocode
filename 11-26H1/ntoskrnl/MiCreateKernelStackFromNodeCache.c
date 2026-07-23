/*
 * XREFs of MiCreateKernelStackFromNodeCache @ 0x1403D41A0
 * Callers:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSetPfnKernelStack @ 0x14029FC10 (MiSetPfnKernelStack.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x140342BC8 (MiUpdateKernelShadowStackOwnerData.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

unsigned __int64 __fastcall MiCreateKernelStackFromNodeCache(__int64 a1, unsigned int a2)
{
  int v4; // esi
  _SLIST_HEADER *v5; // r13
  int v6; // ebp
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v10; // rdx
  PSLIST_ENTRY v11; // rbx
  ULONG_PTR Next; // r9
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  unsigned __int8 CurrentIrql; // bp
  __int64 v18; // rbx
  __int64 v19; // r15
  int v20; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 56) == 5 )
  {
    v4 = 0;
  }
  else
  {
    if ( *(int *)(a1 + 60) > 5 )
      return 0LL;
    v4 = 1;
  }
  v5 = *(_SLIST_HEADER **)a1;
  v6 = *(_DWORD *)(a1 + 60);
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL) + 56320LL * a2;
  while ( 1 )
  {
    v8 = (__int64)v6 << 6;
    if ( FirstEntrySList((PSLIST_HEADER)(v8 + v7 + 14240)) )
    {
      v11 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v8 + v7 + 14240));
      if ( v11 )
        break;
    }
    if ( v6 != 1 || (*(_DWORD *)(a1 + 32) & 0x40) != 0 )
      return 0LL;
    v6 = 0;
  }
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = v11[1].Next;
    RtlpInterlockedPushEntrySList(v5 + 32, v11);
    v15 = (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
    MiUpdateKernelShadowStackOwnerData(v15, a1);
  }
  else
  {
    Next = (ULONG_PTR)v11[-1].Next;
    if ( Next != (qword_140E34D20 ^ (unsigned __int64)&v11[-255]) )
      KeBugCheckEx(0x1Au, 0x3470uLL, (ULONG_PTR)&v11[-255], Next, qword_140E34D20 ^ (unsigned __int64)&v11[-255]);
    v13 = 0xFFFFF68000000000uLL;
    v14 = (((unsigned __int64)&v11[-255] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = (__int64)((v14 << 25) + 0x10000000) >> 16;
    if ( v6 != 1 )
    {
      v16 = v14 - 8LL * *(_QWORD *)(a1 + 16) + 8;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 2;
        LOBYTE(v13) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v13, v10);
      }
      do
      {
        v18 = *(_QWORD *)v14;
        v19 = 48 * ((*(_QWORD *)v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        if ( v18 == *(_QWORD *)v14 )
        {
          MiSetPfnKernelStack((__int64 *)v19, *(_QWORD *)(a1 + 40));
          v14 -= 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      while ( v14 >= v16 );
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
  }
  *(_DWORD *)(a1 + 52) = a2;
  return v15;
}
