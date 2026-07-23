/*
 * XREFs of ImportTablepFreeModuleSorted @ 0x180121AA0
 * Callers:
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

LOGICAL __fastcall ImportTablepFreeModuleSorted(_QWORD **BaseAddress)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  _QWORD *v3; // r8
  _QWORD *i; // rsi
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    v1 = *BaseAddress;
    v2 = BaseAddress;
    while ( 1 )
    {
      v3 = (_QWORD *)v2[2];
      if ( v3 )
      {
        for ( i = (_QWORD *)*v3; ; i = (_QWORD *)*i )
        {
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
          v3 = i;
          if ( !i )
            break;
        }
      }
      result = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
      v2 = v1;
      if ( !v1 )
        break;
      v1 = (_QWORD *)*v1;
    }
  }
  return result;
}
