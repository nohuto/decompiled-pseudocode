/*
 * XREFs of ViCheckDifDdiExist @ 0x140C28468
 * Callers:
 *     VfCheckDifDdiExist @ 0x140C2810C (VfCheckDifDdiExist.c)
 * Callees:
 *     <none>
 */

char __fastcall ViCheckDifDdiExist(__int64 a1, int a2)
{
  _QWORD *i; // rcx
  _QWORD *v3; // rax

  for ( i = (_QWORD *)(a1 + 56); *((_DWORD *)i - 2) != a2; i += 7 )
  {
    v3 = i;
    if ( !*v3 )
      return 0;
  }
  return 1;
}
