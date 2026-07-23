/*
 * XREFs of ObFindHandleForObject @ 0x1409BB240
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExEnumHandleTable @ 0x14092BB30 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 */

bool __fastcall ObFindHandleForObject(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  char v9; // di
  unsigned int *v10; // rcx
  char v11; // bl
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0;
  v10 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( v10 )
  {
    if ( a2 )
      v13[0] = a2 - 48;
    else
      v13[0] = 0LL;
    v13[1] = a3;
    v13[2] = a4;
    v11 = ExEnumHandleTable(v10, (__int64)ObpEnumFindHandleProcedure, (__int64)v13, a5);
    ExReleaseRundownProtection_0(a1 + 61);
    return v11 != 0;
  }
  return v9;
}
