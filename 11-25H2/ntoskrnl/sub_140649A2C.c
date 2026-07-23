/*
 * XREFs of sub_140649A2C @ 0x140649A2C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     ExpInitLicensing @ 0x1407A9718 (ExpInitLicensing.c)
 *     sub_140978BA4 @ 0x140978BA4 (sub_140978BA4.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B3F70 (RtlQueryRegistryValuesEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140649A2C(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rbx
  void *v3; // rsi
  _DWORD *Pool2; // r14
  NTSTATUS v5; // edi
  _DWORD *v6; // rax
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
  v3 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 && (v6 = (_DWORD *)ExAllocatePool2(0x100uLL), (v3 = v6) != 0LL) )
  {
    Pool2[20481] = 0;
    QueryTable.DefaultData = 0LL;
    v11 = 0LL;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v17 = 0;
    Pool2[20480] = 81920;
    v6[11759] = -1;
    *(_QWORD *)v6 = Pool2;
    ServerSiloGlobals[109] = v6;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ExpQueryRegistryRoutine;
    QueryTable.DefaultLength = 81920;
    QueryTable.Name = L"ProductPolicy";
    QueryTable.Flags = 256;
    QueryTable.DefaultType = 50331651;
    QueryTable.EntryContext = v6;
    ExpInitLicensing(ServerSiloGlobals);
    CurrentThread = KeGetCurrentThread();
    Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
    CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)a1;
    v5 = RtlQueryRegistryValuesEx(2u, L"ProductOptions", &QueryTable, 0LL, 0LL);
    sub_140978BA4();
    KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
  else
  {
    v5 = -1073741801;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x69534C53u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x69534C53u);
  return (unsigned int)v5;
}
