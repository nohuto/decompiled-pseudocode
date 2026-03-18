/*
 * XREFs of MiReferenceExistingCloneProto @ 0x14036AC14
 * Callers:
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkProtoPte @ 0x14030EB98 (MiHandleForkProtoPte.c)
 * Callees:
 *     MiReferenceCloneProto @ 0x14036A5A8 (MiReferenceCloneProto.c)
 *     MiLocateCloneAddress @ 0x14036BA4C (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiReferenceExistingCloneProto(__int64 a1, __int64 a2, char a3, _QWORD *a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 CloneAddress; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  CloneAddress = MiLocateCloneAddress(CurrentThread->ApcState.Process, a2);
  if ( !CloneAddress )
    return 1LL;
  result = MiReferenceCloneProto(a1, *(_QWORD *)(*(_QWORD *)(CloneAddress + 56) + 24LL), a2, a3, a4);
  if ( (_DWORD)result )
  {
    if ( (a3 & 1) != 0 )
      *a5 = a2;
  }
  return result;
}
