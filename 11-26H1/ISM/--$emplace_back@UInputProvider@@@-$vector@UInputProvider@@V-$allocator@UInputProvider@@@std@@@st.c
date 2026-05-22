/*
 * XREFs of ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x1800CE2E0
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180020C3C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800CE108 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 */

char *__fastcall std::vector<InputProvider>::emplace_back<InputProvider>(__int64 *a1, _OWORD *a2)
{
  _OWORD *v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // rdx

  v3 = (_OWORD *)a1[1];
  if ( v3 == (_OWORD *)a1[2] )
    return std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, (__int64)v3, (__int64)a2);
  v4 = v3 + 1;
  *v3 = *a2;
  v5 = a2 + 1;
  *v4 = 0LL;
  if ( v4 != (_QWORD *)(a2 + 1) )
  {
    *v4 = *v5;
    *v5 = 0LL;
  }
  v6 = a1[1];
  a1[1] = v6 + 24;
  return (char *)v6;
}
