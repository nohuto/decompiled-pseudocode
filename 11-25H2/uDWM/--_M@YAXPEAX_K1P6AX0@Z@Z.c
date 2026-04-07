/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009AC1C
 * Callers:
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x18007071C (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18009AC8C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}
