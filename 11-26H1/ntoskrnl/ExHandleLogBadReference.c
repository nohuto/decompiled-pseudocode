/*
 * XREFs of ExHandleLogBadReference @ 0x14046C9F0
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 *     ObpCloseHandle @ 0x1408F9C70 (ObpCloseHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObpReferenceObjectByHandle @ 0x1408FA460 (ObpReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpFreeMessageFunction @ 0x140A86940 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     KeRaiseUserException @ 0x140529EA0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B41E00 (DbgkWerCaptureLiveKernelDump.c)
 */

struct _KTHREAD *__fastcall ExHandleLogBadReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  struct _KTHREAD *BugCheckParameter4; // rbp
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rdx

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    BugCheckParameter4 = KeGetCurrentThread();
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)ExpUpdateDebugInfo(BugCheckParameter2, BugCheckParameter4, BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( result->ApcStateIndex != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == result->ApcState.Process[1].KernelTime )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              KeGetCurrentThread()->ApcState.Process);
          if ( (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) & 0x800) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (Process[1].DirectoryTableBase & 0x200000000000LL) != 0 )
              KeBugCheckEx(
                0x1EDu,
                BugCheckParameter1,
                BugCheckParameter2,
                (ULONG_PTR)Process,
                (ULONG_PTR)BugCheckParameter4);
            DbgkWerCaptureLiveKernelDump(
              (unsigned int)L"BadHandleKmChk",
              492,
              -1073741816,
              (_DWORD)BugCheckParameter4,
              (__int64)Process,
              BugCheckParameter1,
              0LL,
              0LL,
              0);
          }
          return (struct _KTHREAD *)KeRaiseUserException(3221225480LL);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
