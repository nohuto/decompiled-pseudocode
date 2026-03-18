/*
 * XREFs of ?GreGetRandomRgnApiExt@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x14013C780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetRandomRgnApiExt(HDC a1, HRGN a2, unsigned int a3)
{
  int (*v6)(void); // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(HDC, HRGN, _QWORD); // rax

  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 80LL);
  if ( !v6 || v6() < 0 )
    return 0LL;
  v8 = *(__int64 (__fastcall **)(HDC, HRGN, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 88LL);
  if ( v8 )
    return v8(a1, a2, a3);
  else
    return 0xFFFFFFFFLL;
}
