/*
 * XREFs of ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180021C14
 * Callers:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180021C08 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180021A54 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int i; // ebx

  for ( i = 0; i < a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}
