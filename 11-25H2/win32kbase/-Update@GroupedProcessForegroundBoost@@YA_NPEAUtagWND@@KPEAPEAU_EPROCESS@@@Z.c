/*
 * XREFs of ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C720
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401741B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C5A8 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14009CAF4 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14009CF00 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14009D7EC (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     qsort @ 0x1401A28E0 (qsort.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
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
          *v9 = 0LL;
          --v4;
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
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v14);
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
