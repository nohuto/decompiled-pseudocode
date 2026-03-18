/*
 * XREFs of ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1400E59F0
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401EDBF0 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 *     HmgFree @ 0x1401EDCD0 (HmgFree.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct OBJECT *__fastcall HANDLELOCK::pObj(HANDLELOCK *this)
{
  return (struct OBJECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 8LL) + 96LL))(
                            *(_QWORD *)(*((_QWORD *)this + 2) + 8LL),
                            **(unsigned int **)this);
}
