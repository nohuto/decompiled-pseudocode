/*
 * XREFs of IopPowerDispatch @ 0x1403FD5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 */

__int64 __fastcall IopPowerDispatch(__int64 a1, IRP *a2)
{
  unsigned int Status; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG Options; // edx
  ULONG LowPart; // ebx
  __int64 v8; // rbp
  KIRQL v9; // al
  _DWORD *SecurityContext; // rcx
  int WriteOperationCount_high; // eax

  Status = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      goto LABEL_12;
    case 1u:
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      WriteOperationCount_high = HIDWORD(stru_140F10828.WriteOperationCount);
      *SecurityContext = HIDWORD(stru_140F10828.WriteOperationCount);
      SecurityContext[1] = WriteOperationCount_high;
      SecurityContext[2] = WriteOperationCount_high;
      break;
    case 2u:
      Options = CurrentStackLocation->Parameters.Create.Options;
      if ( Options )
      {
        if ( Options == 1 )
        {
          LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
          v8 = *(_QWORD *)(a1 + 312);
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10070.ResourceIndex);
          if ( ((*(_DWORD *)(v8 + 16) >> 4) & 0xF) != LowPart )
            *(_DWORD *)(v8 + 16) ^= ((unsigned __int8)*(_DWORD *)(v8 + 16) ^ (unsigned __int8)(16 * LowPart)) & 0xF0;
          KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F10070.ResourceIndex, v9);
        }
        else
        {
          Status = -1073741637;
        }
      }
      if ( Status != -1073741637 )
        break;
LABEL_12:
      Status = a2->IoStatus.Status;
      goto LABEL_11;
    case 3u:
      break;
    default:
      goto LABEL_12;
  }
  a2->IoStatus.Status = Status;
LABEL_11:
  IofCompleteRequest(a2, 0);
  return Status;
}
