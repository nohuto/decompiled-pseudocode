/*
 * XREFs of TppAllocAlpcCompletion @ 0x180064DE4
 * Callers:
 *     TpAllocAlpcCompletionEx @ 0x180064DC0 (TpAllocAlpcCompletionEx.c)
 *     TpAllocAlpcCompletion @ 0x180108490 (TpAllocAlpcCompletion.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x180065570 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     NtAlpcSetInformation @ 0x180160110 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  __int64 Heap_0; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r8
  _PEB_LDR_DATA *Ldr; // rcx
  _DWORD *v16; // rbx
  _BYTE *v17; // r15
  __int64 v18; // r15
  __int64 v19; // rdx
  __int128 v21; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v8 = a1;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( a1 && a3 && a2 && (v9 & 0xFFFFFFFC) == 0 && (a1 = NtCurrentPeb()->Ldr, !a1->ShutdownInProgress) )
  {
    *(_QWORD *)&v8->Length = 0LL;
    Heap_0 = RtlAllocateHeap_0();
    v11 = Heap_0;
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 248) = retaddr;
      v13 = TppCleanupGroupMemberInitialize(Heap_0 + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
      if ( v13 >= 0 )
      {
        *(_QWORD *)(v11 + 152) = a3;
        *(_DWORD *)(v11 + 288) &= ~1u;
        *(_DWORD *)(v11 + 288) |= a6 != 0;
        *(_QWORD *)(v11 + 272) = a2;
        Ldr = *(_PEB_LDR_DATA **)(v11 + 216);
        *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
        v16 = (_DWORD *)(v11 + 64);
        v17 = (_BYTE *)(v11 + 68);
        if ( Ldr )
        {
          TppGetCurrentThreadNumaNode(Ldr, v11 + 64, v11 + 68, 0LL);
        }
        else
        {
          *v16 = 0;
          *v17 = 0;
        }
        *(_QWORD *)(v11 + 32) = 0LL;
        *(_QWORD *)(v11 + 48) = v11 + 40;
        *(_QWORD *)(v11 + 40) = v11 + 40;
        *(_QWORD *)v11 = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 8) = *v16;
        *(_BYTE *)(v11 + 12) = *v17;
        v18 = *(_QWORD *)(v11 + 216);
        v21 = 0LL;
        if ( !v18 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
        {
          TppRaiseInvalidParameter(Ldr, v12, v14);
          v13 = -1073741811;
        }
        else
        {
          *((_QWORD *)&v21 + 1) = *(_QWORD *)(v18 + 64);
          *(_QWORD *)&v21 = v11;
          v13 = NtAlpcSetInformation(a2, 2LL, &v21, 16LL);
          if ( v13 >= 0 )
          {
            TpAdjustBindingCount(v18, 1LL);
            v13 = 0;
          }
        }
        if ( v13 >= 0 )
        {
          v13 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 104) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 88) )
            TppCleanupGroupAddMember(v11 + 72, v19);
        }
        if ( v13 < 0 )
          TppCleanupGroupMemberDestroy(v11 + 72);
      }
    }
    else
    {
      v13 = -1073741801;
    }
    if ( v13 < 0 )
    {
      if ( v11 )
        RtlFreeHeap_0();
    }
    else
    {
      *(_QWORD *)&v8->Length = v11;
    }
    return (unsigned int)v13;
  }
  else
  {
    TppRaiseInvalidParameter(a1, a2, a3);
    return 3221225485LL;
  }
}
