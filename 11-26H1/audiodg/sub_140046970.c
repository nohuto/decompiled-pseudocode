/*
 * XREFs of sub_140046970 @ 0x140046970
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140046970(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rcx

  if ( !*(_DWORD *)(a1 + 72) )
  {
    result = *(_QWORD *)(a1 + 808);
    v2 = *(_QWORD **)(result + 48);
    while ( v2 )
    {
      result = v2[2];
      v2 = (_QWORD *)*v2;
      v3 = *(_QWORD *)(result + 144);
      if ( v3 )
        result = sub_1400B6010(v3);
    }
  }
  return result;
}
