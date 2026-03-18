/*
 * XREFs of ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1401C025C
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400CE174 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14018E8AC (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetCompositionInputWindowUIOwner(__int64 a1)
{
  __int64 v2; // rbx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64); // rax

  v2 = 0LL;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4880LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 4888LL);
      if ( v5 )
        return v5(a1);
    }
  }
  return v2;
}
