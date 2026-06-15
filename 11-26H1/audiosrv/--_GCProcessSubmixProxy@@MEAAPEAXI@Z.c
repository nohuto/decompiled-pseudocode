/*
 * XREFs of ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180044180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800441BC (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CProcessSubmixProxy *__fastcall CProcessSubmixProxy::`scalar deleting destructor'(CProcessSubmixProxy *this, char a2)
{
  CProcessSubmixProxy::~CProcessSubmixProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
