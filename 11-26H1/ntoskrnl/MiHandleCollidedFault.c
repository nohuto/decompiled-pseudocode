/*
 * XREFs of MiHandleCollidedFault @ 0x14038B418
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiIssueFlowThroughFault @ 0x14038B1F8 (MiIssueFlowThroughFault.c)
 *     MiAllowReadInProgress @ 0x14038B388 (MiAllowReadInProgress.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 */

__int64 __fastcall MiHandleCollidedFault(
        __int64 *a1,
        _SLIST_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        struct _SLIST_ENTRY **a5,
        _DWORD *a6)
{
  struct _SLIST_ENTRY **v6; // r15
  _DWORD *v8; // rsi
  int v12; // ebp
  __int64 result; // rax
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned int v18; // esi

  v6 = a5;
  v8 = a6;
  *a5 = 0LL;
  *v8 = 2;
  v12 = MiAllowReadInProgress(a1);
  if ( v12 < 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    *v8 = 0;
    return (unsigned int)v12;
  }
  else
  {
    result = MiIssueFlowThroughFault((__int64)a1, a2, a3, *(_QWORD *)a4 - 32LL, a4, v6, v8);
    if ( *v8 != 1 )
    {
      LODWORD(a5) = 0;
      LOBYTE(v14) = 2;
      v15 = MiWaitForCollidedFaultComplete((_DWORD)a1, a4, a3, v14, (__int64)&a5);
      v18 = v15;
      if ( !(_DWORD)a5 )
      {
        if ( !v15 )
        {
          MiAddLockedPageCharge(a4, 3, v16, v17);
          *(_QWORD *)(a4 + 24) = (*(_QWORD *)(a4 + 24) + 1LL) ^ (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0xC000000000000000uLL;
          *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xFFF8FFFF | 0x60000;
          MiRemoveLockedPageChargeAndDecRef(a4);
          return 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a3 )
          MiUnlockProtoPoolPage(a3, 0x11u);
      }
      return v18;
    }
  }
  return result;
}
