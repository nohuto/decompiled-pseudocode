/*
 * XREFs of CitEnableKeyboardDelegation @ 0x1401B3410
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1401B9F60 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1401B3368 (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 */

void __fastcall CitEnableKeyboardDelegation(int a1, struct _CIT_PROCESS **a2, struct _CIT_PROCESS **a3)
{
  struct _CIT_PROCESS *v6; // rdi
  struct _CIT_PROCESS *v7; // rax
  struct _CIT_PROCESS *v8; // rbx

  if ( !CitIsEnabled(a1, (int)a2, (int)a3) )
    return;
  if ( a2 )
  {
    if ( a1 && a3 && a2 != a3 )
    {
      v6 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a2);
      v7 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a3);
      v8 = v7;
      if ( v6 && v7 )
      {
        if ( *((_QWORD *)v6 + 3) )
          CitpClearDelegation(v6);
        if ( *((_QWORD *)v8 + 2) )
          CitpClearDelegation(v8);
        *((_QWORD *)v6 + 3) = v8;
        *((_QWORD *)v8 + 2) = v6;
      }
      return;
    }
    CitpClearDelegation(a2[114]);
  }
  if ( a3 )
    CitpClearDelegation(a3[114]);
}
