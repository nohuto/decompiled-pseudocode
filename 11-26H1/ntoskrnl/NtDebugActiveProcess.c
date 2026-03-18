/*
 * XREFs of NtDebugActiveProcess @ 0x140985620
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140985588 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpSetProcessDebugObject @ 0x140985C5C (DbgkpSetProcessDebugObject.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140985F5C (DbgkpPostFakeProcessCreateMessages.c)
 */

__int64 __fastcall NtDebugActiveProcess(ULONG_PTR a1, void *a2)
{
  char PreviousMode; // r14
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 Count; // rdi
  int v9; // edi
  BOOLEAN v10; // al
  struct _KEVENT *v11; // rsi
  __int16 v12; // ax
  __int16 v13; // ax
  PVOID Object[2]; // [rsp+40h] [rbp-59h] BYREF
  char v15[8]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-41h]
  __int64 v17; // [rsp+60h] [rbp-39h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  Object[1] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 2048LL, PsProcessType, PreviousMode, 0x4F676244u, Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (struct _EX_RUNDOWN_REF *)Object[0];
    Process = CurrentThread->ApcState.Process;
    if ( Object[0] == Process || Object[0] == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else if ( PsTestProtectedProcessIncompatibility(
                PreviousMode,
                (__int64)CurrentThread->ApcState.Process,
                (__int64)Object[0]) )
    {
      v9 = -1073740014;
    }
    else
    {
      Count = v6[46].Count;
      if ( (Count & 1) == 0
        || (memset_0(v15, 0, 0x68uLL),
            v17 = 1LL,
            v16 = Count & 0xFFFFFFFFFFFFFFFCuLL,
            v9 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v15),
            v9 >= 0) )
      {
        if ( !Process[1].ReadyTime
          || (v12 = WORD2(Process[3].PerProcessorCycleTimes), v12 != 332) && v12 != 452
          || v6[98].Count && ((v13 = WORD2(v6[221].Ptr), v13 == 332) || v13 == 452) )
        {
          Object[0] = 0LL;
          v9 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
          if ( v9 >= 0 )
          {
            v10 = ExAcquireRundownProtection_0(v6 + 61);
            v11 = (struct _KEVENT *)Object[0];
            if ( v10 )
            {
              DbgkpPostFakeProcessCreateMessages((ULONG_PTR)v6);
              v9 = DbgkpSetProcessDebugObject((PRKPROCESS)v6, v11);
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
    return (unsigned int)v9;
  }
  return result;
}
