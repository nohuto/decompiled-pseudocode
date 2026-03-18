/*
 * XREFs of SepRmDereferenceCapTable @ 0x1402ACB40
 * Callers:
 *     SepRmDereferenceCap @ 0x1402ACB20 (SepRmDereferenceCap.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SepRmReferenceFindCap @ 0x1403BE3D8 (SepRmReferenceFindCap.c)
 *     SepRmCapUpdateWrkr @ 0x140817BD0 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x140773F58 (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCapTable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return SepRmDestroyCapTable((PVOID)a1);
  }
  return result;
}
