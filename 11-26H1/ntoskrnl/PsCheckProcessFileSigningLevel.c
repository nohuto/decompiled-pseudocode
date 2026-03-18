/*
 * XREFs of PsCheckProcessFileSigningLevel @ 0x1407F23D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     ZwCreateSectionEx @ 0x140724CB0 (ZwCreateSectionEx.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PsQuerySectionSignatureInformation @ 0x140A410A0 (PsQuerySectionSignatureInformation.c)
 *     SeCompareSigningLevels @ 0x140A88910 (SeCompareSigningLevels.c)
 *     PsReferenceProcessFilePointer @ 0x140AAE560 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall PsCheckProcessFileSigningLevel(__int64 a1, unsigned __int8 a2)
{
  int v2; // r15d
  PVOID v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  signed int Section; // ebx
  int v8; // eax
  _QWORD *v9; // rdi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  __int128 v16; // [rsp+60h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  char v19; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  v19 = 0;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v4 = 0LL;
  Object = 0LL;
  v16 = 0LL;
  FileHandle = (HANDLE)-1LL;
  if ( (int)PsQuerySectionSignatureInformation(a1, &v19) < 0 )
    goto LABEL_2;
  LOBYTE(v6) = v19;
  LOBYTE(v5) = v2;
  if ( (unsigned int)SeCompareSigningLevels(v6, v5) )
  {
    Section = 0;
    goto LABEL_21;
  }
  if ( *(_QWORD *)(a1 + 816) )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) )
    {
LABEL_2:
      Section = -1073741558;
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
  Section = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_17;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v4 = Object;
  Section = v10;
  if ( v10 < 0 )
    goto LABEL_17;
  if ( v9[3] != *((_QWORD *)Object + 3) )
  {
    Section = -1073741275;
    goto LABEL_17;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&v16 = 3LL;
  DWORD2(v16) = v2;
  Section = ZwCreateSectionEx((__int64)&Handle, 983071LL);
  if ( Section < 0 )
    goto LABEL_17;
  if ( (int)PsQuerySectionSignatureInformation(a1, &v19) >= 0 )
  {
    LOBYTE(v12) = v19;
    LOBYTE(v11) = v2;
    Section = (unsigned int)SeCompareSigningLevels(v12, v11) == 0 ? 0xC0000428 : 0;
    goto LABEL_17;
  }
LABEL_7:
  Section = -1073741558;
LABEL_17:
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_21:
  if ( (char *)FileHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ObCloseHandle(FileHandle, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)Section;
}
