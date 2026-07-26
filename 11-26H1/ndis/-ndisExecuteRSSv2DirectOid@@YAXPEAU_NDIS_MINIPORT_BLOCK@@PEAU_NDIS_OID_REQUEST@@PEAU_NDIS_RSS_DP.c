/*
 * XREFs of ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1400AEE9C
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400AF300 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400036B0 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1400AED78 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisExecuteRSSv2DirectOid(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _KDPC *a3,
        struct _PROCESSOR_NUMBER a4)
{
  char *v4; // rdi
  int ProcessorHistory_high; // eax
  int v9; // ebx
  NDIS_PORT_NUMBER PortNumber; // eax
  KIRQL v11; // bl
  struct _KDPC *v12; // rdi
  bool v13; // r15
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-D0h] BYREF
  _PROCESSOR_NUMBER v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SystemArgument1[248]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (char *)(&a3[1].0 + 1);
  v15 = a4;
  ProcessorHistory_high = HIDWORD(a3[1].ProcessorHistory);
  ProcNumber = 0;
  if ( ProcessorHistory_high )
  {
    v9 = 24 * ProcessorHistory_high + 20;
    memset(SystemArgument1, 0, sizeof(SystemArgument1));
    *(_DWORD *)&SystemArgument1[88] |= 8u;
    *(_QWORD *)&SystemArgument1[104] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&SystemArgument1[168]);
    PortNumber = a2->PortNumber;
    *(_DWORD *)&SystemArgument1[88] |= 0x1000000u;
    *(_DWORD *)&SystemArgument1[48] = v9;
    *(_DWORD *)&SystemArgument1[52] = v9;
    *(_DWORD *)&SystemArgument1[8] = PortNumber;
    *(_DWORD *)&SystemArgument1[4] = 12;
    *(_DWORD *)&SystemArgument1[32] = 66240;
    *(_DWORD *)&SystemArgument1[56] = 0;
    *(_QWORD *)&SystemArgument1[40] = v4;
    *(_DWORD *)SystemArgument1 = 16253334;
    *(_QWORD *)&SystemArgument1[104] = 0LL;
    EtwActivityIdControl(3u, (LPGUID)&SystemArgument1[168]);
    *(_DWORD *)&SystemArgument1[244] = a2[1].RequestType;
    *(_DWORD *)&SystemArgument1[236] = *(_DWORD *)(&a2->Reserved2 + 1);
    *(NDIS_OBJECT_HEADER *)&SystemArgument1[240] = a2[1].Header;
    *(_QWORD *)&SystemArgument1[104] = &ndisIntReqGeneric;
    SystemArgument1[1] = 2;
    *(_WORD *)&SystemArgument1[2] = 248;
    v11 = KfRaiseIrql(2u);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    v12 = a3 + 1;
    v13 = ndisAreProcessorsEqual(v15, ProcNumber);
    if ( v13 )
      v12->TargetInfoAsUlong = ndisSynchronousOidRequestInternal(
                                 0LL,
                                 a1,
                                 0LL,
                                 (struct _NDIS_OID_REQUEST *)SystemArgument1);
    if ( v11 != 2 )
      KeLowerIrql(v11);
    if ( !v13 )
    {
      a1->RssV2CompletionCount = 1;
      KeResetEvent(&a1->RssV2CompletionEvent);
      v12->TargetInfoAsUlong = 0;
      KeSetTargetProcessorDpcEx(a3, &v15);
      KeInsertQueueDpc(a3, SystemArgument1, a3);
      KeWaitForSingleObject(&a1->RssV2CompletionEvent, Executive, 0, 0, 0LL);
    }
    if ( v12->TargetInfoAsUlong )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Miniport has failed OID_GEN_RSS_SET_INDIRECTION_TABLE_ENTRIES");
      ndisBugCheckEx(0x1CuLL, (ULONG_PTR)a1, 0x102C0uLL, (int)v12->TargetInfoAsUlong);
    }
  }
}
