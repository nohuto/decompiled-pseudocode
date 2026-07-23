/*
 * XREFs of LdrGetDllFullName @ 0x18003D1A0
 * Callers:
 *     GetModuleFullPathNameUnicode @ 0x180020630 (GetModuleFullPathNameUnicode.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v3; // edi
  NTSTATUS result; // eax
  PVOID v5; // rbx
  unsigned __int16 *v6; // rsi
  unsigned int MaximumLength; // eax
  const void *v8; // rdx
  wchar_t *Buffer; // r15
  unsigned __int64 v10; // rbp
  _QWORD *SubSystemTib; // rax
  unsigned __int16 *v12; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = 0;
  if ( DllHandle )
  {
    result = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v13);
    v5 = BaseAddress;
    v3 = result;
    if ( !BaseAddress )
      return result;
    v6 = (unsigned __int16 *)((char *)BaseAddress + 72);
  }
  else
  {
    v5 = (PVOID)LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    v6 = (unsigned __int16 *)(LdrpImageEntry + 72);
    if ( SubSystemTib )
    {
      v12 = (unsigned __int16 *)SubSystemTib[1];
      if ( v12 )
        v6 = v12;
    }
  }
  if ( v5 )
  {
    if ( v6 )
    {
      MaximumLength = FullDllName->MaximumLength;
      v8 = (const void *)*((_QWORD *)v6 + 1);
      if ( *v6 <= (unsigned __int16)MaximumLength )
        MaximumLength = *v6;
      Buffer = FullDllName->Buffer;
      v10 = MaximumLength;
      FullDllName->Length = MaximumLength;
      memmove(Buffer, v8, MaximumLength);
      if ( (unsigned __int64)FullDllName->Length + 2 <= FullDllName->MaximumLength )
        Buffer[v10 >> 1] = 0;
    }
    else
    {
      FullDllName->Length = 0;
    }
    if ( *v6 > FullDllName->MaximumLength )
      v3 = -1073741789;
    if ( v5 != (PVOID)LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v3;
}
