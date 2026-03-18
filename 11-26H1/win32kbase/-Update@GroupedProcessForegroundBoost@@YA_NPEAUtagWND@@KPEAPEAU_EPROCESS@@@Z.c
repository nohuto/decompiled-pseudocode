/*
 * XREFs of ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDD10
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1400DD8E0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1400DE084 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1400DE4D0 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     qsort @ 0x1401C6DA0 (qsort.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall GroupedProcessForegroundBoost::Update(
        GroupedProcessForegroundBoost *this,
        struct tagWND *a2,
        struct _EPROCESS **a3,
        struct _EPROCESS **a4)
{
  unsigned int v4; // ebx
  size_t v7; // r12
  struct _EPROCESS **v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // r14
  NTSTATUS v11; // eax
  ULONG v13; // eax
  _BYTE v14[16]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+30h] [rbp-68h]
  char v16; // [rsp+40h] [rbp-58h]
  char v17; // [rsp+48h] [rbp-50h]

  v4 = (unsigned int)a2;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    v14,
    *((_QWORD *)this + 18),
    a3,
    a4);
  if ( v4 )
  {
    v7 = v4;
    qsort(a3, v4, 8uLL, pEProcessCompareAscending);
    if ( v4 > 1 )
    {
      v8 = a3 + 1;
      v9 = (PVOID *)a3;
      v10 = v4 - 1;
      do
      {
        if ( *v8 == *v9 )
        {
          ObfDereferenceObject(*v9);
          --v4;
          *v9 = 0LL;
        }
        ++v9;
        ++v8;
        --v10;
      }
      while ( v10 );
    }
    qsort(a3, v7, 8uLL, pEProcessCompareDescending);
    v11 = GroupedFGBoostProp::SetGroupedFGBoost((struct _KTHREAD ***)this, v4, a3);
  }
  else
  {
    v11 = GroupedFGBoostProp::ClearGroupedFGBoost(this);
  }
  if ( v11 < 0 )
  {
    v13 = RtlNtStatusToDosError(v11);
    UserSetLastError(v13);
    if ( v16 && v17 && v15 )
      RIMUnlockExclusive(v15);
    return 0;
  }
  else
  {
    if ( v16 && v17 )
    {
      if ( v15 )
        RIMUnlockExclusive(v15);
    }
    return 1;
  }
}
