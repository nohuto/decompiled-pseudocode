/*
 * XREFs of DrvGetHdevName @ 0x1400EBE20
 * Callers:
 *     NtUserGetHDevName @ 0x1400DECF0 (NtUserGetHDevName.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DrvGetHdevName(__int64 a1, _WORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int16 v4; // ax
  _WORD *v5; // rcx

  v2 = 32LL;
  v3 = *(_QWORD *)(a1 + 2568) - (_QWORD)a2;
  do
  {
    if ( v2 == -2147483614 )
      break;
    v4 = *(_WORD *)((char *)a2 + v3 + 64);
    if ( !v4 )
      break;
    *a2++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = a2 - 1;
  if ( v2 )
    v5 = a2;
  *v5 = 0;
  return v2 != 0;
}
