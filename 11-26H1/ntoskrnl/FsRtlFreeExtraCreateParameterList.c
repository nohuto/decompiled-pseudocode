/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x140934030
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x140933C40 (IopSymlinkAllocateAndAddECP.c)
 *     PspCreateUserProcessEcp @ 0x140933EF8 (PspCreateUserProcessEcp.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rax
  __int64 Blink; // r14
  struct _PAGED_LOOKASIDE_LIST *v6; // rcx
  __int64 v7; // rdx

  p_EcpList = &EcpList->EcpList;
  while ( 1 )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink == p_EcpList )
      break;
    if ( Flink->Blink != p_EcpList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    Blink = 0LL;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    if ( Flink[2].Flink )
      guard_dispatch_icall_no_overrides((__int64)&Flink[4], (__int64)&Flink[1]);
    if ( ((__int64)Flink[2].Blink & 0x20) != 0 && FltMgrCallbacks )
    {
      Blink = (__int64)Flink[3].Blink;
      guard_dispatch_icall_no_overrides(Blink, (__int64)&Flink[4]);
    }
    v6 = (struct _PAGED_LOOKASIDE_LIST *)Flink[3].Flink;
    if ( v6 )
      ExFreeToNPagedLookasideList(v6, &Flink[-1].Blink);
    else
      ExFreePoolWithTag(&Flink[-1].Blink, 0);
    if ( Blink )
      guard_dispatch_icall_no_overrides(Blink, v7);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToNPagedLookasideList(&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}
