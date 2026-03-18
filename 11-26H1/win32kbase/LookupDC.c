/*
 * XREFs of LookupDC @ 0x1401363C0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall LookupDC(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  int v6; // edx
  int v7; // ecx
  __int64 v8; // r8
  __int64 *i; // rbx
  int v10; // eax

  v3 = 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968);
  for ( i = *(__int64 **)(v8 + 24); ; i = (__int64 *)*i )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 56968) + 24LL;
    if ( i == (__int64 *)v8 )
      break;
    v10 = *((_DWORD *)i + 12);
    if ( (v10 & 0x400800) == 0 && i[2] == a1 && (v10 & 0x1000) != 0 && (!a2 || !i[9]) )
      return i;
  }
  return (__int64 *)v3;
}
