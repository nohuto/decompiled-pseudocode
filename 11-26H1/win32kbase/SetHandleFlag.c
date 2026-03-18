/*
 * XREFs of SetHandleFlag @ 0x14012A7E0
 * Callers:
 *     CloseProtectedHandle @ 0x14012A7A4 (CloseProtectedHandle.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int *v12; // rbx
  ULONG v13; // eax
  __int64 v14; // rax
  ULONG *v16; // rax
  ULONG *v17; // rbp
  const void *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 19840));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
  {
    v12 = (unsigned int *)(CurrentProcessWin32Process + 704);
    v13 = *(_DWORD *)(CurrentProcessWin32Process + 704);
    if ( a3 )
    {
      if ( v5 >= v13 )
      {
        v16 = (ULONG *)Win32AllocPoolWithQuotaZInitImpl(
                         v10,
                         (unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3,
                         0x69707355u);
        v17 = v16;
        if ( !v16 )
        {
          v4 = 0;
          goto LABEL_6;
        }
        v18 = (const void *)*((_QWORD *)v12 + 1);
        if ( v18 )
        {
          memmove(v16, v18, (unsigned __int64)*v12 >> 3);
          GreDeleteFastMutex(*((char **)v12 + 1), v19, v20, v21);
        }
        RtlInitializeBitMap((PRTL_BITMAP)v12, v17, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits((PRTL_BITMAP)v12, v5, 1u);
    }
    else if ( v5 < v13 )
    {
      RtlClearBits((PRTL_BITMAP)v12, v5, 1u);
    }
  }
LABEL_6:
  v14 = W32GetUserSessionState(v10, v9, v11);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v14 + 19840));
  return v4;
}
