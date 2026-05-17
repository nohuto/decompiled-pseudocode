/*
 * XREFs of LdrpAddNodeServiceTag @ 0x1800E3440
 * Callers:
 *     LdrpAddNodeServiceTag @ 0x1800E3440 (LdrpAddNodeServiceTag.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpAddNodeServiceTag @ 0x1800E3440 (LdrpAddNodeServiceTag.c)
 */

__int64 __fastcall LdrpAddNodeServiceTag(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result != -1 )
  {
    result = *(_QWORD *)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
    {
      for ( result = *(_QWORD *)(a1 + 16); result; result = *(_QWORD *)result )
      {
        if ( *(_DWORD *)(result + 8) == a2 )
          return result;
      }
      result = RtlAllocateHeap_0();
      if ( result )
      {
        *(_DWORD *)(result + 8) = a2;
        *(_QWORD *)result = *(_QWORD *)(a1 + 16);
        v5 = *(_QWORD **)(a1 + 40);
        *(_QWORD *)(a1 + 16) = result;
        if ( v5 )
        {
          v6 = v5;
          do
          {
            v6 = (_QWORD *)*v6;
            result = LdrpAddNodeServiceTag(v6[1], a2);
          }
          while ( v6 != v5 );
        }
      }
    }
  }
  return result;
}
