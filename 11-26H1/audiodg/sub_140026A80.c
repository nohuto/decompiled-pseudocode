/*
 * XREFs of sub_140026A80 @ 0x140026A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall sub_140026A80(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2,
        _QWORD *a3,
        _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  if ( a3 )
    *a3 = (char *)a1 + 88;
  if ( a4 )
    *a4 = (char *)a1 + 136;
  v5 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  *a2 = v5;
  return a2;
}
