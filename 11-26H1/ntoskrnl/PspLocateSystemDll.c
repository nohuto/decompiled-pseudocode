/*
 * XREFs of PspLocateSystemDll @ 0x1407F3EEC
 * Callers:
 *     PsLocateSystemDlls @ 0x1407F3B98 (PsLocateSystemDlls.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwSystemDebugControl @ 0x14072B9E0 (ZwSystemDebugControl.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PspMapSystemDll @ 0x140A08A9C (PspMapSystemDll.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x140A08E48 (MiDoesImageContainFunctionOverrideFixups.c)
 *     ObInitializeFastReference @ 0x140A7BD9C (ObInitializeFastReference.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 */

NTSTATUS __fastcall PspLocateSystemDll(__int64 *a1, int a2)
{
  NTSTATUS result; // eax
  int v5; // r9d
  int SpecialImageSection; // eax
  NTSTATUS v7; // eax
  PVOID v8; // rdi
  int SectionInformation; // eax
  __int64 v10; // rcx
  int v11; // eax
  ULONG_PTR v12; // r9
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-71h] BYREF
  __int128 InputBuffer; // [rsp+68h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v19[64]; // [rsp+90h] [rbp-19h] BYREF
  int v20; // [rsp+D0h] [rbp+27h]
  HANDLE FileHandle; // [rsp+110h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+120h] [rbp+77h] BYREF
  PVOID Object; // [rsp+128h] [rbp+7Fh] BYREF

  v15 = 0LL;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  memset_0(v19, 0, 0x48uLL);
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = *((_OWORD *)a1 + 1);
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 2);
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    LOBYTE(v5) = 12;
    SpecialImageSection = MmCreateSpecialImageSection(
                            (unsigned int)&Handle,
                            (unsigned int)&ObjectAttributes,
                            0,
                            v5,
                            (__int64)FileHandle,
                            a2 | 2u);
    if ( SpecialImageSection < 0 )
      KeBugCheckEx(0x6Bu, SpecialImageSection, 3uLL, 0LL, 0LL);
    ObCloseHandle(FileHandle, 0);
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x6Bu, v7, 4uLL, 0LL, 0LL);
    ObCloseHandle(Handle, 0);
    v8 = Object;
    SectionInformation = MmGetSectionInformation(Object, 2LL, &v15);
    if ( SectionInformation < 0 )
      KeBugCheckEx(0x6Bu, SectionInformation, 8uLL, 0LL, 0LL);
    v10 = *a1;
    a1[7] = v15;
    ObInitializeFastReference(v10, v8);
    *(_QWORD *)(*a1 + 8) = 0LL;
    if ( (a1[1] & 0x21) != 0 )
    {
      v11 = MmGetSectionInformation(v8, 4LL, v19);
      v12 = v11;
      if ( v11 < 0
        || (v20 & 0x200) == 0
        || (v13 = MiSectionControlArea((__int64)v8), (*(_DWORD *)(v13 + 56) & 0x20) == 0)
        || !(unsigned int)MiDoesImageContainFunctionOverrideFixups(v13) )
      {
        KeBugCheckEx(0x6Bu, v12, 9uLL, 0LL, 0LL);
      }
    }
    v14 = PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, a1, 0LL, 1LL);
    if ( v14 < 0 )
      KeBugCheckEx(0x6Bu, v14, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
