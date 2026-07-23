/*
 * XREFs of IopGetFileVolumeNameInformation @ 0x1404D9D58
 * Callers:
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObQueryNameString @ 0x140922620 (ObQueryNameString.c)
 */

__int64 __fastcall IopGetFileVolumeNameInformation(void *a1, void *a2, _DWORD *a3, int a4, char a5)
{
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  unsigned int Length; // r15d
  void *v11; // rcx
  void *v12; // rcx
  _DWORD Src[2]; // [rsp+20h] [rbp-258h] BYREF
  __int64 v15; // [rsp+28h] [rbp-250h]
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-248h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+40h] [rbp-238h] BYREF

  ReturnLength[0] = 0;
  v7 = a4 - 4;
  Src[1] = 0;
  v8 = ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    Length = ObjectNameInfo.Name.Length;
    if ( v7 < ObjectNameInfo.Name.Length )
      Length = v7 & 0xFFFFFFFE;
    v9 = v7 < ObjectNameInfo.Name.Length ? 0x80000005 : 0;
    Src[0] = v9;
    v15 = Length + 4;
    if ( a5 )
      RtlWriteULongToUser(a3, ObjectNameInfo.Name.Length);
    else
      *a3 = ObjectNameInfo.Name.Length;
    v11 = a3 + 1;
    if ( a5 )
      RtlCopyToUser(v11, ObjectNameInfo.Name.Buffer, Length);
    else
      RtlCopyVolatileMemory(v11, ObjectNameInfo.Name.Buffer, Length);
    v12 = a2;
    if ( a5 )
      goto LABEL_9;
LABEL_15:
    RtlCopyVolatileMemory(a2, Src, 0x10uLL);
    return v9;
  }
  Src[0] = v8;
  v15 = 0LL;
  v12 = a2;
  if ( !a5 )
    goto LABEL_15;
LABEL_9:
  RtlCopyToUser(v12, Src, 0x10uLL);
  return v9;
}
