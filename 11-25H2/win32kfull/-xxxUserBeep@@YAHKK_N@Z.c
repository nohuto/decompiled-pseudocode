/*
 * XREFs of ?xxxUserBeep@@YAHKK_N@Z @ 0x14021DA40
 * Callers:
 *     EditionInitiateMouseEventProcessing @ 0x140238610 (EditionInitiateMouseEventProcessing.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x14028B0FC (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxOldMessageBeep @ 0x1402AF948 (xxxOldMessageBeep.c)
 *     EditionUserBeep @ 0x1402B0CC0 (EditionUserBeep.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400C8028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 */

__int64 __fastcall xxxUserBeep(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  NTSTATUS v12; // eax
  NTSTATUS v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *FileHandle; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int64 InputBuffer; // [rsp+70h] [rbp-21h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+Fh] BYREF
  char v23; // [rsp+110h] [rbp+7Fh] BYREF

  v3 = (int)a2;
  v4 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  InputBuffer = 0LL;
  FileHandle = 0LL;
  v6 = a1;
  Interval.QuadPart = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( IsRemoteConnection(a1, a2) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v8, v7) + 68680) )
      return 0LL;
    UserSessionState = W32GetUserSessionState(v10, v9);
    v12 = ObOpenObjectByPointer(*(PVOID *)(UserSessionState + 68680), 0, 0LL, 0x1F0003u, 0LL, 0, &FileHandle);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\Beep");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwCreateFile(&FileHandle, 3u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 3u, 0, 0LL, 0);
  }
  if ( v12 < 0 )
    return 0LL;
  if ( (v6 || (_DWORD)v3) && v6 - 37 > 0x7FDA )
  {
    v14 = -1073741811;
  }
  else
  {
    InputBuffer = __PAIR64__(v3, v6);
    v14 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x10000u, &InputBuffer, 8u, 0LL, 0);
  }
  if ( a3 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23);
    xxxSoundSentry(v16, v15);
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23);
  }
  if ( v14 >= 0 )
  {
    if ( (_DWORD)v3 != -1 && (v6 || (_DWORD)v3) )
    {
      Interval.QuadPart = -10000 * v3;
      KeDelayExecutionThread(1, 0, &Interval);
    }
    v4 = 1;
  }
  ZwClose(FileHandle);
  return v4;
}
