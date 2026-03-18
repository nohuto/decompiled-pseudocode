/*
 * XREFs of NVMeRequestComplete @ 0x140007B70
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x14001679C (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x14001D840 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x14001E990 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x140020860 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x14002A480 (NVMeSanitizeRecoverWorkItem.c)
 *     ProcessMultipleCommands @ 0x14002BADC (ProcessMultipleCommands.c)
 *     ProcessNvmeSanitizeStatus @ 0x14002C040 (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     NVMeControllerReclaimLocalCommand @ 0x14001D4C4 (NVMeControllerReclaimLocalCommand.c)
 */

__int64 __fastcall NVMeRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned int m; // ecx
  __int64 v10; // rcx
  unsigned int ii; // ecx
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int i; // ecx
  unsigned int n; // edx
  __int64 v17; // rdx
  unsigned int j; // ecx
  __int64 v19; // r9
  unsigned int k; // ecx
  __int64 v21; // rsi

  v5 = a1;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    result = GetSrbExtension(a2);
    v13 = *(_QWORD *)(result + 4200);
    goto LABEL_20;
  }
  v6 = a1 + 1016;
  if ( a2 == a1 + 1016 )
  {
LABEL_18:
    result = 1392LL;
    if ( a2 != v6 )
    {
      v14 = *(_QWORD *)(a1 + 1392);
      if ( v14 )
      {
        for ( i = 0; i < *(unsigned __int16 *)(v5 + 1552); ++i )
        {
          v13 = v14 + ((unsigned __int64)i << 7);
          result = v13 + 8;
          if ( a2 == v13 + 8 )
            goto LABEL_20;
        }
      }
      v17 = *(_QWORD *)(v5 + 1400);
      if ( v17 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(v5 + 1554); ++j )
        {
          v13 = v17 + ((unsigned __int64)j << 7);
          result = v13 + 8;
          if ( a2 == v13 + 8 )
            goto LABEL_20;
        }
      }
      for ( k = 0; k < 2; ++k )
      {
        v21 = v5 + ((unsigned __int64)k << 7);
        result = v21 + 1144;
        if ( a2 == v21 + 1144 )
        {
          v13 = v21 + 1136;
          goto LABEL_20;
        }
      }
      return result;
    }
    v13 = v5 + 1008;
LABEL_20:
    if ( v13 )
    {
      *(_BYTE *)v13 = 0;
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        if ( (*(_BYTE *)(v13 + 1) & 1) != 0 )
        {
          return NVMeControllerReclaimLocalCommand(v5, v13);
        }
        else if ( (*(_BYTE *)(v13 + 1) & 2) != 0 )
        {
          return StorPortExtendedFunction(50LL, v5, 0LL, 0LL);
        }
        else
        {
          NVMeFreeDmaBuffer(v5, 0x2000LL, a2 + 56, *(_QWORD *)(v13 + 104));
          return NVMeFreePool(v5);
        }
      }
    }
    return result;
  }
  v7 = *(_QWORD *)(a1 + 1392);
  if ( v7 )
  {
    v8 = *(unsigned __int16 *)(a1 + 1552);
    for ( m = 0; m < v8; ++m )
    {
      if ( a2 == v7 + ((unsigned __int64)m << 7) + 8 )
      {
LABEL_17:
        a1 = v5;
        goto LABEL_18;
      }
    }
  }
  v10 = *(_QWORD *)(v5 + 1400);
  if ( v10 )
  {
    for ( n = 0; n < *(unsigned __int16 *)(v5 + 1554); ++n )
    {
      if ( a2 == v10 + ((unsigned __int64)n << 7) + 8 )
        goto LABEL_17;
    }
  }
  for ( ii = 0; ii < 2; ++ii )
  {
    if ( a2 == v5 + ((unsigned __int64)ii << 7) + 1144 )
      goto LABEL_17;
  }
  if ( (*(_DWORD *)(v5 + 4064) & 0x10000) != 0 && *(_DWORD *)(GetSrbExtension(a2) + 4220) )
    StorPortExtendedFunction(127LL, v5, a2, v19);
  if ( a3 )
    return StorPortNotification(4104LL, v5, a2);
  else
    return StorPortNotification(0LL, v5, a2);
}
