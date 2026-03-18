/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1400194C0
 * Callers:
 *     HmgShareLockIgnoreStockBit @ 0x14006F0F0 (HmgShareLockIgnoreStockBit.c)
 *     ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C4FCC (-HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019500 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceIncrement(char a1, struct OBJECT *a2)
{
  if ( a1 == 5 )
  {
    TrackObjectReferenceIncrement(0LL, *((_QWORD *)a2 + 85));
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceIncrement(2LL, *((_QWORD *)a2 + 17));
  }
}
