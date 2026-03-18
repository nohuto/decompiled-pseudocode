/*
 * XREFs of ApiSetEditionIsSAS @ 0x14011094C
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x140110600 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsSAS(__int64 a1, __int64 a2)
{
  char v3; // si
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int (__fastcall *v9)(__int64, __int64); // rax

  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5640LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48);
      v9 = *(unsigned int (__fastcall **)(__int64, __int64))(v8 + 5648);
      if ( v9 )
      {
        LOBYTE(v8) = v3;
        return v9(v8, a2);
      }
    }
  }
  return v4;
}
