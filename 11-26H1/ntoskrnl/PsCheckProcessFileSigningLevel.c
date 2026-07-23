/*
 * XREFs of PsCheckProcessFileSigningLevel @ 0x1407F7F30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwCreateSectionEx @ 0x140729880 (ZwCreateSectionEx.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsQuerySectionSignatureInformation @ 0x1409FCAC0 (PsQuerySectionSignatureInformation.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 *     PsReferenceProcessFilePointer @ 0x140AA7550 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall PsCheckProcessFileSigningLevel(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // r15d
  PVOID v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  int v8; // eax
  _QWORD *v9; // rdi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-21h] BYREF
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+60h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  char v19; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  v19 = 0;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  SectionHandle = 0LL;
  v4 = 0LL;
  Object = 0LL;
  ExtendedParameters = 0LL;
  FileHandle = (HANDLE)-1LL;
  if ( (int)PsQuerySectionSignatureInformation(a1, &v19) < 0 )
    goto LABEL_2;
  LOBYTE(v6) = v19;
  LOBYTE(v5) = v2;
  if ( (unsigned int)SeCompareSigningLevels(v6, v5) )
  {
    v7 = 0;
    goto LABEL_21;
  }
  if ( *(_QWORD *)(a1 + 816) )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) )
    {
LABEL_2:
      v7 = -1073741558;
      goto LABEL_21;
    }
    v9 = *(_QWORD **)(a1 + 816);
    PsReferenceSiloContext(v9);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
  }
  else
  {
    v8 = PsReferenceProcessFilePointer(a1, &Object);
    v9 = Object;
    if ( v8 < 0 )
      goto LABEL_7;
  }
  ObjectAttributes.ObjectName = *(PUNICODE_STRING *)(a1 + 848);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v7 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( v7 < 0 )
    goto LABEL_17;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v4 = Object;
  v7 = v10;
  if ( v10 < 0 )
    goto LABEL_17;
  if ( v9[3] != *((_QWORD *)Object + 3) )
  {
    v7 = -1073741275;
    goto LABEL_17;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)3LL;
  ExtendedParameters.ULong = v2;
  v7 = ZwCreateSectionEx(
         &SectionHandle,
         0xF001Fu,
         &ObjectAttributes,
         0LL,
         0x20u,
         0x1000000u,
         FileHandle,
         &ExtendedParameters,
         1u);
  if ( v7 < 0 )
    goto LABEL_17;
  if ( (int)PsQuerySectionSignatureInformation(a1, &v19) >= 0 )
  {
    LOBYTE(v12) = v19;
    LOBYTE(v11) = v2;
    v7 = (unsigned int)SeCompareSigningLevels(v12, v11) == 0 ? 0xC0000428 : 0;
    goto LABEL_17;
  }
LABEL_7:
  v7 = -1073741558;
LABEL_17:
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_21:
  if ( (char *)FileHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ObCloseHandle(FileHandle, 0);
  if ( SectionHandle )
    ObCloseHandle(SectionHandle, 0);
  return (unsigned int)v7;
}
