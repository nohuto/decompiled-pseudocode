/*
 * XREFs of DbgkSendSystemDllMessages @ 0x140B51ED8
 * Callers:
 *     DbgkpPostFakeThreadMessages @ 0x1409556F0 (DbgkpPostFakeThreadMessages.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     DbgkpQueueMessage @ 0x140953A1C (DbgkpQueueMessage.c)
 *     PsWow64GetProcessNtdllType @ 0x1409EA77C (PsWow64GetProcessNtdllType.c)
 *     PsQuerySystemDllInfo @ 0x1409EBB38 (PsQuerySystemDllInfo.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

void __fastcall DbgkSendSystemDllMessages(char *a1, struct _KEVENT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  _KPROCESS *Process; // r15
  _DWORD *v6; // rsi
  int i; // r14d
  _DWORD *SystemDllInfo; // rax
  _DWORD *v9; // rdi
  _QWORD *Teb; // r13
  unsigned __int64 v11; // rax
  _DWORD *v12; // rax
  struct _KTHREAD *CurrentThread; // r13
  char v14; // [rsp+30h] [rbp-338h]
  unsigned __int64 v16; // [rsp+58h] [rbp-310h]
  _DWORD *v17; // [rsp+58h] [rbp-310h]
  _DWORD *v18; // [rsp+80h] [rbp-2E8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-2D0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-2A0h] BYREF
  _OWORD v23[3]; // [rsp+D8h] [rbp-290h] BYREF
  wchar_t pszDest[264]; // [rsp+110h] [rbp-258h] BYREF

  v3 = (__int64)a3;
  memset(v23, 0, sizeof(v23));
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a1 )
    Process = (_KPROCESS *)*((_QWORD *)a1 + 68);
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a3 + 12;
  for ( i = 0; i < 6; ++i )
  {
    SystemDllInfo = (_DWORD *)PsQuerySystemDllInfo(i);
    v9 = SystemDllInfo;
    v18 = SystemDllInfo;
    if ( SystemDllInfo
      && (i <= 0
       || (*SystemDllInfo & 8) != 0
       && Process[1].ReadyTime
       && i == (unsigned int)PsWow64GetProcessNtdllType((__int64)Process)) )
    {
      *(_OWORD *)v6 = 0LL;
      *((_OWORD *)v6 + 1) = 0LL;
      Teb = 0LL;
      v11 = *((_QWORD *)v9 + 3);
      v16 = v11;
      *((_QWORD *)v6 + 1) = v11;
      if ( a1 && i )
      {
        v14 = 1;
        KiStackAttachProcess(Process, 0, (__int64)v23);
        v11 = v16;
      }
      else
      {
        v14 = 0;
      }
      v12 = RtlImageNtHeader(v11);
      v17 = v12;
      if ( v12 )
      {
        v6[4] = RtlReadULongFromUser(v12 + 3);
        v6[5] = RtlReadULongFromUser(v17 + 4);
      }
      if ( !a1 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = CurrentThread->Teb;
        if ( Teb )
        {
          memset_0(pszDest, 0, 0x20AuLL);
          RtlStringCbCopyW(pszDest, 0x20AuLL, *((NTSTRSAFE_PCWSTR *)v9 + 5));
          RtlCopyToUser(Teb + 589, pszDest, 0x20AuLL);
          RtlWriteULong64ToUser(Teb + 5, (__int64)(Teb + 589));
          *((_QWORD *)v6 + 3) = Teb + 5;
          v3 = (__int64)a3;
        }
      }
      if ( v14 )
        KiUnstackDetachProcess((__int64)v23, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 1600;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v18 + 2);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile((PHANDLE)v6, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
        *(_QWORD *)v6 = 0LL;
      *a3 = 5242920;
      *(_DWORD *)(v3 + 4) = 8;
      *(_DWORD *)(v3 + 40) = 5;
      if ( a1 )
      {
        if ( (int)DbgkpQueueMessage(Process, a1, v3, 2, a2) < 0 && *(_QWORD *)v6 )
          ObCloseHandle(*(HANDLE *)v6, 0);
      }
      else
      {
        DbgkpSendApiMessage(Process, 3, v3);
        if ( *(_QWORD *)v6 )
          ObCloseHandle(*(HANDLE *)v6, 0);
        if ( Teb )
          RtlWriteULong64ToUser(Teb + 5, 0LL);
      }
    }
  }
}
