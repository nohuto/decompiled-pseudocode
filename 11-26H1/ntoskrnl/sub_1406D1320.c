/*
 * XREFs of sub_1406D1320 @ 0x1406D1320
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExpInitLicensing @ 0x14083EB70 (ExpInitLicensing.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10120 (RtlQueryRegistryValuesEx.c)
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406D1320(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rbx
  _QWORD *Pool2; // r14
  NTSTATUS v4; // edi
  _QWORD *v5; // rax
  void *v6; // rsi
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rbx
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  __int64 v14; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+90h] [rbp+3Fh]
  __int64 v16; // [rsp+98h] [rbp+47h]
  int v17; // [rsp+A0h] [rbp+4Fh]

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v5 = (_QWORD *)ExAllocatePool2(0x100uLL);
    v6 = v5;
    if ( v5 )
    {
      QueryTable.Flags = 256;
      Pool2[10240] = 81920LL;
      *v5 = Pool2;
      *((_DWORD *)v5 + 11759) = -1;
      QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ExpQueryRegistryRoutine;
      QueryTable.DefaultLength = 81920;
      QueryTable.Name = L"ProductPolicy";
      ServerSiloGlobals[109] = v5;
      QueryTable.DefaultType = 50331651;
      QueryTable.DefaultData = 0LL;
      v11 = 0LL;
      v12 = 0;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0;
      v16 = 0LL;
      v17 = 0;
      QueryTable.EntryContext = v5;
      ExpInitLicensing(ServerSiloGlobals);
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)a1;
      v4 = RtlQueryRegistryValuesEx(2u, L"ProductOptions", &QueryTable, 0LL, 0LL);
      sub_140A83AB0();
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v4 >= 0 )
        return (unsigned int)v4;
    }
    else
    {
      v4 = -1073741801;
    }
    ExFreePoolWithTag(Pool2, 0x69534C53u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x69534C53u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
