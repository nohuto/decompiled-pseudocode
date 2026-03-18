/*
 * XREFs of IoQueuesCreationAsync @ 0x14001495C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     IoQueuesFreeResources @ 0x14000D2C0 (IoQueuesFreeResources.c)
 *     CalculateTimeDurationIn100ns @ 0x14000F5B0 (CalculateTimeDurationIn100ns.c)
 */

char __fastcall IoQueuesCreationAsync(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  int v6; // r9d
  __int64 v8; // [rsp+100h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+110h] [rbp+18h] BYREF

  v2 = a1 + 3888;
  v8 = 0LL;
  v9 = 0LL;
  StorPortExtendedFunction(99LL, a1, a1 + 3888, 0LL);
  StorPortExtendedFunction(99LL, a1, a1 + 3912, 0LL);
  StorPortExtendedFunction(47LL, a1, &v9, &v8);
  v5 = v8;
  *(_DWORD *)(a1 + 988) = 0;
  if ( (unsigned int)NVMeIoCompletionQueueCreate(a1, a2, 1) )
  {
    v6 = 23;
LABEL_3:
    *(_DWORD *)(a1 + 28) = v6;
LABEL_4:
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    IoQueuesFreeResources(a1);
    return 0;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, v2, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 988) != *(unsigned __int16 *)(a1 + 332) )
    {
      v6 = 27;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 28) )
  {
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 984) = 0;
  if ( (unsigned int)NVMeIoSubmissionQueueCreate(a1, a2, 1) )
  {
    v6 = 22;
    goto LABEL_3;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, a1 + 3912, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 984) != *(unsigned __int16 *)(a1 + 330) )
    {
      v6 = 26;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 28) )
  {
    goto LABEL_4;
  }
  StorPortExtendedFunction(47LL, a1, &v9, &v8);
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
  {
    CalculateTimeDurationIn100ns(v8 - v5, v9);
    StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  return 1;
}
