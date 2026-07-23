/*
 * XREFs of KeRevertToUserMultipleGroupAffinityThread @ 0x140501124
 * Callers:
 *     PsRevertToUserMultipleGroupAffinityThread @ 0x1406186F0 (PsRevertToUserMultipleGroupAffinityThread.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeRevertToUserMultipleGroupAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int UserIdealProcessor; // r14d
  unsigned __int16 v9; // dx
  unsigned __int16 *v10; // rsi
  char v11; // al
  char v12; // al
  _WORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _SINGLE_LIST_ENTRY *v16; // r8
  char v17; // al
  unsigned __int16 *v18; // r9
  unsigned __int16 i; // cx
  struct _KAFFINITY_EX *v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+78h] [rbp+10h] BYREF
  struct _SINGLE_LIST_ENTRY v24; // [rsp+80h] [rbp+18h] BYREF

  v2 = a1;
  v24.Next = 0LL;
  CurrentThread = KeGetCurrentThread();
  result = (unsigned int)CurrentThread->MiscFlags;
  if ( (result & 8) == 0 )
    return result;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( CurrentThread->ThreadLock );
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  UserIdealProcessor = 2048;
  v9 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  if ( Next )
    CurrentThread->SystemAffinityTokenListHead = (_SINGLE_LIST_ENTRY)Next->Next;
  v10 = *(unsigned __int16 **)(v2 + 24);
  if ( *v10 > v9
    || v10[1] < v9
    || (v11 = *(_BYTE *)(v2 + 19), (v11 & 1) == 0)
    || Next != (struct _SINGLE_LIST_ENTRY *)v2 )
  {
    KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 1uLL, 0LL, 0LL);
  }
  if ( *(_BYTE *)(v2 + 18) == 1 )
    *(_BYTE *)(v2 + 18) = v11 & 2;
  memset_0(v10 + 4, 0, 8LL * *v10);
  *v10 = 1;
  v12 = *(_BYTE *)(v2 + 18);
  if ( v12 )
  {
    if ( v12 != 2 )
      goto LABEL_31;
    if ( (*(_BYTE *)(v2 + 19) & 2) == 0 )
      KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 3uLL, 0LL, 0LL);
    v13 = *(_WORD **)(v2 + 24);
    v14 = *(unsigned __int16 *)(v2 + 16);
    v15 = *(_QWORD *)(v2 + 8);
    if ( *v13 <= (unsigned __int16)v14 )
    {
      if ( v13[1] <= (unsigned __int16)v14 )
        goto LABEL_31;
      *v13 = v14 + 1;
    }
    *(_QWORD *)&v13[4 * v14 + 4] |= v15;
  }
  else
  {
    v16 = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( v16 )
    {
      v17 = BYTE2(v16[2].Next);
      if ( v17 && v17 != 2 )
        KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 2uLL, 0LL, 0LL);
      RtlpCopyAffinityEx(
        *(struct _KAFFINITY_EX **)(v2 + 24),
        *(_WORD *)(*(_QWORD *)(v2 + 24) + 2LL),
        (struct _KAFFINITY_EX *)v16[3].Next);
    }
  }
LABEL_31:
  v18 = *(unsigned __int16 **)(v2 + 24);
  for ( i = 0; i < *v18; ++i )
  {
    if ( *(_QWORD *)&v18[4 * i + 4] )
      goto LABEL_36;
  }
  RtlpCopyAffinityEx(*(struct _KAFFINITY_EX **)(v2 + 24), v18[1], CurrentThread->UserAffinity);
  CurrentThread->MiscFlags &= ~8u;
  UserIdealProcessor = CurrentThread->UserIdealProcessor;
LABEL_36:
  v20 = *(struct _KAFFINITY_EX **)(v2 + 24);
  v24.Next = 0LL;
  KiSetSystemAffinityThread((__int64)CurrentThread, CurrentPrcb, v20, 0LL, UserIdealProcessor, &v24);
  LOBYTE(v21) = CurrentIrql;
  return KiProcessDeferredReadyList(CurrentPrcb, &v24, v21, v22);
}
