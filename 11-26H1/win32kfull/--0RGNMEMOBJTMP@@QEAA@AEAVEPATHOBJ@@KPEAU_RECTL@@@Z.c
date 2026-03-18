/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140224CD8
 * Callers:
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1401B9860 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(
        RGNMEMOBJTMP *this,
        struct EPATHOBJ *a2,
        unsigned int a3,
        struct _RECTL *a4)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vCreate(this, a2, a3, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
