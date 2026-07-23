/*
 * XREFs of PspFindFirstThreadByTebValue @ 0x140949C14
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PsGetThreadId @ 0x1404793F0 (PsGetThreadId.c)
 *     PsGetThreadTeb @ 0x14047EB60 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspFindFirstThreadByTebValue(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char v6; // r12
  unsigned __int64 v7; // rax
  __int64 ULong64FromUser; // r13
  struct _KTHREAD *i; // rdx
  __int64 NextProcessThread; // rax
  struct _KTHREAD *v11; // rbx
  struct _EX_RUNDOWN_REF *v12; // r15
  __int64 ThreadTeb; // rax
  char v14; // r14
  unsigned int v15; // ebx
  _OWORD v18[3]; // [rsp+60h] [rbp-78h] BYREF

  memset(v18, 0, sizeof(v18));
  v6 = 0;
  v7 = 6256LL;
  ULong64FromUser = 0LL;
  if ( *(_QWORD *)(BugCheckParameter1 + 784) )
  {
    v7 = 12336LL;
    if ( *(_WORD *)(BugCheckParameter1 + 1772) == 0x8664 )
      v7 = 14448LL;
  }
  if ( a2 >= v7 || v7 - a2 < 8 || (a2 & 7) != 0 )
  {
    v15 = -1073741811;
  }
  else
  {
    if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v18);
      v6 = 1;
    }
    for ( i = 0LL; ; i = v11 )
    {
      NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, i);
      v11 = (struct _KTHREAD *)NextProcessThread;
      if ( !NextProcessThread )
        goto LABEL_16;
      if ( (*(_DWORD *)(NextProcessThread + 116) & 0x400) == 0 )
      {
        v12 = (struct _EX_RUNDOWN_REF *)(NextProcessThread + 1416);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(NextProcessThread + 1416)) )
        {
          ThreadTeb = PsGetThreadTeb((__int64)v11);
          if ( ThreadTeb )
          {
            v14 = 1;
            ULong64FromUser = RtlReadULong64FromUser((volatile void *)(a2 + ThreadTeb));
          }
          else
          {
            v14 = 0;
          }
          ExReleaseRundownProtection_0(v12);
          if ( v14 )
          {
            if ( ULong64FromUser == a3 )
              break;
          }
        }
      }
    }
    if ( !v11 )
    {
LABEL_16:
      v15 = -1073741275;
      goto LABEL_19;
    }
    *a4 = (unsigned int)PsGetThreadId(v11);
    ObfDereferenceObjectWithTag(v11, 0x6E457350u);
    v15 = 0;
  }
LABEL_19:
  if ( v6 )
    KiUnstackDetachProcess((__int64)v18, 0);
  return v15;
}
