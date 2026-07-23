/*
 * XREFs of TpAllocJobNotification @ 0x1800FAF50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x1800859C0 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x180086D00 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     ZwSetInformationJobObject @ 0x180162370 (ZwSetInformationJobObject.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TpAllocJobNotification(_QWORD *a1, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  ULONG v10; // edx
  _QWORD *Heap_0; // rax
  _QWORD *v12; // rbx
  int v13; // ebp
  __int64 v14; // rcx
  _DWORD *v15; // r15
  _BYTE *v16; // rbp
  __int64 v17; // r15
  _QWORD JobObjectInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !a1 || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  v10 = TppHeapTag;
  *a1 = 0LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, v10 + 3407872, 0x128uLL);
  v12 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap_0, 0, 0x128uLL);
  v12[31] = retaddr;
  v13 = TppCleanupGroupMemberInitialize((__int64)(v12 + 9), a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v13 < 0 )
  {
LABEL_18:
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v12);
    return (unsigned int)v13;
  }
  v14 = v12[27];
  v12[19] = a3;
  v15 = v12 + 8;
  v12[34] = a2;
  v16 = (char *)v12 + 68;
  v12[7] = TppJobpExecuteCallback;
  if ( v14 )
  {
    TppGetCurrentThreadNumaNode(v14, (int *)v12 + 16, (_BYTE *)v12 + 68, 0LL);
  }
  else
  {
    *v15 = 0;
    *v16 = 0;
  }
  v12[4] = 0LL;
  v12[6] = v12 + 5;
  v12[5] = v12 + 5;
  JobObjectInformation[0] = v12;
  *v12 = TppDirectTaskVFuncs;
  *((_DWORD *)v12 + 2) = *v15;
  *((_BYTE *)v12 + 12) = *v16;
  v17 = v12[27];
  JobObjectInformation[1] = *(_QWORD *)(v17 + 64);
  v13 = ZwSetInformationJobObject(a2, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 0x10u);
  if ( v13 < 0 )
  {
    TppCleanupGroupMemberDestroy(v12 + 9);
    goto LABEL_18;
  }
  TpAdjustBindingCount(v17, 1u);
  _InterlockedIncrement((volatile signed __int32 *)v12 + 18);
  v12[36] = 0LL;
  if ( a5 )
    v12[13] = *(_QWORD *)(a5 + 48);
  if ( v12[11] )
    TppCleanupGroupAddMember((__int64)(v12 + 9));
  *a1 = v12;
  return 0LL;
}
