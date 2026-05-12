/*
 * XREFs of sub_1400D182C @ 0x1400D182C
 * Callers:
 *     sub_1400CA6FC @ 0x1400CA6FC (sub_1400CA6FC.c)
 *     sub_1400CBACC @ 0x1400CBACC (sub_1400CBACC.c)
 * Callees:
 *     <none>
 */

const char *__fastcall sub_1400D182C(__int64 a1, const char *a2, __int16 a3)
{
  const char *v6; // rbx
  _QWORD *v7; // rdi

  v6 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 384), 1u);
  v7 = *(_QWORD **)(a1 + 360);
  while ( v7 != (_QWORD *)(a1 + 360) )
  {
    v6 = (const char *)(v7 - 1);
    if ( *((_WORD *)v7 - 2) == a3 && !strnicmp(v6 + 60, a2, 0x100uLL) )
      break;
    v7 = (_QWORD *)*v7;
    v6 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 384));
  KeLeaveCriticalRegion();
  return v6;
}
