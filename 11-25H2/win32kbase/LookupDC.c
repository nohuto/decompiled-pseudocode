/*
 * XREFs of LookupDC @ 0x1400EF9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall LookupDC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *i; // rbx
  int v8; // eax

  v2 = 0LL;
  v3 = a2;
  for ( i = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 24LL);
        i != (__int64 *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 24LL);
        i = (__int64 *)*i )
  {
    v8 = *((_DWORD *)i + 12);
    if ( (v8 & 0x400800) == 0 && i[2] == a1 && (v8 & 0x1000) != 0 && (!v3 || !i[9]) )
      return i;
  }
  return (__int64 *)v2;
}
