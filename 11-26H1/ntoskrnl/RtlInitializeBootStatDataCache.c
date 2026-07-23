/*
 * XREFs of RtlInitializeBootStatDataCache @ 0x14061CE34
 * Callers:
 *     PopBootStatSet @ 0x140ACD7B0 (PopBootStatSet.c)
 *     RtlLockBootStatusData @ 0x140B14C40 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140B53F84 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 RtlInitializeBootStatDataCache()
{
  NTSTATUS v0; // edx
  _XSAVE_FORMAT *Pool2; // rax
  unsigned int v2; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  ULONG Buffer; // [rsp+70h] [rbp+10h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp+18h] BYREF

  IoStatusBlock = 0LL;
  Buffer = 0;
  if ( NormalizationListLock.StateSaveArea )
  {
    return 0;
  }
  else
  {
    ByteOffset.QuadPart = 0LL;
    v0 = ZwReadFile(
           *(HANDLE *)&NormalizationListLock.CurrentRunTime,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           &Buffer,
           4u,
           &ByteOffset,
           0LL);
    if ( v0 >= 0 )
    {
      if ( Buffer && Buffer <= 0x800 )
      {
        Pool2 = (_XSAVE_FORMAT *)ExAllocatePool2(0x100uLL);
        NormalizationListLock.StateSaveArea = Pool2;
        if ( Pool2 )
        {
          v0 = ZwReadFile(
                 *(HANDLE *)&NormalizationListLock.CurrentRunTime,
                 0LL,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 Pool2,
                 Buffer,
                 &ByteOffset,
                 0LL);
          if ( v0 >= 0 )
          {
            v2 = v0;
            if ( IoStatusBlock.Information != Buffer )
              return (unsigned int)-1073741823;
            return v2;
          }
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  return (unsigned int)v0;
}
