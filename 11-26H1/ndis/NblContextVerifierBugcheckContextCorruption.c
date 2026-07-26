/*
 * XREFs of NblContextVerifierBugcheckContextCorruption @ 0x1400A53B8
 * Callers:
 *     NdisFReturnNetBufferLists @ 0x14002DCC0 (NdisFReturnNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x140036740 (NdisMSendNetBufferListsComplete.c)
 *     NdisReturnNetBufferLists @ 0x14003B6A0 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x14003D660 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall __noreturn NblContextVerifierBugcheckContextCorruption(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // r10
  ULONG_PTR BugCheckParameter4[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  switch ( *(_BYTE *)a3 )
  {
    case 5:
      v3 = *(_QWORD *)(a3 + 32);
      break;
    case 0x11:
      v3 = a3;
      break;
    case 0x12:
      v3 = *(_QWORD *)(a3 + 16);
      break;
  }
  BugCheckParameter4[2] = a2;
  BugCheckParameter4[1] = a1;
  BugCheckParameter4[0] = 40LL;
  BugCheckParameter4[3] = a3;
  BugCheckParameter4[4] = v3;
  ndisBugCheckEx(0x32uLL, 0x81uLL, a3, (ULONG_PTR)BugCheckParameter4);
}
