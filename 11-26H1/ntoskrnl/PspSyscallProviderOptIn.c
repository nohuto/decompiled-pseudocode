/*
 * XREFs of PspSyscallProviderOptIn @ 0x1407F35B0
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     PspDereferenceSyscallProvider @ 0x140617470 (PspDereferenceSyscallProvider.c)
 *     PspLookupSyscallProviderById @ 0x140617524 (PspLookupSyscallProviderById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PspAttachProcessToSyscallProvider @ 0x1407F314C (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspSyscallProviderOptIn(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // eax
  int v7; // ebx
  int v8; // eax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned __int64 Count; // rax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KLOCK_ENTRIES *v15; // r9
  volatile signed __int32 *i; // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+2Ch] [rbp-1Ch]
  struct _EX_RUNDOWN_REF *v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 1532);
  v21 = 0LL;
  if ( (v4 & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v8 = PspLookupSyscallProviderById(a2, (__int64)&v21, a3, a4);
    v9 = v21;
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = *(unsigned __int8 *)(a2 + 16);
      if ( (_BYTE)v10 || HIDWORD(v21[v10 + 11].Ptr) == -1 )
      {
        v7 = -1073741811;
      }
      else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1532), 0x19u) )
      {
        v7 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 1976) )
        {
          v7 = -1073741790;
        }
        else if ( ExAcquireRundownProtection_0(v9 + 7) )
        {
          Count = v9[5].Count;
          v20 = 0;
          if ( !Count
            || (v18 = *(_QWORD *)(a1 + 720),
                v19 = *(unsigned __int8 *)(a2 + 16),
                v7 = guard_dispatch_icall_no_overrides(a1, (__int64)&v18),
                v7 >= 0) )
          {
            CurrentThread = KeGetCurrentThread();
            PspLockProcessExclusive(a1, (__int64)CurrentThread, v11, v12);
            PspAttachProcessToSyscallProvider((_QWORD *)a1, (__int64)v9, *(unsigned __int8 *)(a2 + 16), v15);
            for ( i = *(volatile signed __int32 **)(a1 + 880);
                  i != (volatile signed __int32 *)(a1 + 880);
                  i = *(volatile signed __int32 **)i )
            {
              _interlockedbittestandset(i - 350, 0x1Du);
            }
            PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
            v7 = 0;
          }
          ExReleaseRundownProtection_0(v9 + 7);
        }
        else
        {
          v7 = -1073741738;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1532), 0x19u);
      }
    }
    if ( v9 )
      PspDereferenceSyscallProvider((volatile signed __int64 *)v9);
  }
  return (unsigned int)v7;
}
