/*
 * XREFs of EditionClientCharToWchar @ 0x14023E7D0
 * Callers:
 *     ApiSetEditionClientCharToWchar @ 0x140194D18 (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionClientCharToWchar(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  unsigned __int16 v3; // di
  __int64 (__fastcall *v4)(_QWORD, _QWORD); // rax

  v2 = a2;
  v3 = a1;
  v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5920LL);
  if ( v4 )
    return v4(v3, v2);
  else
    return 0LL;
}
