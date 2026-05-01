/*
 * XREFs of ??_GRdpShellExtensionHost@@UEAAPEAXI@Z @ 0x18064DC1C
 * Callers:
 *     ??_ERdpShellExtensionHost@@WCA@EAAPEAXI@Z @ 0x18064DBD0 (--_ERdpShellExtensionHost@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RdpShellExtensionHost@@UEAA@XZ @ 0x18064D938 (--1RdpShellExtensionHost@@UEAA@XZ.c)
 */

RdpShellExtensionHost *__fastcall RdpShellExtensionHost::`scalar deleting destructor'(
        RdpShellExtensionHost *this,
        char a2)
{
  RdpShellExtensionHost::~RdpShellExtensionHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
