/*
 * XREFs of RtlFindMessage @ 0x180019840
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x18001B110 (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS v5; // esi
  NTSTATUS result; // eax
  int v9; // edx
  ULONG *i; // rax
  _MESSAGE_RESOURCE_ENTRY *v12; // rdx
  ULONG v13; // ebx
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  v5 = 0;
  v17 = MessageTableId;
  v19 = MessageLanguageId;
  v15 = 0LL;
  v16 = 0LL;
  v18 = 1LL;
  v20 = MessageId;
  result = LdrpSearchResourceSection_U(DllHandle, (__int64)&v15);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(DllHandle);
    if ( result >= 0 )
    {
      v9 = *v16;
      for ( i = v16 + 1; ; i += 3 )
      {
        if ( !v9-- )
          return -1073741559;
        if ( MessageId >= *i && MessageId <= i[1] )
          break;
      }
      v12 = (_MESSAGE_RESOURCE_ENTRY *)((char *)v16 + i[2]);
      v13 = MessageId - *i;
      while ( v13-- )
      {
        v12 = (_MESSAGE_RESOURCE_ENTRY *)((char *)v12 + v12->Length);
        if ( v12 > (_MESSAGE_RESOURCE_ENTRY *)((char *)v16 + 0xFFFFFFFFLL) )
          return -1073741559;
      }
      *MessageEntry = v12;
      return v5;
    }
  }
  return result;
}
