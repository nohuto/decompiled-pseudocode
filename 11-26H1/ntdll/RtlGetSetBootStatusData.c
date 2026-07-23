/*
 * XREFs of RtlGetSetBootStatusData @ 0x180124100
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetSetBootStatusData @ 0x18011595C (RtlpGetSetBootStatusData.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN Read,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v11; // rcx
  char v12; // al
  _BYTE *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  _BYTE v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v18[208]; // [rsp+40h] [rbp-C0h] BYREF

  v16[0] = 0;
  LODWORD(v17) = 0;
  memset_thunk_772440563353939046(v18, 0, 0xC8uLL);
  if ( Read )
    return RtlpGetSetBootStatusData(FileHandle, 1, DataClass, Buffer, BufferSize, ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0xFu, v16, 1u, 0LL);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 1, DataClass, v18, 0xC8u, 0LL);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, 0, DataClass, Buffer, BufferSize, &v17);
      if ( result >= 0 )
      {
        v11 = (unsigned int)v17;
        if ( ReturnLength )
          *ReturnLength = v17;
        v12 = v16[0];
        if ( (_DWORD)v11 )
        {
          v13 = v18;
          v14 = v11;
          do
          {
            v12 += *v13++;
            --v14;
          }
          while ( v14 );
          v16[0] = v12;
          v15 = v11;
          do
          {
            v12 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v15;
          }
          while ( v15 );
          v16[0] = v12;
        }
        return RtlpGetSetBootStatusData(FileHandle, 0, 0xFu, v16, 1u, 0LL);
      }
    }
  }
  return result;
}
