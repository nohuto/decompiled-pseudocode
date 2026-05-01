/*
 * XREFs of ??_GCGridTelemetryController@@UEAAPEAXI@Z @ 0x18020E900
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopFactory@@UEAA@XZ @ 0x1802C2070 (--1CVirtualDesktopFactory@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CGridTelemetryController *__fastcall CGridTelemetryController::`scalar deleting destructor'(
        CGridTelemetryController *this,
        char a2)
{
  CVirtualDesktopFactory::~CVirtualDesktopFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
