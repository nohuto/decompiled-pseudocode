/*
 * XREFs of CmpDoFileRead @ 0x14048E1D4
 * Callers:
 *     CmpFileRead @ 0x140AF2770 (CmpFileRead.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmpCreateEvent @ 0x1408BD094 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileRead(HANDLE FileHandle, __int64 a2, ULONG a3, char *a4, ULONG a5, int a6, __int64 a7)
{
  ULONG v7; // edi
  ULONG v9; // r14d
  int v10; // eax
  NTSTATUS Status; // ebx
  char *Buffer; // rcx
  ULONG Length; // edi
  int Information; // ecx
  __int64 result; // rax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h]
  HANDLE Event; // [rsp+60h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-18h] BYREF
  ULONG v21; // [rsp+C0h] [rbp+40h]

  v21 = a3;
  v7 = a3;
  ByteOffset.QuadPart = 0LL;
  Event = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0x10000000;
  v10 = CmpCreateEvent(SynchronizationEvent);
  Status = v10;
  if ( v10 >= 0 )
  {
    Buffer = a4;
    while ( a5 )
    {
      ByteOffset.LowPart = v7;
      Length = v9;
      if ( a5 <= v9 )
        Length = a5;
      ByteOffset.HighPart = 0;
      Status = ZwReadFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 || v9 <= 0x10000 )
      {
        a5 -= Length;
        v21 = Length + ByteOffset.LowPart;
        Buffer = &a4[Length];
        a4 = Buffer;
        if ( Status < 0 )
        {
          if ( a7 )
          {
            *(_DWORD *)(a7 + 208) = 1;
            *(_QWORD *)(a7 + 216) = FileHandle;
            *(_DWORD *)(a7 + 224) = Status;
          }
          LODWORD(PspSiloMonitorLock.WriteOperationCount) = 1;
          PspSiloMonitorLock.OtherOperationCount = (__int64)FileHandle;
          LODWORD(PspSiloMonitorLock.ReadTransferCount) = Status;
          goto LABEL_17;
        }
        if ( IoStatusBlock.Information != Length )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          ZwClose(Event);
          Information = IoStatusBlock.Information;
          if ( a7 )
          {
            *(_DWORD *)(a7 + 208) = 1;
            *(_QWORD *)(a7 + 216) = FileHandle;
            *(_DWORD *)(a7 + 224) = Information - Length;
          }
          LODWORD(PspSiloMonitorLock.WriteOperationCount) = 1;
          LODWORD(PspSiloMonitorLock.ReadTransferCount) = Information - Length;
          result = 3221225489LL;
          PspSiloMonitorLock.OtherOperationCount = (__int64)FileHandle;
          return result;
        }
      }
      else
      {
        Buffer = a4;
        v9 >>= 1;
      }
      v7 = v21;
    }
    Status = 0;
LABEL_17:
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    ZwClose(Event);
    return (unsigned int)Status;
  }
  SetFailureLocation(a7, 1, 12, v10, 16);
  return (unsigned int)Status;
}
