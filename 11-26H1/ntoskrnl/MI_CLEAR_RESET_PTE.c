/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x140316F98
 * Callers:
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_CLEAR_RESET_PTE(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v2; // r9
  __int64 v3; // rcx

  result = *a1;
  v2 = a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    result = MiReadPteShadow(a1, result);
  if ( result && qword_140E2D8C0 )
  {
    if ( (result & 0x10) != 0 )
      result &= ~0x10uLL;
    else
      result &= qword_140E2D8C8;
  }
  v3 = (unsigned int)result;
  if ( qword_140E2D8C0 )
  {
    result &= qword_140E2D8C0;
    if ( (_DWORD)result )
      v3 |= 0x10uLL;
    else
      v3 |= qword_140E2D8C0;
  }
  *v2 = v3;
  return result;
}
