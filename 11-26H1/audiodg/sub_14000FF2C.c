/*
 * XREFs of sub_14000FF2C @ 0x14000FF2C
 * Callers:
 *     sub_14000F730 @ 0x14000F730 (sub_14000F730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000FF2C(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 320), 0LL);
  *(_QWORD *)(a1 + 328) = v2;
  v3 = (_QWORD *)*v2;
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    *(_DWORD *)(*(_QWORD *)(v4 + 112) + 12LL) = 2;
    *(_DWORD *)(*(_QWORD *)(v4 + 112) + 32LL) = 0;
  }
  result = _InterlockedExchange64((volatile __int64 *)(a1 + 320), *(_QWORD *)(a1 + 328));
  *(_QWORD *)(a1 + 328) = 0LL;
  return result;
}
