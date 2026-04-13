/*
 * XREFs of ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800219E8
 * Callers:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800219DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180021A54 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int v5; // ebx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a2 * a3]; --v5 >= 0; a4(i) )
    i -= a2;
}
