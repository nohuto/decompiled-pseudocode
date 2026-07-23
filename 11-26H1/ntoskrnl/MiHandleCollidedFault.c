/*
 * XREFs of MiHandleCollidedFault @ 0x14038D1C8
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiIssueFlowThroughFault @ 0x14038CFA8 (MiIssueFlowThroughFault.c)
 *     MiAllowReadInProgress @ 0x14038D138 (MiAllowReadInProgress.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 */

__int64 __fastcall MiHandleCollidedFault(
        __int64 *a1,
        _SLIST_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        _SLIST_ENTRY **a5,
        _DWORD *a6)
{
  _SLIST_ENTRY **v6; // r15
  _DWORD *v8; // rsi
  __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // r8
  __int64 result; // rax
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned int v21; // esi

  v6 = a5;
  v8 = a6;
  *a5 = 0LL;
  *v8 = 2;
  v13 = MiAllowReadInProgress(a1);
  if ( v13 < 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v12) = 17;
      MiUnlockProtoPoolPage(a3, v12, v14);
    }
    *v8 = 0;
    return (unsigned int)v13;
  }
  else
  {
    result = MiIssueFlowThroughFault((__int64)a1, a2, a3, *(_QWORD *)a4 - 32LL, a4, v6, v8);
    if ( *v8 != 1 )
    {
      LODWORD(a5) = 0;
      LOBYTE(v16) = 2;
      v17 = MiWaitForCollidedFaultComplete((_DWORD)a1, a4, a3, v16, (__int64)&a5);
      v21 = v17;
      if ( !(_DWORD)a5 )
      {
        if ( !v17 )
        {
          MiAddLockedPageCharge(a4, 3, v19, v20);
          *(_QWORD *)(a4 + 24) = (*(_QWORD *)(a4 + 24) + 1LL) ^ (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0xC000000000000000uLL;
          *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xFFF8FFFF | 0x60000;
          MiRemoveLockedPageChargeAndDecRef(a4);
          return 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a3 )
        {
          LOBYTE(v18) = 17;
          MiUnlockProtoPoolPage(a3, v18, v19);
        }
      }
      return v21;
    }
  }
  return result;
}
