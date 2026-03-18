/*
 * XREFs of ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A7000
 * Callers:
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_02739f59c5c72c5f20f913f1c43e5320_@@CA@PEAX@Z @ 0x1401A5D40 (-_lambda_invoker_cdecl_@_lambda_02739f59c5c72c5f20f913f1c43e5320_@@CA@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockProcessByPid::_Cleanup(PVOID *this)
{
  PVOID v2; // rcx

  ObfDereferenceObject(this[3]);
  v2 = this[4];
  this[3] = 0LL;
  if ( v2 )
  {
    ZwClose(v2);
    this[4] = 0LL;
  }
}
