/*
 * XREFs of sub_1400A4ED4 @ 0x1400A4ED4
 * Callers:
 *     sub_1400A68A0 @ 0x1400A68A0 (sub_1400A68A0.c)
 *     sub_1400A95C8 @ 0x1400A95C8 (sub_1400A95C8.c)
 * Callees:
 *     sub_1400A9094 @ 0x1400A9094 (sub_1400A9094.c)
 */

_QWORD *__fastcall sub_1400A4ED4(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  *(_QWORD *)a1 = 0LL;
  v2 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = a2[1];
  if ( !v3 )
LABEL_7:
    sub_1400A9094(a1, a2, v2);
  v4 = *(_DWORD *)(v3 + 8);
  do
  {
    if ( !v4 )
      goto LABEL_7;
    a1 = (unsigned int)(v4 + 1);
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), a1, v4);
  }
  while ( v5 != v4 );
  *v2 = *a2;
  v2[1] = a2[1];
  return v2;
}
