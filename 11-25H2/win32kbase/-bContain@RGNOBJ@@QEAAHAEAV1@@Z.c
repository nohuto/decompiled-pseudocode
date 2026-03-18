/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1400C6DAC
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct RGNOBJ *a2)
{
  struct REGION_CORE *v2; // r14
  _DWORD *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  int v7; // edi

  v2 = qword_1402A10B0;
  v3 = (_DWORD *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v4 = *(_QWORD *)a2 + 24LL;
  v5 = 0;
  v6 = v4 & -(__int64)(*(_QWORD *)a2 != 0LL);
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    v7 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 56LL))(v3, v6);
    ExReleasePushLockSharedEx((char *)v2 + 8, 2LL);
    KeLeaveCriticalRegion();
    LOBYTE(v5) = v7 != 0;
  }
  else if ( v3[7] <= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x1C)
         && v3[9] >= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x24)
         && v3[8] <= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x20)
         && v3[10] >= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x28) )
  {
    return (unsigned int)((_DWORD)qword_1402A10B0 + 1);
  }
  return v5;
}
