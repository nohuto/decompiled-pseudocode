/*
 * XREFs of SetHandleFlag @ 0x1400DE3E0
 * Callers:
 *     CloseProtectedHandle @ 0x1400DE398 (CloseProtectedHandle.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int *v11; // rbx
  ULONG v12; // eax
  __int64 v13; // rax
  ULONG *v15; // rax
  ULONG *v16; // r14
  const void *v17; // rdx

  v4 = 1;
  v5 = a2 + 2 * ((unsigned int)a1 >> 2) + ((unsigned int)a1 >> 2);
  UserSessionState = W32GetUserSessionState(a1, a2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 19808));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
  {
    v11 = (unsigned int *)(CurrentProcessWin32Process + 704);
    v12 = *(_DWORD *)(CurrentProcessWin32Process + 704);
    if ( a3 )
    {
      if ( v5 >= v12 )
      {
        v15 = (ULONG *)Win32AllocPoolWithQuotaZInitImpl(
                         v10,
                         (unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3,
                         0x69707355u);
        v16 = v15;
        if ( !v15 )
        {
          v4 = 0;
          goto LABEL_6;
        }
        v17 = (const void *)*((_QWORD *)v11 + 1);
        if ( v17 )
        {
          memmove(v15, v17, (unsigned __int64)*v11 >> 3);
          GreDeleteFastMutex(*((char **)v11 + 1));
        }
        RtlInitializeBitMap((PRTL_BITMAP)v11, v16, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits((PRTL_BITMAP)v11, v5, 1u);
    }
    else if ( v5 < v12 )
    {
      RtlClearBits((PRTL_BITMAP)v11, v5, 1u);
    }
  }
LABEL_6:
  v13 = W32GetUserSessionState(v10, v9);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v13 + 19808));
  return v4;
}
