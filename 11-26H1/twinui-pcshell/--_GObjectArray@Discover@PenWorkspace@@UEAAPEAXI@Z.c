/*
 * XREFs of ??_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803E7CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ObjectArray@Discover@PenWorkspace@@UEAA@XZ @ 0x1803E7A5C (--1ObjectArray@Discover@PenWorkspace@@UEAA@XZ.c)
 */

PenWorkspace::Discover::ObjectArray *__fastcall PenWorkspace::Discover::ObjectArray::`scalar deleting destructor'(
        PenWorkspace::Discover::ObjectArray *this,
        char a2)
{
  PenWorkspace::Discover::ObjectArray::~ObjectArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
