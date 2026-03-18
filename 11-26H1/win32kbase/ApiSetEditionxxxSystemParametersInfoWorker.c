/*
 * XREFs of ApiSetEditionxxxSystemParametersInfoWorker @ 0x14012DA74
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     EditionxxxSystemParametersInfoWorker @ 0x14012DAF8 (EditionxxxSystemParametersInfoWorker.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionxxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  int (*v9)(void); // rax

  v7 = a1;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2752LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)EditionxxxSystemParametersInfoWorker(v7, a2, a3, a4);
  return v8;
}
