/*
 * XREFs of TpAllocIoCompletion @ 0x180065290
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TpBindFileToDirect @ 0x1800654D4 (TpBindFileToDirect.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocIoCompletion(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *p_Length; // r12
  int v9; // edi
  __int64 Heap_0; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  _DWORD *v14; // r14
  _BYTE *v15; // r15
  __int64 v16; // rdx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  p_Length = &Ldr->Length;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( Ldr && a2 && a3 && (v9 & 0xFFFFFFFC) == 0 && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    *p_Length = 0LL;
    Heap_0 = RtlAllocateHeap_0();
    v11 = Heap_0;
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 176) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(Heap_0, a4, a5, v9, (__int64)TppIopCleanupGroupMemberVFuncs);
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = a3;
        *(_QWORD *)(v11 + 272) = a2;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        v14 = (_DWORD *)(v11 + 264);
        v15 = (_BYTE *)(v11 + 268);
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, v11 + 264, v11 + 268, 0LL);
        }
        else
        {
          *v14 = 0;
          *v15 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = *v14;
        *(_BYTE *)(v11 + 212) = *v15;
        v12 = TpBindFileToDirect(a2, v11 + 200, *(_QWORD *)(v11 + 144));
        if ( v12 >= 0 )
        {
          v12 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11, v16);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy(v11);
      }
    }
    else
    {
      v12 = -1073741801;
    }
    if ( v12 < 0 )
    {
      if ( v11 )
        RtlFreeHeap_0();
    }
    else
    {
      *p_Length = v11;
    }
    return (unsigned int)v12;
  }
  else
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
}
