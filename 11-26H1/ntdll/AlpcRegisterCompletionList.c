/*
 * XREFs of AlpcRegisterCompletionList @ 0x180103B20
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x180160010 (NtAlpcSetInformation.c)
 */

NTSTATUS __cdecl AlpcRegisterCompletionList(
        HANDLE PortHandle,
        PALPC_COMPLETION_LIST_HEADER Buffer,
        ULONG Size,
        ULONG ConcurrencyCount,
        ULONG AttributeFlags)
{
  NTSTATUS result; // eax
  PALPC_COMPLETION_LIST_HEADER PortInformation; // [rsp+20h] [rbp-28h] BYREF
  ULONG v8; // [rsp+28h] [rbp-20h]
  ULONG v9; // [rsp+2Ch] [rbp-1Ch]
  ULONG v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v9 = ConcurrencyCount;
  PortInformation = Buffer;
  v8 = Size;
  v11 = 0;
  v10 = AttributeFlags;
  result = NtAlpcSetInformation(PortHandle, AlpcRegisterCompletionListInformation, &PortInformation, 0x18u);
  if ( result >= 0 )
  {
    *((_QWORD *)&Buffer->PostCount + 8) = 0LL;
    return 0;
  }
  return result;
}
