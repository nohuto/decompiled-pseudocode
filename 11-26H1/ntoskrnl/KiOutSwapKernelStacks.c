/*
 * XREFs of KiOutSwapKernelStacks @ 0x14040FA14
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405FA6A0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeSwappablePageDereference @ 0x14040FC5C (KeSwappablePageDereference.c)
 *     KiDecrementProcessStackCount @ 0x140410010 (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x14041011C (KiWaitForContextSwap.c)
 *     MmOutPageKernelStack @ 0x140410180 (MmOutPageKernelStack.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

ULONG __fastcall KiOutSwapKernelStacks(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebp
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r8
  ULONG result; // eax
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // r8
  int v20; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v21[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]

  memset(v21, 0, sizeof(v21));
  v1 = 0LL;
  v2 = MEMORY[0xFFFFF78000000320] - LODWORD(KsepShimDbLock.UserWaitTime);
  v22 = 0LL;
  v3 = KiProcessorBlock[KiLastProcessor];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 33744), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(_QWORD *)(v3 + 33744) );
  }
  v5 = *(_QWORD **)(v3 + 33728);
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == (_QWORD *)(v3 + 33728) )
      break;
    if ( (unsigned int)v1 >= 5 )
      break;
    v7 = (__int64)(v5 - 27);
    v5 = (_QWORD *)*v5;
    if ( v2 < *(_DWORD *)(v7 + 436) )
      break;
    if ( *(char *)(v7 + 195) >= 25 )
    {
      v19 = (_QWORD *)v6[1];
      if ( (_QWORD *)v5[1] != v6 || (_QWORD *)*v19 != v6 )
        goto LABEL_34;
      *v19 = v5;
      v5[1] = v19;
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v7 + 120), 0x11u);
      v8 = v7;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0x14u) )
        v8 = v7 | 1;
      *((_QWORD *)v21 + v1) = v8;
      v1 = (unsigned int)(v1 + 1);
      v9 = *v6;
      v10 = (_QWORD *)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v10 != v6 )
LABEL_34:
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
    *(_QWORD *)(v7 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 33744), 0LL);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v1 )
  {
    v12 = (_QWORD *)v21 + v1;
    do
    {
      --v12;
      LODWORD(v1) = v1 - 1;
      v13 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFEuLL);
      v14 = *v12 & 1LL;
      if ( !v14 )
        v13 = (_QWORD *)*v12;
      KiWaitForContextSwap(v13);
      if ( (unsigned int)v14 != 1 )
        KiDecrementProcessStackCount(v13[23]);
      result = MmOutPageKernelStack(v13);
      v18 = v13[141];
      v13[100] = 0LL;
      if ( v18 )
        result = KeSwappablePageDereference(v18, v15, v16, v17, v20, *(_QWORD *)&v21[0]);
    }
    while ( (_DWORD)v1 );
  }
  return result;
}
