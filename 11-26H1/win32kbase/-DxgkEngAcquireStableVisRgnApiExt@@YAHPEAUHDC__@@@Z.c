/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAHPEAUHDC__@@@Z @ 0x14013FD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(HDC); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 320LL);
  if ( !v3 || v3() < 0 )
    return 0LL;
  v5 = *(unsigned int (__fastcall **)(HDC))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24) + 328LL);
  if ( v5 )
    return v5(a1);
  return v2;
}
