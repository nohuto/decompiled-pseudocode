/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x18000CFCC
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x180005584 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  PVOID v1; // rax

  if ( !qword_18017F268 )
    abort();
  v1 = EncodePointer(a1);
  qword_18017F570[--qword_18017F268] = v1;
}
