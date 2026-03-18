/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1401562B8
 * Callers:
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1401562B8 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     IntersectWithParents @ 0x14003192C (IntersectWithParents.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1401562B8 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x140156758 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  struct tagWND *i; // rbx
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  struct tagRECT v14; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( v6 )
  {
    v14 = 0LL;
    if ( v6 <= 1 || (unsigned int)GreGetRgnBox(v6, &v14) )
      v14 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
    if ( (unsigned int)IntersectWithParents((__int64)a2, &v14.left) )
    {
      v13 = 0LL;
      v12[0] = 0;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v12);
      UserSessionState = W32GetUserSessionState(v8, v7);
      xxxInternalInvalidate(a2, *(HRGN *)(UserSessionState + 43096), 0x48u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
      if ( !(unsigned int)SpbCheckRect2(a1, a2, &v14, 1u) )
        return 0LL;
    }
  }
  if ( a3 )
  {
    for ( i = (struct tagWND *)*((_QWORD *)a2 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( !(unsigned int)SpbTransfer(a1, i, 1) )
        return 0LL;
    }
  }
  return 1LL;
}
