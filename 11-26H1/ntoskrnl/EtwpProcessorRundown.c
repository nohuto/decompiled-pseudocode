/*
 * XREFs of EtwpProcessorRundown @ 0x140835E28
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     KeQueryHighestNodeNumber @ 0x140481FE0 (KeQueryHighestNodeNumber.c)
 *     KeQueryGroupAffinity @ 0x140494AA0 (KeQueryGroupAffinity.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProcessorRundown(__int64 a1)
{
  _PROCESSOR_NUMBER *Pool2; // rdi
  ULONG ActiveProcessorCount; // eax
  __int64 v4; // rbx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  USHORT ActiveGroupCount; // ax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  KAFFINITY *v10; // rsi
  KAFFINITY GroupAffinity; // rax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  USHORT HighestNodeNumber; // ax
  unsigned int v15; // ebx
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD P[64]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v25; // [rsp+440h] [rbp+340h] BYREF
  __int64 v26; // [rsp+448h] [rbp+348h]
  _PROCESSOR_NUMBER *v27; // [rsp+450h] [rbp+350h]
  int v28; // [rsp+458h] [rbp+358h]
  int v29; // [rsp+45Ch] [rbp+35Ch]

  memset_0(P, 0, sizeof(P));
  Pool2 = (_PROCESSOR_NUMBER *)P;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v21 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 0x20 )
  {
    Pool2 = (_PROCESSOR_NUMBER *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      goto LABEL_8;
    ActiveProcessorCount = v21;
  }
  v4 = 0LL;
  if ( ActiveProcessorCount )
  {
    do
    {
      KeGetProcessorNumberFromIndex(v4, &Pool2[v4]);
      ActiveProcessorCount = v21;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v21 );
  }
  v5 = *(_DWORD *)a1;
  v6 = *(_QWORD *)(a1 + 1360);
  v25 = &v21;
  v26 = 4LL;
  v27 = Pool2;
  v28 = 4 * ActiveProcessorCount;
  v29 = 0;
  EtwpLogKernelEvent((__int64)&v25, v6, v5, 2u, 0xB1Bu, 0x501802u);
  if ( Pool2 != (_PROCESSOR_NUMBER *)P )
    ExFreePoolWithTag(Pool2, 0);
LABEL_8:
  ActiveGroupCount = KeQueryActiveGroupCount();
  v8 = ActiveGroupCount;
  v9 = 0;
  v23 = ActiveGroupCount;
  if ( ActiveGroupCount )
  {
    v10 = (KAFFINITY *)P;
    do
    {
      GroupAffinity = KeQueryGroupAffinity(v9++);
      *v10++ = GroupAffinity;
    }
    while ( v9 < v8 );
  }
  v12 = *(_DWORD *)a1;
  v13 = *(_QWORD *)(a1 + 1360);
  v25 = (unsigned int *)&v23;
  v27 = (_PROCESSOR_NUMBER *)P;
  v28 = 8 * v8;
  v26 = 4LL;
  v29 = 0;
  EtwpLogKernelEvent((__int64)&v25, v13, v12, 2u, 0xB1Au, 0x501802u);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v15 = 0;
  v16 = HighestNodeNumber == -1;
  v17 = HighestNodeNumber + 1;
  v22 = v17;
  if ( !v16 )
  {
    do
    {
      KeQueryNodeActiveAffinity(v15, (PGROUP_AFFINITY)&P[v15], 0LL);
      v17 = v22;
      ++v15;
    }
    while ( v15 < v22 );
  }
  v18 = *(_DWORD *)a1;
  v19 = *(_QWORD *)(a1 + 1360);
  v25 = &v22;
  v27 = (_PROCESSOR_NUMBER *)P;
  v26 = 4LL;
  v28 = 16 * v17;
  v29 = 0;
  return EtwpLogKernelEvent((__int64)&v25, v19, v18, 2u, 0xB18u, 0x501802u);
}
