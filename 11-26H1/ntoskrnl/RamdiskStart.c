/*
 * XREFs of RamdiskStart @ 0x140D0A114
 * Callers:
 *     RamdiskInitialize @ 0x140D0A0B4 (RamdiskInitialize.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _strupr @ 0x1405377E0 (_strupr.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     _atoi64 @ 0x1405381B0 (_atoi64.c)
 *     atol @ 0x140538200 (atol.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RamdiskStart(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD **v7; // rcx
  unsigned __int64 v8; // rax
  _QWORD *i; // rcx
  NTSTATUS Status; // ebx
  char *v11; // rax
  bool v12; // si
  int v13; // ecx
  __int64 v14; // rax
  char *v15; // rbx
  char *v16; // rax
  char *v17; // rax
  unsigned int v18; // eax
  char *v19; // rax
  char *v20; // rax
  GUID v21; // xmm0
  __int64 result; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-79h] BYREF
  __int128 v24; // [rsp+58h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-51h] BYREF
  int InputBuffer; // [rsp+B0h] [rbp-19h] BYREF
  GUID v28; // [rsp+B4h] [rbp-15h]
  int v29; // [rsp+C4h] [rbp-5h]
  int v30; // [rsp+C8h] [rbp-1h]
  __int64 v31; // [rsp+D0h] [rbp+7h]
  unsigned int v32; // [rsp+D8h] [rbp+Fh]
  __int64 v33; // [rsp+E0h] [rbp+17h]

  v24 = 0LL;
  memset_0(&InputBuffer, 0, 0x40uLL);
  v4 = 1LL;
  FileHandle = 0LL;
  v5 = *(_QWORD *)(a1 + 360);
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  if ( (v5 & 1) != 0 )
  {
    if ( v5 != 1 )
    {
      v6 = v5 ^ ((a1 + 352) | 1);
      goto LABEL_13;
    }
LABEL_14:
    Status = -1073741811;
    goto LABEL_15;
  }
  v6 = v5;
  while ( 1 )
  {
LABEL_13:
    if ( !v6 )
      goto LABEL_14;
    if ( *(_DWORD *)(v6 + 24) == 25 )
      break;
    v7 = *(_QWORD ***)(v6 + 8);
    v8 = v6;
    if ( v7 )
    {
      v6 = *(_QWORD *)(v6 + 8);
      for ( i = *v7; i; i = (_QWORD *)*i )
        v6 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)v6 == v8 )
          break;
        v8 = v6;
      }
    }
  }
  v11 = strstr(*(const char **)(a1 + 184), "vdisk(");
  InputBuffer = 64;
  v4 = 3LL;
  v12 = v11 != 0LL;
  v29 = 3;
  v33 = *(_QWORD *)(v6 + 32);
  v13 = v30 | 2;
  v30 |= 2u;
  if ( v11 )
    v30 = v13 | 0x44;
  v32 = 0;
  v28 = RamdiskBootDiskGuid;
  v14 = *(_QWORD *)(v6 + 40);
  v15 = *(char **)(a1 + 216);
  v31 = v14 << 12;
  if ( v15 )
  {
    strupr(v15);
    v16 = strstr(v15, "RDIMAGEOFFSET");
    if ( v16 && (v17 = strstr(v16, "=")) != 0LL )
    {
      v18 = atol(v17 + 1);
      v32 = v18;
    }
    else
    {
      v18 = v32;
    }
    v31 -= v18;
    v19 = strstr(v15, "RDIMAGELENGTH");
    if ( v19 )
    {
      v20 = strstr(v19, "=");
      if ( v20 )
        v31 = atoi64(v20 + 1);
    }
  }
  LODWORD(v24) = 2097182;
  *((_QWORD *)&v24 + 1) = L"\\Device\\Ramdisk";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
  {
    v4 = 2LL;
    goto LABEL_15;
  }
  Status = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240000u, &InputBuffer, 0x40u, 0LL, 0);
  ZwClose(FileHandle);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
LABEL_15:
    KeBugCheckEx(0xF8u, v4, Status, 0LL, 0LL);
  v21 = v28;
  *(_BYTE *)(a2 + 16) = v12;
  result = 0LL;
  *(GUID *)a2 = v21;
  return result;
}
