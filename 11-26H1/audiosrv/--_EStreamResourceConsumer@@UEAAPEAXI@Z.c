/*
 * XREFs of ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x180159180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StreamResourceConsumer@@UEAA@XZ @ 0x180158F94 (--1StreamResourceConsumer@@UEAA@XZ.c)
 */

StreamResourceConsumer *__fastcall StreamResourceConsumer::`vector deleting destructor'(
        StreamResourceConsumer *this,
        char a2)
{
  StreamResourceConsumer::~StreamResourceConsumer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
