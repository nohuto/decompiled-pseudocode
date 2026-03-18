/*
 * XREFs of ?Clear@LastWokenThread@@YAXXZ @ 0x1400CCAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CLastWokenThread@@QEAAXXZ @ 0x1400CCAE4 (-Clear@CLastWokenThread@@QEAAXXZ.c)
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x1400D1338 (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 */

void __fastcall LastWokenThread::Clear(LastWokenThread *this)
{
  struct _tagWIN32KUSERSESSIONSTATE *CurrentProcessUserGlobals; // rax

  CurrentProcessUserGlobals = GetCurrentProcessUserGlobals();
  CLastWokenThread::Clear(*((CLastWokenThread **)CurrentProcessUserGlobals + 381));
}
