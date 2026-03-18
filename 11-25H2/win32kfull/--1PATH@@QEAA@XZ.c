/*
 * XREFs of ??1PATH@@QEAA@XZ @ 0x140010140
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x14000F6D0 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

void __fastcall PATH::~PATH(PATH *this)
{
  PATH_CORE::~PATH_CORE((PATH *)((char *)this + 24));
}
