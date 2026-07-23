/*
 * XREFs of WmipTranslateFileHandle @ 0x140829CD0
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140AEB244 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipGetFilePDO @ 0x140B30428 (WmipGetFilePDO.c)
 */

__int64 __fastcall WmipTranslateFileHandle(__int64 *a1, unsigned int *a2)
{
  unsigned int *v2; // r12
  __int64 v4; // rcx
  NTSTATUS FilePDO; // ebx
  void *v6; // rcx
  unsigned __int16 Length; // r13
  unsigned int v8; // r15d
  wchar_t *Buffer; // rdx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+40h] BYREF
  PVOID v14; // [rsp+88h] [rbp+48h] BYREF

  v2 = a2;
  v12 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = *a1;
  LOBYTE(a2) = 1;
  v14 = 0LL;
  UnicodeString.Buffer = 0LL;
  FilePDO = WmipGetFilePDO(v4, a2, &v14);
  if ( FilePDO < 0 )
    return (unsigned int)FilePDO;
  v6 = (void *)a1[1];
  Object = 0LL;
  FilePDO = ObReferenceObjectByHandle(v6, 1u, WmipGuidObjectType, 1, &Object, 0LL);
  if ( FilePDO >= 0 )
  {
    FilePDO = WmipGetGuidObjectInstanceInfo(Object, v14, &UnicodeString, &v12);
    if ( FilePDO < 0 )
    {
LABEL_12:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_14;
    }
    Length = UnicodeString.Length;
    v8 = UnicodeString.Length + 26;
    if ( *v2 >= v8 )
    {
      Buffer = UnicodeString.Buffer;
      *((_DWORD *)a1 + 4) = v12;
      *((_WORD *)a1 + 10) = Length + 4;
      memmove((char *)a1 + 22, Buffer, Length);
      *v2 = v8;
      *(_DWORD *)((char *)a1 + 2 * ((unsigned __int64)Length >> 1) + 22) = 0;
    }
    else
    {
      if ( *v2 < 4 )
      {
        FilePDO = -1073741823;
        goto LABEL_10;
      }
      *(_DWORD *)a1 = v8;
      *v2 = 4;
    }
    FilePDO = 0;
LABEL_10:
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    goto LABEL_12;
  }
LABEL_14:
  if ( v14 )
    ObfDereferenceObject(v14);
  return (unsigned int)FilePDO;
}
