/*
 * XREFs of TpAllocJobNotification @ 0x1800FB800
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x180065570 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     ZwSetInformationJobObject @ 0x180162470 (ZwSetInformationJobObject.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TpAllocJobNotification(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  char *Heap_0; // rax
  char *v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _DWORD *v14; // r15
  char *v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rdx
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !a1 || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  *a1 = 0LL;
  Heap_0 = (char *)RtlAllocateHeap_0();
  v11 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap_0, 0, 0x128uLL);
  *((_QWORD *)v11 + 31) = retaddr;
  v12 = TppCleanupGroupMemberInitialize((__int64)(v11 + 72), a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_18:
    RtlFreeHeap_0();
    return (unsigned int)v12;
  }
  v13 = *((_QWORD *)v11 + 27);
  *((_QWORD *)v11 + 19) = a3;
  v14 = v11 + 64;
  *((_QWORD *)v11 + 34) = a2;
  v15 = v11 + 68;
  *((_QWORD *)v11 + 7) = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, (int *)v11 + 16, v11 + 68, 0LL);
  }
  else
  {
    *v14 = 0;
    *v15 = 0;
  }
  *((_QWORD *)v11 + 4) = 0LL;
  *((_QWORD *)v11 + 6) = v11 + 40;
  *((_QWORD *)v11 + 5) = v11 + 40;
  v19[0] = v11;
  *(_QWORD *)v11 = TppDirectTaskVFuncs;
  *((_DWORD *)v11 + 2) = *v14;
  v11[12] = *v15;
  v16 = *((_QWORD *)v11 + 27);
  v19[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v19);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy((__int64)(v11 + 72));
    goto LABEL_18;
  }
  TpAdjustBindingCount(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)v11 + 18);
  *((_QWORD *)v11 + 36) = 0LL;
  if ( a5 )
    *((_QWORD *)v11 + 13) = *(_QWORD *)(a5 + 48);
  if ( *((_QWORD *)v11 + 11) )
    TppCleanupGroupAddMember((__int64)(v11 + 72), v17);
  *a1 = v11;
  return 0LL;
}
