/*
 * XREFs of ??_GCreationThreadDispatcher@@UEAAPEAXI@Z @ 0x1801F01E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CreationThreadDispatcher@@UEAA@XZ @ 0x1801C7310 (--1CreationThreadDispatcher@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

CreationThreadDispatcher *__fastcall CreationThreadDispatcher::`scalar deleting destructor'(
        CreationThreadDispatcher *this,
        char a2)
{
  CreationThreadDispatcher::~CreationThreadDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
