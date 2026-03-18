/*
 * XREFs of ??0PATH@@QEAA@XZ @ 0x140010160
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x14000F6D0 (NtGdiFastPolyPolyline.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140010330 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

PATH *__fastcall PATH::PATH(PATH *this)
{
  PATH_CORE::PATH_CORE((PATH *)((char *)this + 24));
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  return this;
}
