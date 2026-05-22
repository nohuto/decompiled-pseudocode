/*
 * XREFs of ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x18010ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009B2C4 (--3@YAXPEAX@Z.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x18010EB84 (--1GameInputServerProxy@@EEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall GameInputServerProxy::`scalar deleting destructor'(RTL_SRWLOCK *this, char a2)
{
  GameInputServerProxy::~GameInputServerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
