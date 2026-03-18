/*
 * XREFs of IopQueryNameInternal @ 0x1409FC134
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x1409FC050 (IoQueryFileDosDeviceName.c)
 *     IopQueryName @ 0x1409FC100 (IopQueryName.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToDosName @ 0x1409FB9E0 (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1409FC6D0 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryNameInternal(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned __int8 a7)
{
  struct _FILE_OBJECT *v8; // rdi
  UNICODE_STRING *v9; // r12
  char v10; // r13
  unsigned int v11; // esi
  UNICODE_STRING *v12; // r14
  _DWORD *p_Type; // rcx
  NTSTATUS NameStringMode; // edi
  UNICODE_STRING *v15; // rdi
  char v16; // cl
  _DWORD *v17; // r13
  UNICODE_STRING *v18; // r14
  struct _FILE_OBJECT *v19; // rcx
  NTSTATUS FileInformation; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // r8d
  char *v24; // r9
  __int64 v25; // rsi
  char *v26; // rsi
  __int16 v27; // si
  __int16 v28; // si
  unsigned int Length; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ecx
  UNICODE_STRING *Pool2; // rax
  const wchar_t *v35; // rdx
  int v36; // eax
  size_t v37; // r8
  __int64 v38; // [rsp+40h] [rbp-78h] BYREF
  int Buffer_high; // [rsp+4Ch] [rbp-6Ch]
  PVOID P; // [rsp+58h] [rbp-60h]
  void *v41; // [rsp+60h] [rbp-58h]
  _OWORD v42[5]; // [rsp+68h] [rbp-50h] BYREF
  bool v44; // [rsp+C8h] [rbp+10h]
  char v45; // [rsp+C8h] [rbp+10h]

  v8 = a1;
  LODWORD(v38) = 0;
  v9 = 0LL;
  P = 0LL;
  v44 = 0;
  v10 = 0;
  v42[0] = 0LL;
  v11 = 16;
  if ( a5 >= 0x10 )
    v11 = a5;
  if ( a7 == 1 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    P = Pool2;
    if ( !Pool2 )
    {
      NameStringMode = -1073741670;
      goto LABEL_46;
    }
    v12 = Pool2;
  }
  else
  {
    v12 = (UNICODE_STRING *)v42;
    if ( a5 >= 0x10 )
      v12 = a4;
  }
  p_Type = &v8->DeviceObject->Type;
  if ( !a3 )
    goto LABEL_7;
  v31 = p_Type[13];
  if ( (v31 & 0x10) != 0 )
  {
    v35 = L"\\\\?\\vmsmb";
    v36 = v31 & 0x80000;
    if ( !v36 )
      v35 = L"\\";
    v37 = (unsigned __int16)(v36 != 0 ? 20 : 4);
    LODWORD(v38) = v37 + 16;
    if ( (int)v37 + 16 > v11 )
      goto LABEL_80;
    NameStringMode = 0;
    v12->Length = v36 != 0 ? 18 : 2;
    v12->MaximumLength = v37;
    v12->Buffer = &v12[1].Length;
    memmove(&v12[1], v35, v37);
  }
  else
  {
    NameStringMode = IoVolumeDeviceToDosName(p_Type, v12);
    LODWORD(v38) = v12->Length + 18;
  }
  if ( NameStringMode < 0 )
  {
    v8 = a1;
LABEL_80:
    p_Type = &v8->DeviceObject->Type;
LABEL_7:
    NameStringMode = ObQueryNameStringMode((_DWORD)p_Type, (_DWORD)v12, v11, (unsigned int)&v38, 0);
    goto LABEL_8;
  }
  v10 = 1;
LABEL_8:
  if ( NameStringMode < 0 )
  {
    if ( NameStringMode != -1073741820 )
      goto LABEL_46;
  }
  else if ( !v10 )
  {
    v44 = v12->Length == 0;
  }
  v15 = a4 + 1;
  v41 = &a4[1];
  if ( a3 && v10 )
  {
    if ( v11 < (unsigned int)v38 )
      Length = v11 - 16;
    else
      Length = v12->Length;
    memmove(&a4[1], v12->Buffer, Length);
    if ( (a1->DeviceObject->Characteristics & 0x10) == 0 )
      ExFreePoolWithTag(v12->Buffer, 0);
  }
  else if ( a7 == 1 && (unsigned int)v38 <= v11 && a5 >= 0x10 )
  {
    RtlWriteUShortToUser(a4, v12->Length);
    RtlWriteUShortToUser(&a4->MaximumLength, v12->MaximumLength);
    RtlCopyToUser(&a4[1], &v12[1], (unsigned int)v38 - 16LL);
  }
  if ( v44 )
    LODWORD(v38) = v38 + 2;
  v16 = 0;
  v45 = 0;
  if ( (unsigned int)v38 > v11 || a5 < 0x10 )
  {
    v17 = a6;
    *a6 = v38;
    v16 = 1;
    v45 = 1;
  }
  else
  {
    if ( a7 )
    {
      RtlWriteULong64ToUser(&a4->Buffer, (__int64)&a4[1]);
      v16 = 0;
    }
    else
    {
      a4->Buffer = &v15->Length;
    }
    v15 = (UNICODE_STRING *)((char *)v15 + v12->Length);
    v41 = v15;
    v17 = a6;
  }
  if ( a7 == 1 )
  {
    v18 = v9;
    if ( !v16 )
      v11 = v11 - v38 + 4;
  }
  else if ( v16 )
  {
    v18 = (UNICODE_STRING *)v42;
    if ( a5 >= 0x10 )
      v18 = a4;
  }
  else
  {
    v18 = (UNICODE_STRING *)((char *)v15 - 4);
    Buffer_high = HIDWORD(v15[-1].Buffer);
    v11 = (_DWORD)a4 + v11 - ((_DWORD)v15 - 4) - 2;
  }
  if ( a7 != 1 || a3 )
  {
    v19 = a1;
    if ( (a1->Flags & 2) != 0 )
    {
      FileInformation = IopGetFileInformation(a1, (__int64)&v38);
      goto LABEL_27;
    }
  }
  else
  {
    v19 = a1;
  }
  FileInformation = IopQueryXxxInformation(v19, 9, v11, a7, (__int64)v18, &v38, 1);
LABEL_27:
  NameStringMode = FileInformation;
  if ( (FileInformation & 0xC0000000) == 0xC0000000 )
  {
    v32 = FileInformation + 1073741822;
    if ( (unsigned int)(NameStringMode + 1073741822) > 0xE )
      goto LABEL_46;
    v33 = 18435;
    if ( !_bittest(&v33, v32) )
      goto LABEL_46;
    LODWORD(v38) = 4;
    *(_DWORD *)&v18->Length = 0;
    *(&v18->MaximumLength + 1) = 92;
    NameStringMode = 0;
    v21 = v38;
  }
  else
  {
    v21 = v38;
    if ( (unsigned int)v38 < 4 )
    {
      v21 = 4;
      LODWORD(v38) = 4;
    }
  }
  if ( v45 )
  {
    *v17 += *(_DWORD *)&v18->Length;
    NameStringMode = a5 < 0x10 ? -1073741820 : -2147483643;
  }
  else
  {
    v22 = v21 - 4;
    v23 = *(_DWORD *)&v18->Length;
    if ( v22 <= *(_DWORD *)&v18->Length )
      v23 = v22;
    v24 = (char *)v41;
    LODWORD(v38) = (_DWORD)v41 + *(_DWORD *)&v18->Length - (_DWORD)a4;
    if ( *(&v18->MaximumLength + 1) == 92 )
    {
      v25 = v23;
      if ( a7 == 1 )
      {
        RtlCopyToUser(v41, &v18->MaximumLength + 1, v23);
        v24 = (char *)v41;
      }
      else
      {
        *(_DWORD *)&v18->Length = Buffer_high;
      }
      v26 = &v24[v25];
      v41 = v26;
      if ( a7 )
        RtlWriteUShortToUser(v26, 0);
      else
        *(_WORD *)v26 = 0;
      LODWORD(v38) = v38 + 2;
      *v17 = v38;
      v27 = (_WORD)v26 - (_WORD)a4;
      if ( a7 )
        RtlWriteUShortToUser(a4, v27 - 16);
      else
        a4->Length = v27 - 16;
      v28 = v27 - 14;
      if ( a7 )
        RtlWriteUShortToUser(&a4->MaximumLength, v28);
      else
        a4->MaximumLength = v28;
    }
    else
    {
      NameStringMode = -1073741767;
    }
  }
LABEL_46:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)NameStringMode;
}
