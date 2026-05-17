/*
 * XREFs of ImportTablepFreeModuleSorted @ 0x180121D00
 * Callers:
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall ImportTablepFreeModuleSorted(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  _QWORD **v3; // r8
  _QWORD *i; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *a1;
    v2 = a1;
    while ( 1 )
    {
      v3 = (_QWORD **)v2[2];
      if ( v3 )
      {
        for ( i = *v3; ; i = (_QWORD *)*i )
        {
          RtlFreeHeap_0();
          if ( !i )
            break;
        }
      }
      result = RtlFreeHeap_0();
      v2 = v1;
      if ( !v1 )
        break;
      v1 = (_QWORD *)*v1;
    }
  }
  return result;
}
