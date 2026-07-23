/*
 * XREFs of EtwpWriteAppStateChange @ 0x1409D1170
 * Callers:
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpWriteAppStateChange(__int64 a1)
{
  NTSTATUS result; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  char *v4; // [rsp+58h] [rbp-28h]
  int v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+64h] [rbp-1Ch]
  __int64 v7; // [rsp+68h] [rbp-18h]
  __int64 v8; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_140E08F40 > 5 && (qword_140E08F50 & 0x200000000001LL) != 0 )
  {
    result = qword_140E08F58 & 1;
    if ( (qword_140E08F58 & 0x200000000001LL) == qword_140E08F58 )
    {
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140E08F48;
      v7 = a1;
      EventDescriptor.Keyword = 0x200000000001LL;
      v8 = 98LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_140E08F48;
      v4 = byte_140055375;
      UserData.Reserved = 2;
      v5 = 319;
      v6 = 1;
      return EtwWriteTransfer(qword_140E08F60, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
