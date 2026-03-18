/*
 * XREFs of ApiSetEditionPostUpdateKeyStateEvent @ 0x14019CD78
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1400419B0 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostUpdateKeyStateEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  int v8; // eax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5344LL);
  if ( v5 && v5() >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 5352LL);
    if ( v7 )
      v8 = v7(a1, a2);
    else
      v8 = 0;
    LOBYTE(v4) = v8 != 0;
  }
  return v4;
}
