/*
 * XREFs of TpSimpleTryPost @ 0x1800DAE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     TppWorkPost @ 0x180041770 (TppWorkPost.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x18004D8A0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpSimpleTryPost(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 Heap_0; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  int v10; // edi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( a3 )
    v6 = *(_DWORD *)(a3 + 56);
  else
    v6 = 0;
  if ( !a1 || (v6 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap_0 = RtlAllocateHeap_0();
    v8 = (_QWORD *)Heap_0;
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 176) = retaddr;
      v10 = TppWorkInitialize(
              Heap_0,
              a2,
              a3,
              v6,
              (__int64)TppSimplepCleanupGroupMemberVFuncs,
              (__int64)TppSimplepTaskVFuncs);
      if ( v10 >= 0 )
      {
        v10 = 0;
        v8[10] = a1;
        if ( a3 )
          v8[4] = *(_QWORD *)(a3 + 48);
        if ( v8[2] )
          TppCleanupGroupAddMember((__int64)v8, v9);
      }
    }
    else
    {
      v10 = -1073741801;
    }
    if ( v10 < 0 )
    {
      if ( v8 )
        RtlFreeHeap_0();
    }
    else
    {
      TppWorkPost((__int64)v8);
    }
    return (unsigned int)v10;
  }
}
