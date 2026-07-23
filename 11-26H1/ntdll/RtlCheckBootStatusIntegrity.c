/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x180141940
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlBootStatusItemInfo @ 0x180141908 (RtlBootStatusItemInfo.c)
 *     NtReadFile @ 0x18015EF00 (NtReadFile.c)
 */

NTSTATUS __cdecl RtlCheckBootStatusIntegrity(HANDLE FileHandle, PBOOLEAN Verified)
{
  char v4; // r14
  NTSTATUS v5; // ebx
  PVOID Buffer; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v10; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF
  SIZE_T Size; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0;
  v10 = 0;
  LODWORD(Size) = 0;
  ByteOffset.QuadPart = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0;
  v5 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Size, 4u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlBootStatusItemInfo(0xFu, &v14, &v10);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)Size < v14 + v10 || (unsigned int)Size > 0x800 )
      {
        *Verified = 0;
      }
      else
      {
        Buffer = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
        if ( Buffer )
        {
          v5 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Size, &ByteOffset, 0LL);
          if ( v5 >= 0 )
          {
            v7 = (unsigned int)Size;
            if ( IoStatusBlock.Information == (unsigned int)Size )
            {
              if ( (_DWORD)Size )
              {
                v8 = Buffer;
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
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Buffer);
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
