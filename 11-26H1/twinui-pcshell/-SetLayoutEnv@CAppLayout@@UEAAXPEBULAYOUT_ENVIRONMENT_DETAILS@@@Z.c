/*
 * XREFs of ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1806C73D0
 * Callers:
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D972C (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall CAppLayout::SetLayoutEnv(CAppLayout *this, const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v4, (RTL_SRWLOCK *)this + 2);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 1);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
