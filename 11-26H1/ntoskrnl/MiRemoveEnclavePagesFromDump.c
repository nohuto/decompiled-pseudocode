/*
 * XREFs of MiRemoveEnclavePagesFromDump @ 0x140704EE0
 * Callers:
 *     MmGetDumpRange @ 0x1406FB5A4 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromDump(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  result = stru_140E366D8.InitialStack;
  v3 = 0LL;
  while ( result )
  {
    v3 = result;
    result = (_QWORD *)*result;
  }
  while ( v3 )
  {
    guard_dispatch_icall_no_overrides(a1, v3[3]);
    v4 = (_QWORD *)v3[1];
    result = v3;
    if ( v4 )
    {
      v3 = (_QWORD *)v3[1];
      v5 = (_QWORD *)*v4;
      if ( v5 )
      {
        do
        {
          result = (_QWORD *)*v5;
          v3 = v5;
          v5 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == result )
          break;
        result = v3;
      }
    }
  }
  return result;
}
