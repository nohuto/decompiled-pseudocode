/*
 * XREFs of IoQueuesCreation @ 0x14000D1E0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     IoQueuesFreeResources @ 0x14000D2C0 (IoQueuesFreeResources.c)
 *     CalculateTimeDurationIn100ns @ 0x14000F5B0 (CalculateTimeDurationIn100ns.c)
 */

__int64 __fastcall IoQueuesCreation(__int64 a1, char a2)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  int v6; // ecx
  __int64 v8; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  StorPortExtendedFunction(47LL, a1, &v9, &v8);
  v4 = v8;
  v5 = NVMeIoCompletionQueueCreate(a1, a2, 0);
  if ( v5 )
  {
    v6 = 23;
LABEL_3:
    *(_DWORD *)(a1 + 28) = v6;
    IoQueuesFreeResources(a1);
    return v5;
  }
  v5 = NVMeIoSubmissionQueueCreate(a1, a2, 0);
  if ( v5 )
  {
    v6 = 22;
    goto LABEL_3;
  }
  StorPortExtendedFunction(47LL, a1, &v9, &v8);
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
  {
    CalculateTimeDurationIn100ns(v8 - v4, v9);
    StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  return 0LL;
}
