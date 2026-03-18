/*
 * XREFs of ?RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@@Z @ 0x14014BB34
 * Callers:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x140140A0C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tagTHREADINFO::RemoveThreadFromListWorker(__int64 a1, __int64 a2, int a3, int a4)
{
  char v4; // r11
  __int64 *i; // rax
  __int64 v6; // rdx

  v4 = 0;
  for ( i = (__int64 *)(a2 + a3); ; i = (__int64 *)(a4 + v6) )
  {
    v6 = *i;
    if ( !*i )
      break;
    if ( v6 == a1 )
    {
      v4 = 1;
      *i = *(_QWORD *)(a4 + a1);
      *(_QWORD *)(a4 + a1) = 0LL;
      return v4;
    }
  }
  return v4;
}
