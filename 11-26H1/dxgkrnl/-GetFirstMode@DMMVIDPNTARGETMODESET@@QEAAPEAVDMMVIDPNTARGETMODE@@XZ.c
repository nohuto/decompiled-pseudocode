/*
 * XREFs of ?GetFirstMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x14004F170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetFirstMode(DMMVIDPNTARGETMODESET *this)
{
  struct DMMVIDPNTARGETMODE *result; // rax
  DMMVIDPNTARGETMODESET *v2; // rdx

  result = 0LL;
  v2 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  if ( v2 != (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    return (DMMVIDPNTARGETMODESET *)((char *)v2 - 8);
  return result;
}
