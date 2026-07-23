/*
 * XREFs of TppAllocAlpcCompletion @ 0x180085234
 * Callers:
 *     TpAllocAlpcCompletionEx @ 0x180085210 (TpAllocAlpcCompletionEx.c)
 *     TpAllocAlpcCompletion @ 0x180107E90 (TpAllocAlpcCompletion.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x1800859C0 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x180086D00 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     NtAlpcSetInformation @ 0x180160010 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *a1, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  char *Heap_0; // rax
  char *v11; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  _PEB_LDR_DATA *Ldr; // rcx
  _DWORD *v15; // rbx
  char *v16; // r15
  __int64 v17; // r15
  __int128 PortInformation; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v8 = a1;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( a1 && a3 && a2 && (v9 & 0xFFFFFFFC) == 0 && (a1 = NtCurrentPeb()->Ldr, !a1->ShutdownInProgress) )
  {
    *(_QWORD *)&v8->Length = 0LL;
    Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 0x128uLL);
    v11 = Heap_0;
    if ( Heap_0 )
    {
      *((_QWORD *)Heap_0 + 31) = retaddr;
      v13 = TppCleanupGroupMemberInitialize(
              (__int64)(Heap_0 + 72),
              a4,
              a5,
              v9,
              (__int64)TppAlpcpCleanupGroupMemberVFuncs);
      if ( v13 >= 0 )
      {
        *((_QWORD *)v11 + 19) = a3;
        *((_DWORD *)v11 + 72) &= ~1u;
        *((_DWORD *)v11 + 72) |= a6 != 0;
        *((_QWORD *)v11 + 34) = a2;
        Ldr = (_PEB_LDR_DATA *)*((_QWORD *)v11 + 27);
        *((_QWORD *)v11 + 7) = TppAlpcpExecuteCallback;
        v15 = v11 + 64;
        v16 = v11 + 68;
        if ( Ldr )
        {
          TppGetCurrentThreadNumaNode(Ldr, v11 + 64, v11 + 68, 0LL);
        }
        else
        {
          *v15 = 0;
          *v16 = 0;
        }
        *((_QWORD *)v11 + 4) = 0LL;
        *((_QWORD *)v11 + 6) = v11 + 40;
        *((_QWORD *)v11 + 5) = v11 + 40;
        *(_QWORD *)v11 = TppDirectTaskVFuncs;
        *((_DWORD *)v11 + 2) = *v15;
        v11[12] = *v16;
        v17 = *((_QWORD *)v11 + 27);
        PortInformation = 0LL;
        if ( !v17 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
        {
          TppRaiseInvalidParameter(Ldr, v12);
          v13 = -1073741811;
        }
        else
        {
          *((_QWORD *)&PortInformation + 1) = *(_QWORD *)(v17 + 64);
          *(_QWORD *)&PortInformation = v11;
          v13 = NtAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, &PortInformation, 0x10u);
          if ( v13 >= 0 )
          {
            TpAdjustBindingCount(v17, 1LL);
            v13 = 0;
          }
        }
        if ( v13 >= 0 )
        {
          v13 = 0;
          if ( a5 )
            *((_QWORD *)v11 + 13) = *(_QWORD *)(a5 + 48);
          if ( *((_QWORD *)v11 + 11) )
            TppCleanupGroupAddMember((__int64)(v11 + 72));
        }
        if ( v13 < 0 )
          TppCleanupGroupMemberDestroy((_QWORD *)v11 + 9);
      }
    }
    else
    {
      v13 = -1073741801;
    }
    if ( v13 < 0 )
    {
      if ( v11 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v11);
    }
    else
    {
      *(_QWORD *)&v8->Length = v11;
    }
    return (unsigned int)v13;
  }
  else
  {
    TppRaiseInvalidParameter(a1, a2);
    return 3221225485LL;
  }
}
