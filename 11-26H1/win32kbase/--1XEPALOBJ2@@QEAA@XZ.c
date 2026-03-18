/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x140191B8C
 * Callers:
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F237C (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1400C497C (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(unsigned int **this)
{
  if ( *this )
    XEPALOBJ::DecShareRefCountAndInvalidatePalette(this);
  PopThreadGuardedObject(this + 1);
}
