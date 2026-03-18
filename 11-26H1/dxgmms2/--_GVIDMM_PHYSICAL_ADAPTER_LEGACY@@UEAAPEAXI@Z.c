/*
 * XREFs of ??_GVIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAPEAXI@Z @ 0x14004F600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA@XZ @ 0x1400B10DC (--1VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA@XZ.c)
 */

VIDMM_PHYSICAL_ADAPTER_LEGACY *__fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::`scalar deleting destructor'(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        char a2)
{
  VIDMM_PHYSICAL_ADAPTER_LEGACY::~VIDMM_PHYSICAL_ADAPTER_LEGACY(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
