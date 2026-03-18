/*
 * XREFs of ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1400C497C
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x14018D830 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x140191B8C (--1XEPALOBJ2@@QEAA@XZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

__int64 __fastcall XEPALOBJ::DecShareRefCountAndInvalidatePalette(unsigned int **this)
{
  __int64 SessionState; // rax
  __int64 result; // rax

  SessionState = W32GetSessionState(this);
  result = HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), *this);
  *this = 0LL;
  return result;
}
