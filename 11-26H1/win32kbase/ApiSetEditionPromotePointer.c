/*
 * XREFs of ApiSetEditionPromotePointer @ 0x1401BCA2C
 * Callers:
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1401654F0 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     EditionPromotePointer @ 0x140178334 (EditionPromotePointer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPromotePointer(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v5; // bp
  unsigned int v6; // ebx
  int (*v7)(void); // rax

  v5 = a1;
  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5856LL);
  if ( v7 && v7() >= 0 )
    return (unsigned int)EditionPromotePointer(v5, a2, a3);
  return v6;
}
