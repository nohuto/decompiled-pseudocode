/*
 * XREFs of ApiSetEditionIsGetAsyncKeyStateBlocked @ 0x1400E8B38
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsGetAsyncKeyStateBlocked(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (*v4)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 672LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 680LL);
      if ( v4 )
        return v4();
    }
  }
  return v1;
}
