/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x140020A30
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiUpdatePriorityTables @ 0x1400209D0 (VidSchiUpdatePriorityTables.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14002C5D8 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14002B678 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 *v9; // rdx
  __int64 result; // rax
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r9
  char v21; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 788));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3012));
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1844));
  v8 = *(_DWORD *)(a1 + 48);
  if ( v8 != 4 && v8 != 5 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 1848));
  if ( !*(_DWORD *)(a1 + 48) && (*(_DWORD *)(a1 + 72) & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *(unsigned int *)(a1 + 168) + 3448) + 3244LL));
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 792));
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 788));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3008));
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 784));
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  WdLogSingleEntry5(4LL, a1, *(_QWORD *)(a1 + 112), v2, *(_QWORD *)(v2 + 152), *(_QWORD *)(v2 + 168));
  WdLogGlobalForLineNumber = 16306;
  v9 = *(__int64 **)(v2 + 680);
  result = a1 + 32;
  if ( *v9 != v2 + 672 )
    __fastfail(3u);
  *(_QWORD *)result = v2 + 672;
  *(_QWORD *)(a1 + 40) = v9;
  *v9 = result;
  *(_QWORD *)(v2 + 680) = result;
  if ( *(_DWORD *)(v2 + 788) == 1 )
  {
    *(_QWORD *)(v2 + 656) = a1;
    v11 = *(_DWORD *)(a1 + 48);
    if ( v11 == 5 || (v12 = 0, v11 == 4) )
      v12 = 1;
    v13 = v12 | *(_DWORD *)(v2 + 652) & 0xFFFFFFFE;
    v14 = 0;
    *(_DWORD *)(v2 + 652) = v13;
    if ( *(_DWORD *)(a1 + 48) == 3 )
      v14 = 2;
    v15 = v13 & 0xFFFFFFFD | v14;
    v16 = 0;
    *(_DWORD *)(v2 + 652) = v15;
    v17 = 0;
    if ( *(_DWORD *)(a1 + 48) == 7 )
      v16 = 4;
    v18 = v15 & 0xFFFFFFFB | v16;
    *(_DWORD *)(v2 + 652) = v18;
    if ( *(_DWORD *)(a1 + 48) == 6 )
      v17 = 8;
    *(_DWORD *)(v2 + 652) = v18 & 0xFFFFFFF7 | v17;
    result = *(unsigned int *)(v2 + 192);
    if ( (result & 0x200) == 0 )
    {
      result = *(unsigned int *)(v2 + 192);
      if ( (result & 8) == 0 )
      {
        result = *(unsigned int *)(v2 + 192);
        if ( (result & 4) == 0 )
        {
          result = *(unsigned int *)(v2 + 192);
          if ( (result & 0x10) == 0 )
          {
            result = *(unsigned int *)(v2 + 192);
            if ( (result & 0x40) == 0 )
            {
              result = *(unsigned int *)(v2 + 192);
              if ( (result & 0x80u) == 0LL )
              {
                result = *(unsigned int *)(v2 + 192);
                if ( (result & 0x100) == 0 )
                {
                  result = *(unsigned int *)(v2 + 192);
                  if ( (result & 0x20) == 0 )
                  {
                    if ( !*(_DWORD *)(v2 + 192)
                      && _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 444), 0, 0) >= 2 )
                    {
                      v19 = *(_QWORD *)(v2 + 96);
                      v21 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v19 + 24) + 32LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v19 + 24) + 40LL),
                        &v21);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 16400LL);
                    *a2 = result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( bTracingEnabled && (byte_14008A201 & 2) != 0 )
  {
    v20 = *(_QWORD *)(v2 + 56);
    if ( !v20 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v20) = v2;
    return McTemplateK0piixqq_EtwWriteTransfer(
             *(_DWORD *)(v2 + 444),
             *(_QWORD *)(v5 + 2136),
             *(_QWORD *)(v2 + 448),
             v20,
             *(_QWORD *)(v2 + 456),
             *(_QWORD *)(v2 + 448),
             *(_QWORD *)(v5 + 2136),
             *(_DWORD *)(v2 + 444),
             3);
  }
  return result;
}
