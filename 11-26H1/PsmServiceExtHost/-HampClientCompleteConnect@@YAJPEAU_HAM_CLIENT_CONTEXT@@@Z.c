/*
 * XREFs of ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E804
 * Callers:
 *     ?HamSrvCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180066B20 (-HamSrvCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012DC0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012E20 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z @ 0x18004036C (-HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180041DF8 (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18005BA40 (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 */

__int64 __fastcall HampClientCompleteConnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  unsigned int v2; // edx
  unsigned int v3; // esi
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx

  HampClientAcquireLockExclusive(a1);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v3 = 0;
    FirstActivity = HampClientGetFirstActivity(a1, v2);
    if ( !FirstActivity )
    {
LABEL_11:
      *((_DWORD *)a1 + 50) = 2;
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( *((_BYTE *)FirstActivity + 562) == 1 )
        goto LABEL_6;
      if ( *((_BYTE *)FirstActivity + 562) == 3 )
        break;
LABEL_8:
      v6 = *((_QWORD *)FirstActivity + 6);
      v7 = *((_QWORD *)FirstActivity + 8);
      FirstActivity = 0LL;
      if ( v6 != v7 + 56 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v6 - 48);
      if ( !FirstActivity )
        goto LABEL_11;
    }
    if ( (*((_DWORD *)FirstActivity + 138) & 0x3C00) != 0 )
      HampActIssueStopRequestCallback(FirstActivity, 1u);
LABEL_6:
    if ( (*((_BYTE *)FirstActivity + 552) & 8) != 0 )
      HampActIssueInvalidatedCallback(FirstActivity, *((unsigned __int16 *)FirstActivity + 280), 1LL);
    goto LABEL_8;
  }
  v3 = -1073700861;
LABEL_3:
  HampClientReleaseLockExclusive(a1);
  return v3;
}
