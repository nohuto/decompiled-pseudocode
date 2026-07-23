/*
 * XREFs of NtCreateKeyedEvent @ 0x14084BCB0
 * Callers:
 *     DifNtCreateKeyedEventWrapper @ 0x1406755C0 (DifNtCreateKeyedEventWrapper.c)
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  ULONG v4; // esi
  int v5; // r14d
  PHANDLE v7; // rbx
  char PreviousMode; // di
  NTSTATUS result; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v12[5]; // [rsp+68h] [rbp-30h] BYREF

  v4 = Flags;
  v5 = (int)ObjectAttributes;
  v7 = KeyedEventHandle;
  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12[1] = 1LL;
    ProbeForRead(KeyedEventHandle, 1uLL, 8u);
  }
  *v7 = 0LL;
  if ( v4 )
    return -1073741582;
  LOBYTE(Flags) = PreviousMode;
  LOBYTE(KeyedEventHandle) = PreviousMode;
  result = ObCreateObjectEx((_DWORD)KeyedEventHandle, (_DWORD)ExpKeyedEventObjectType, v5, Flags);
  if ( result >= 0 )
  {
    v10 = 8LL;
    v11 = 64LL;
    do
    {
      *(_QWORD *)(v10 - 8) = 0LL;
      *(_QWORD *)(v10 + 8) = v10;
      *(_QWORD *)v10 = v10;
      v10 += 24LL;
      --v11;
    }
    while ( v11 );
    result = ObInsertObjectEx(0LL, 0LL, DesiredAccess, 0LL, 0, 0LL, v12);
    if ( result >= 0 )
      *v7 = (HANDLE)v12[0];
  }
  return result;
}
