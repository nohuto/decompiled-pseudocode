/*
 * XREFs of sub_1406CD2F0 @ 0x1406CD2F0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ExpInitLicensing @ 0x140838930 (ExpInitLicensing.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406CD2F0(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rbx
  _QWORD *Pool2; // r14
  int v4; // edi
  __int64 v5; // rax
  void *v6; // rsi
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rbx
  void *v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+40h] [rbp-11h]
  const wchar_t *v12; // [rsp+48h] [rbp-9h]
  __int64 v13; // [rsp+50h] [rbp-1h]
  int v14; // [rsp+58h] [rbp+7h]
  __int64 v15; // [rsp+60h] [rbp+Fh]
  int v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+78h] [rbp+27h]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  __int64 v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  __int64 v22; // [rsp+98h] [rbp+47h]
  int v23; // [rsp+A0h] [rbp+4Fh]

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v5 = ExAllocatePool2(0x100uLL);
    v6 = (void *)v5;
    if ( v5 )
    {
      v11 = 256;
      Pool2[10240] = 81920LL;
      *(_QWORD *)v5 = Pool2;
      *(_DWORD *)(v5 + 47036) = -1;
      v10 = &ExpQueryRegistryRoutine;
      v16 = 81920;
      v12 = L"ProductPolicy";
      ServerSiloGlobals[109] = v5;
      v14 = 50331651;
      v15 = 0LL;
      v17 = 0LL;
      v18 = 0;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
      v23 = 0;
      v13 = v5;
      ExpInitLicensing(ServerSiloGlobals);
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)a1;
      v4 = RtlQueryRegistryValuesEx(2LL, L"ProductOptions", &v10, 0LL, 0LL);
      sub_140A7DC40();
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
