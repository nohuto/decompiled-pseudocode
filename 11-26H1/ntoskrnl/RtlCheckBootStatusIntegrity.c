/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x14080B218
 * Callers:
 *     PopBootStatCheckIntegrity @ 0x1407DEB68 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     RtlBootStatusItemInfo @ 0x140B06E38 (RtlBootStatusItemInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlCheckBootStatusIntegrity(HANDLE FileHandle, PBOOLEAN Verified)
{
  char v4; // r14
  int v5; // ebx
  void *Pool2; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v10; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF
  ULONG Buffer; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0;
  v10 = 0;
  Buffer = 0;
  ByteOffset.QuadPart = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0;
  v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlBootStatusItemInfo(15LL, &v14, &v10);
    if ( v5 >= 0 )
    {
      if ( Buffer < v14 + v10 || Buffer > 0x800 )
      {
        *Verified = 0;
      }
      else
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Buffer, &ByteOffset, 0LL);
          if ( v5 >= 0 )
          {
            v7 = Buffer;
            if ( IoStatusBlock.Information == Buffer )
            {
              if ( Buffer )
              {
                v8 = Pool2;
                do
                {
                  v4 += *v8++;
                  --v7;
                }
                while ( v7 );
              }
              *Verified = v4 == 0;
            }
            else
            {
              *Verified = 0;
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          return -1073741801;
        }
      }
    }
  }
  return v5;
}
