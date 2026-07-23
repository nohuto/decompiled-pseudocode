/*
 * XREFs of HalpEfiBugCheckAddPagesCallback @ 0x1405893F0
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 */

void __fastcall HalpEfiBugCheckAddPagesCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        unsigned int **ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  bool v4; // zf
  unsigned int *v6; // rsi
  unsigned int v7; // edi
  unsigned int MaximumProcessorCount; // r10d
  __int64 i; // r8
  __int64 v10; // r9
  int v11; // eax

  v4 = HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72] == 0;
  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  if ( !v4 && HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink )
  {
    if ( !*ReasonSpecificData )
    {
      *ReasonSpecificData = (unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[76];
      *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[76] = 0;
    }
    v6 = *ReasonSpecificData;
    v7 = **ReasonSpecificData;
LABEL_6:
    if ( v7 < 9 )
    {
      ++*v6;
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= MaximumProcessorCount )
        {
          ++v7;
          goto LABEL_6;
        }
        v10 = *((_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink + i);
        if ( v10 )
        {
          if ( v10 != -192 )
          {
            v11 = *(_DWORD *)(v10 + 224);
            if ( _bittest(&v11, v7) )
            {
              if ( HalEfiRuntimeServicesBlock[0] )
                break;
            }
          }
        }
      }
      *((_DWORD *)ReasonSpecificData + 2) = -2147483647;
      ReasonSpecificData[2] = (unsigned int *)HalEfiRuntimeServicesBlock[v7];
      ReasonSpecificData[3] = (unsigned int *)1;
    }
  }
}
