/*
 * XREFs of ?OnDaemonTimer@LastWokenThread@@YAXXZ @ 0x14009AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z @ 0x14009AA58 (-DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z.c)
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x14009AAE8 (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 */

void __fastcall LastWokenThread::OnDaemonTimer(LastWokenThread *this)
{
  __int64 v1; // rbx
  struct _tagWIN32KUSERSESSIONSTATE *CurrentProcessUserGlobals; // rax

  v1 = MEMORY[0xFFFFF78000000014];
  CurrentProcessUserGlobals = GetCurrentProcessUserGlobals();
  CLastWokenThread::DeBoostIfTime(*((CLastWokenThread **)CurrentProcessUserGlobals + 381), v1 - 20000000);
}
