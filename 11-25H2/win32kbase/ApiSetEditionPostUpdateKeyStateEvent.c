/*
 * XREFs of ApiSetEditionPostUpdateKeyStateEvent @ 0x140094860
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1400943F0 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostUpdateKeyStateEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  int v7; // eax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5784LL);
  if ( v5 && v5() >= 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5792LL);
    if ( v6 )
      v7 = v6(a1, a2);
    else
      v7 = 0;
    LOBYTE(v4) = v7 != 0;
  }
  return v4;
}
