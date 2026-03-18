/*
 * XREFs of sub_1400250A0 @ 0x1400250A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 */

__int64 __fastcall sub_1400250A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  _DWORD *v6; // rbx

  result = sub_140005000(a2);
  v4 = result;
  v5 = (_QWORD *)(result + 4160);
  v6 = (_DWORD *)(result + 4208);
  if ( *(_QWORD *)(result + 4160) )
    result = sub_14000CF50(v3, (unsigned int)*v6, (__int64 *)(result + 4160), *(_QWORD *)(result + 4168));
  *v5 = 0LL;
  *v6 = 0;
  *(_BYTE *)(v4 + 4225) |= 8u;
  return result;
}
