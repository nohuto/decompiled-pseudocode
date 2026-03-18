/*
 * XREFs of NtReplaceKey @ 0x14084FD20
 * Callers:
 *     DifNtReplaceKeyWrapper @ 0x140688FE0 (DifNtReplaceKeyWrapper.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmPostCallbackNotificationEx @ 0x1408C9D50 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14097C910 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x14097C958 (CmpNameFromAttributes.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C58CD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C58F14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall NtReplaceKey(void *Src, int a2, void *a3)
{
  char v6; // si
  KPROCESSOR_MODE PreviousMode; // di
  char UnloadRundown; // r13
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  _QWORD *v14; // rdi
  int v15; // r9d
  int v16; // eax
  int v17; // eax
  char *v18; // rdx
  ULONG v20; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v25[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+98h] [rbp-68h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-58h]
  __int128 v30; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+D0h] [rbp-30h] BYREF
  PVOID *p_Object; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]

  v27 = 0LL;
  Object = 0LL;
  v26 = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23[1] = v23;
  v23[0] = v23;
  *(_OWORD *)v25 = 0LL;
  *(_OWORD *)P = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v26);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        CurrentThread = KeGetCurrentThread();
        v6 = 1;
        --CurrentThread->KernelApcDisable;
        v9 = CmpNameFromAttributes(Src);
        if ( v9 >= 0 )
        {
          v9 = CmpNameFromAttributes(a3);
          if ( v9 >= 0 )
          {
            LOBYTE(v12) = PreviousMode;
            v13 = CmObReferenceObjectByHandle(a2, 0, v11, v12, (__int64)&Object, 0LL);
            v14 = Object;
            v9 = v13;
            if ( v13 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
              {
                if ( !WheapPfaLock.ExpectedRunTime
                  || (unsigned int)CmpIsRegistryLockAcquired()
                  || (*(_QWORD *)&v28 = v14,
                      *((_QWORD *)&v28 + 1) = P,
                      LOBYTE(v15) = 1,
                      *(_QWORD *)&v29 = v25,
                      v16 = CmpCallCallBacksEx(45, (unsigned int)&v28, 0, v15, 46, 0LL, (__int64)v23),
                      v16 >= 0) )
                {
                  v17 = CmReplaceKey(*(_QWORD *)(v14[1] + 32LL));
                  v9 = CmPostCallbackNotificationEx(46, (_DWORD)v14, v17, (unsigned int)&v28, 0LL, (__int64)v23);
                  if ( v9 == -1073740541 )
                    v9 = 0;
                }
                else
                {
                  v9 = 0;
                  if ( v16 != -1073740541 )
                    v9 = v16;
                }
              }
              else
              {
                v9 = -1073741790;
              }
            }
            if ( v14 )
              ObfDereferenceObject(v14);
          }
        }
      }
      else
      {
        v9 = -1073741727;
      }
    }
  }
  else
  {
    v9 = -1073741431;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v25[1] )
    ExFreePoolWithTag(v25[1], 0);
  if ( v6 )
    KeLeaveCriticalRegion();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v26);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
    {
      v33 = 8LL;
      p_Object = (PVOID *)&v22;
      v18 = byte_140055BAD;
      v20 = 3;
      goto LABEL_36;
    }
  }
  else if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
  {
    LODWORD(Object) = v9;
    p_Object = &Object;
    v18 = byte_140055BE3;
    v35 = 8LL;
    v34 = &v22;
    v33 = 4LL;
    v20 = 4;
LABEL_36:
    v22 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)v18, 0LL, 0LL, v20, &v31);
  }
  return (unsigned int)v9;
}
