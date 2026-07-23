/*
 * XREFs of PspMakeSessionVisible @ 0x140B57978
 * Callers:
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall PspMakeSessionVisible(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *AffinityVersion; // rcx
  unsigned __int16 **v4; // rax
  bool v5; // r8
  _QWORD *SparePtr; // rdx
  _QWORD *v7; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_DWORD *)(a1 + 4) |= 1u;
  AffinityVersion = (_QWORD *)PsAltSystemCallRegistrationLock.AffinityVersion;
  v4 = (unsigned __int16 **)(a1 + 80);
  if ( *(struct _KTHREAD **)PsAltSystemCallRegistrationLock.AffinityVersion != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup )
    __fastfail(3u);
  *v4 = &PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup;
  v5 = 0;
  *(_QWORD *)(a1 + 88) = AffinityVersion;
  *AffinityVersion = v4;
  SparePtr = NormalizationListLock.WaitBlock[0].SparePtr;
  PsAltSystemCallRegistrationLock.AffinityVersion = a1 + 80;
  if ( NormalizationListLock.WaitBlock[0].SparePtr )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 8) >= *((_DWORD *)SparePtr - 22) )
      {
        v7 = (_QWORD *)SparePtr[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*SparePtr;
        if ( !*SparePtr )
          break;
      }
      SparePtr = v7;
    }
  }
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&NormalizationListLock.WaitBlock[0].SparePtr,
    (unsigned __int64)SparePtr,
    v5,
    (_QWORD *)(a1 + 96));
  return PspUnlockProcessListExclusive(CurrentThread);
}
