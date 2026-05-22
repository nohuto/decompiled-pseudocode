/*
 * XREFs of ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010ECAC
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18006C7BC (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18006C8D4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009B2C4 (--3@YAXPEAX@Z.c)
 *     ??1GameInputModule@@QEAA@XZ @ 0x18010EB20 (--1GameInputModule@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall GameInputModule::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  GameInputModule::~GameInputModule(this);
  operator delete(this);
  return this;
}
