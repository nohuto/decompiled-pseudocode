/*
 * XREFs of sub_1400A6778 @ 0x1400A6778
 * Callers:
 *     sub_140051260 @ 0x140051260 (sub_140051260.c)
 *     sub_140051828 @ 0x140051828 (sub_140051828.c)
 *     sub_1400A6658 @ 0x1400A6658 (sub_1400A6658.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A6778(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax
  unsigned int i; // r9d

  v1 = 0LL;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 992), 3, 2);
  if ( (_DWORD)result == 2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 968); ++i )
    {
      v1 = (_DWORD *)(*(_QWORD *)(a1 + 960) + 320LL * i);
      if ( v1[10] )
      {
        v1[8] = v1[7];
        v1[10] = 0;
      }
    }
    result = (unsigned int)v1[7];
    *(_DWORD *)(a1 + 984) = result;
    _InterlockedExchange((volatile __int32 *)(a1 + 992), 0);
  }
  return result;
}
