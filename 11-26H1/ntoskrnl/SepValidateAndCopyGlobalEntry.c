/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x14052C4B4
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1403B1D1C (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403B212C (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // ebx
  _DWORD *Pool2; // rax
  _QWORD *v5; // rdi
  unsigned int v6; // ecx
  _QWORD *v7; // rax
  __int64 SingletonEntryFromIndexNumber; // rsi
  KIRQL v9; // al
  KIRQL v10; // bp
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v14 = 0;
  v15 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v14, &v15);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v5 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v6 = v14;
    *Pool2 = 0;
    Pool2[6] = 0;
    v7 = Pool2 + 2;
    v7[1] = v7;
    *v7 = v7;
    v5[5] = v5 + 4;
    v5[4] = v5 + 4;
    SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(v6);
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
    v10 = v9;
    if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 8) != v15 )
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber, v9);
      ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
LABEL_9:
      ExFreePoolWithTag(v5, 0x74416553u);
      return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
    }
    v11 = *(_QWORD *)(SingletonEntryFromIndexNumber + 16);
    if ( v11 )
    {
      v12 = AuthzBasepDuplicateSecurityAttributes(v11, (__int64)v5, 0);
      *a2 = v5;
      ProcUniqueLuidAndIndexFromAttributeInfo = v12;
      v5 = 0LL;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber, v10);
    if ( v5 )
      goto LABEL_9;
  }
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
