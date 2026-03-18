/*
 * XREFs of ApiSetEditionIsSAS @ 0x1401BEACC
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x14014D950 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsSAS(__int64 a1, __int64 a2)
{
  char v3; // si
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(__int64, __int64); // rax

  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5200LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48);
      v8 = *(unsigned int (__fastcall **)(__int64, __int64))(v7 + 5208);
      if ( v8 )
      {
        LOBYTE(v7) = v3;
        return v8(v7, a2);
      }
    }
  }
  return v4;
}
