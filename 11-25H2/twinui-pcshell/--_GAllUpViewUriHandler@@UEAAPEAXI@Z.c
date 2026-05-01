/*
 * XREFs of ??_GAllUpViewUriHandler@@UEAAPEAXI@Z @ 0x1804860B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AllUpViewUriHandler@@UEAA@XZ @ 0x180486068 (--1AllUpViewUriHandler@@UEAA@XZ.c)
 */

AllUpViewUriHandler *__fastcall AllUpViewUriHandler::`scalar deleting destructor'(AllUpViewUriHandler *this, char a2)
{
  AllUpViewUriHandler::~AllUpViewUriHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
