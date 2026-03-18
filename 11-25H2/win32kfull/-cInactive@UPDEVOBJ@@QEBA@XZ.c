/*
 * XREFs of ?cInactive@UPDEVOBJ@@QEBA@XZ @ 0x1400D7634
 * Callers:
 *     prfntKillList @ 0x1400D7300 (prfntKillList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UPDEVOBJ::cInactive(UPDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3512) + 1552LL);
  else
    return *(unsigned int *)(v1 + 1552);
}
