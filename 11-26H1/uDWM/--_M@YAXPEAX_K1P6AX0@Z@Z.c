/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008E660
 * Callers:
 *     ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180007F38 (--1WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18008E6D0 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}
