/*
 * XREFs of ?GetKind@LastWokenThread@@YA?AW4LastWokenThreadKind@@XZ @ 0x140159500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x1400D1338 (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 *     ?GetKind@CLastWokenThread@@QEAA?AW4LastWokenThreadKind@@XZ @ 0x140159524 (-GetKind@CLastWokenThread@@QEAA-AW4LastWokenThreadKind@@XZ.c)
 */

__int64 __fastcall LastWokenThread::GetKind(__int64 a1)
{
  struct _tagWIN32KUSERSESSIONSTATE *CurrentProcessUserGlobals; // rax

  CurrentProcessUserGlobals = GetCurrentProcessUserGlobals(a1);
  return CLastWokenThread::GetKind(*((_QWORD *)CurrentProcessUserGlobals + 381));
}
