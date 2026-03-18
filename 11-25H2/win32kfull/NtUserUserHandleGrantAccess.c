/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x14024F3E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x14029314C (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(void *a1, HANDLE Handle, int a3)
{
  unsigned int v6; // edi
  NTSTATUS v8; // eax
  PVOID v9; // r14
  struct _ERESOURCE *JobLock; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *i; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // edx
  void **v24; // r9
  struct _ERESOURCE *v25; // rax
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  PVOID v28; // [rsp+58h] [rbp-40h]
  __int64 v29; // [rsp+60h] [rbp-38h]
  __int64 v30; // [rsp+68h] [rbp-30h]

  v6 = 0;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    return (int)NtUserHandleGrantAccess(Handle, a1, a3 != 0);
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v9 = Object;
  v28 = Object;
  if ( v8 < 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(1LL, 0LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v9) )
  {
    for ( i = *(__int64 **)(W32GetUserSessionState(v12, v11) + 69096); i && (PVOID)i[1] != v9; i = (__int64 *)*i )
      ;
    if ( i )
    {
      LOBYTE(v13) = -1;
      if ( HMValidateHandleWithDescriptor((__int64)a1, v13) )
      {
        v29 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19888) + 32LL * (unsigned __int16)a1;
        *(_BYTE *)(v29 + 25) |= 0x20u;
        v17 = i[7];
        v27 = v17;
        if ( a3 )
        {
          v18 = *((_DWORD *)i + 12);
          v19 = *((unsigned int *)i + 13);
          if ( v18 != (_DWORD)v19 )
            goto LABEL_25;
          if ( v18 )
          {
            v21 = 8 * v19;
            v30 = 8 * v19;
            if ( (unsigned __int64)(8 * v19) > 0xFFFFFFFF || v21 + 64 < v21 )
              goto LABEL_22;
            v20 = UserReAllocPool(v17, v21, v21 + 64, 1751610197LL);
          }
          else
          {
            v20 = Win32AllocPoolZInit(64LL, 1751610197LL);
          }
          v27 = v20;
          v17 = v20;
          if ( !v20 )
          {
LABEL_22:
            UserSetLastError(8);
            goto LABEL_37;
          }
          i[7] = v20;
          *((_DWORD *)i + 13) += 8;
LABEL_25:
          while ( 1 )
          {
            v22 = *((unsigned int *)i + 12);
            if ( v6 >= (unsigned int)v22 )
              break;
            if ( *(void **)(v17 + 8LL * v6) == a1 )
            {
              if ( v6 < (unsigned int)v22 )
                goto LABEL_36;
              break;
            }
            ++v6;
          }
          *(_QWORD *)(v17 + 8 * v22) = a1;
          ++*((_DWORD *)i + 12);
        }
        else
        {
          while ( 1 )
          {
            v23 = *((_DWORD *)i + 12);
            if ( v6 >= v23 )
              goto LABEL_35;
            v24 = (void **)(v17 + 8LL * v6);
            if ( *v24 == a1 )
              break;
            ++v6;
          }
          memmove((void *)(v17 + 8LL * v6), v24 + 1, 8LL * (v23 - v6 - 1));
          if ( v6 >= --*((_DWORD *)i + 12) )
LABEL_35:
            UserSetLastError(6);
        }
LABEL_36:
        v6 = 1;
        goto LABEL_37;
      }
    }
  }
  UserSetLastError(87);
LABEL_37:
  UserSessionSwitchLeaveCrit(v17);
  v25 = (struct _ERESOURCE *)PsGetJobLock(v9);
  ExReleaseResourceAndLeaveCriticalRegion(v25);
  ObfDereferenceObject(v9);
  return (int)v6;
}
