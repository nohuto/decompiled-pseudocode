/*
 * XREFs of CiCreateTaskIndexClientFromThread @ 0x14000F850
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiTaskIndexDereference @ 0x140003BB0 (CiTaskIndexDereference.c)
 *     CiThreadReferenceTaskIndex @ 0x140003EF0 (CiThreadReferenceTaskIndex.c)
 *     WPP_SF_d @ 0x140004844 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 *     memset @ 0x140005C40 (memset.c)
 *     RtlWriteULongToUser @ 0x14000D1F4 (RtlWriteULongToUser.c)
 */

__int64 __fastcall CiCreateTaskIndexClientFromThread(__int64 a1, char a2, _DWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  ULONG v9; // eax
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  void *FileHandle[2]; // [rsp+88h] [rbp-1B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-170h] BYREF
  __int64 EaBuffer; // [rsp+E0h] [rbp-158h] BYREF
  int v16; // [rsp+E8h] [rbp-150h]
  int v17; // [rsp+ECh] [rbp-14Ch]
  _QWORD *v18; // [rsp+F0h] [rbp-148h]
  _BYTE v19[252]; // [rsp+F8h] [rbp-140h] BYREF

  v17 = 0;
  memset(v19, 0, sizeof(v19));
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle[0] = 0LL;
  v6 = (_QWORD *)CiThreadReferenceTaskIndex(a1);
  v7 = v6;
  FileHandle[1] = v6;
  if ( !v6 )
    return 3221225865LL;
  EaBuffer = 0x10F000000000000LL;
  v16 = 0;
  v18 = v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v9 = 512;
  if ( a2 )
    v9 = 0;
  ObjectAttributes.Attributes = v9;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L".0";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = IoCreateFileEx(
          FileHandle,
          0x120089u,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          0,
          0,
          0,
          0,
          &EaBuffer,
          0x118u,
          CreateFileTypeNone,
          0LL,
          0,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( a2 )
      RtlWriteULongToUser(a3, (int)FileHandle[0]);
    else
      *a3 = FileHandle[0];
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x11u,
      (__int64)&WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids,
      v10);
  }
  CiTaskIndexDereference(v7);
  return v11;
}
