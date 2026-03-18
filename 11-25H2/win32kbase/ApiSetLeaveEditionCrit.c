/*
 * XREFs of ApiSetLeaveEditionCrit @ 0x140197400
 * Callers:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetLeaveEditionCrit(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4416LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 4424LL);
      if ( result )
        return (__int64 (*)(void))result();
    }
  }
  return result;
}
