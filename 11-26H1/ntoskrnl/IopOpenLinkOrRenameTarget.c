/*
 * XREFs of IopOpenLinkOrRenameTarget @ 0x1409842DC
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     IopGetBasicInformationFile @ 0x1409855F8 (IopGetBasicInformationFile.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409856E0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall IopOpenLinkOrRenameTarget(HANDLE *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  __int64 v6; // r12
  bool v7; // zf
  PVOID v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  char v12; // al
  char v13; // cl
  int v14; // ecx
  _QWORD *FileObjectExtension; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  BOOL v19; // esi
  int v20; // edi
  NTSTATUS v21; // ebx
  struct _FILE_OBJECT *v22; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  HANDLE *v24; // rcx
  SIZE_T Length; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  __int16 Src; // [rsp+90h] [rbp-70h] BYREF
  _BYTE BugCheckParameter4[22]; // [rsp+92h] [rbp-6Eh] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  _WORD v32[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v33; // [rsp+BCh] [rbp-44h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE *v36; // [rsp+D0h] [rbp-30h]
  int v37[2]; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v38; // [rsp+E0h] [rbp-20h]
  _WORD *v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F4h] [rbp-Ch]
  __int128 v42; // [rsp+F8h] [rbp-8h]
  int v43[4]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v44; // [rsp+118h] [rbp+18h]
  __int128 v45; // [rsp+128h] [rbp+28h]
  __int64 v46; // [rsp+138h] [rbp+38h]

  v36 = a1;
  v46 = 0LL;
  Handle = 0LL;
  v6 = a2;
  Object = 0LL;
  v7 = (a4->Flags & 0x800) == 0;
  v37[1] = 0;
  *(_OWORD *)v43 = 0LL;
  v8 = 0LL;
  v41 = 0;
  v33 = 0;
  HandleInformation = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  if ( v7 )
  {
    result = IopGetBasicInformationFile(a4);
    if ( (int)result < 0 )
      return result;
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( v10 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      LOBYTE(a2) = 1;
      result = IoConvertFileHandleToKernelHandle(v10, a2, 0LL);
      if ( (int)result < 0 )
        return result;
      v8 = Object;
    }
    else
    {
      v8 = *(PVOID *)(a3 + 8);
    }
  }
  v11 = *(_QWORD *)(v6 + 184);
  v32[0] = *(_WORD *)(a3 + 16);
  v32[1] = v32[0];
  v34 = a3 + 20;
  v12 = ~(unsigned __int8)(a4->Flags >> 11);
  v37[0] = 48;
  v38 = v8;
  v13 = ~*(_BYTE *)(v11 - 70);
  Src = 40;
  v31 = 1LL;
  v14 = v12 & 0x40 | ((v13 & 1) << 10) | 0x200;
  v39 = v32;
  FileObjectExtension = a4->FileObjectExtension;
  v40 = v14;
  v42 = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  if ( FileObjectExtension )
  {
    v16 = (_QWORD *)FileObjectExtension[2];
    if ( v16 )
      *(_QWORD *)&BugCheckParameter4[14] = *v16;
  }
  v17 = a4->FileObjectExtension;
  if ( v17 )
    v18 = v17[1];
  else
    v18 = 0LL;
  v30 = v18;
  v19 = (*(_BYTE *)(v11 - 70) & 1) == 0;
  v20 = *(_QWORD *)&BugCheckParameter4[14] != 0LL;
  if ( !*(_QWORD *)&BugCheckParameter4[6] )
    goto LABEL_12;
  v21 = FsRtlpPrepareExtraCreateParametersForCreate(*(ULONG_PTR *)&BugCheckParameter4[6]);
  if ( v21 >= 0 )
  {
    v18 = v30;
LABEL_12:
    if ( v18 )
      v20 |= 4u;
    LODWORD(Length) = 0;
    v21 = IopCreateFile(
            (int)&Handle,
            1048578,
            (int)v37,
            (int)v43,
            0LL,
            0,
            7,
            1,
            0x4000,
            0LL,
            Length,
            0,
            0LL,
            v19 | 0x104u,
            v20,
            &Src);
    if ( v21 >= 0 )
    {
      Object = 0LL;
      v21 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, &HandleInformation);
      if ( v21 < 0 )
      {
        ObCloseHandle(Handle, 0);
      }
      else
      {
        v22 = (struct _FILE_OBJECT *)Object;
        ObfDereferenceObject(Object);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v22);
        if ( RelatedDeviceObject == IoGetRelatedDeviceObject(a4) )
        {
          v24 = v36;
          *(_QWORD *)(v11 - 48) = v22;
          v21 = 0;
          *v24 = Handle;
        }
        else
        {
          ObCloseHandle(Handle, 0);
          v21 = -1073741612;
        }
      }
    }
  }
  if ( v8 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      ObCloseHandle(v8, 0);
  }
  return (unsigned int)v21;
}
