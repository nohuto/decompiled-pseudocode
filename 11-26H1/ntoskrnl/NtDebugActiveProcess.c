/*
 * XREFs of NtDebugActiveProcess @ 0x140947620
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpSetProcessDebugObject @ 0x14091D490 (DbgkpSetProcessDebugObject.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140947588 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140947C5C (DbgkpPostFakeProcessCreateMessages.c)
 */

NTSTATUS __cdecl NtDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 Count; // rdi
  NTSTATUS v9; // edi
  BOOLEAN v10; // al
  struct _KEVENT *v11; // rsi
  int Messages; // eax
  __int16 v13; // ax
  __int16 v14; // ax
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-51h]
  char v17[8]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v16 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    Process = CurrentThread->ApcState.Process;
    if ( Object == Process || Object == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else if ( PsTestProtectedProcessIncompatibility(
                PreviousMode,
                (__int64)CurrentThread->ApcState.Process,
                (__int64)Object) )
    {
      v9 = -1073740014;
    }
    else
    {
      Count = v6[46].Count;
      if ( (Count & 1) == 0
        || (memset_0(v17, 0, 0x68uLL),
            v19 = 1LL,
            v18 = Count & 0xFFFFFFFFFFFFFFFCuLL,
            v9 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v17),
            v9 >= 0) )
      {
        if ( !Process[1].ReadyTime
          || (v13 = WORD2(Process[3].PerProcessorCycleTimes), v13 != 332) && v13 != 452
          || v6[98].Count && ((v14 = WORD2(v6[221].Ptr), v14 == 332) || v14 == 452) )
        {
          Object = 0LL;
          v9 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
          if ( v9 >= 0 )
          {
            v10 = ExAcquireRundownProtection_0(v6 + 61);
            v11 = (struct _KEVENT *)Object;
            if ( v10 )
            {
              Messages = DbgkpPostFakeProcessCreateMessages((ULONG_PTR)v6);
              v9 = DbgkpSetProcessDebugObject((PRKPROCESS)v6, v11, Messages, v16);
              ExReleaseRundownProtection_0(v6 + 61);
            }
            else
            {
              v9 = -1073741558;
            }
            ObfDereferenceObject(v11);
          }
        }
        else
        {
          v9 = -1073741637;
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v9;
  }
  return result;
}
