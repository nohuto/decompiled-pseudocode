/*
 * XREFs of ApiSetSanitizeRIMCOMPLETEFRAME @ 0x140060FF4
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140060B24 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetSanitizeRIMCOMPLETEFRAME(__int64 a1)
{
  __int64 v1; // rbx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64); // rax

  v1 = a1;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5504LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 5512LL);
    if ( v4 )
      return v4(v1);
    else
      return 0LL;
  }
  return v1;
}
