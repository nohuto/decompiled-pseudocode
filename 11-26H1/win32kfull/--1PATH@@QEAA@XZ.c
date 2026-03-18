/*
 * XREFs of ??1PATH@@QEAA@XZ @ 0x1401E24E0
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x14027E1D0 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

void __fastcall PATH::~PATH(PATH *this)
{
  PATH_CORE::~PATH_CORE((PATH *)((char *)this + 24));
}
