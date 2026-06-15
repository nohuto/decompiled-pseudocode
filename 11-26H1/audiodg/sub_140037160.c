/*
 * XREFs of sub_140037160 @ 0x140037160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140037160(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  if ( *(_QWORD *)(a1 + 184) )
  {
    sub_1400B6010(a2);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
