/*
 * XREFs of ??_GImmersiveShellComponentsConfiguration@@UEAAPEAXI@Z @ 0x1803DBA90
 * Callers:
 *     ??_E?$heap_implements@UImmersiveShellComponentsConfiguration@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1803DBA80 (--_E-$heap_implements@UImmersiveShellComponentsConfiguration@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803CFE98 (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 */

ImmersiveShellComponentsConfiguration *__fastcall ImmersiveShellComponentsConfiguration::`scalar deleting destructor'(
        ImmersiveShellComponentsConfiguration *this,
        char a2)
{
  ImmersiveShellComponentsConfiguration::~ImmersiveShellComponentsConfiguration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
