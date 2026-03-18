/*
 * XREFs of ??0PATH@@QEAA@XZ @ 0x140067D28
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140067D5C (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFastPolyPolyline @ 0x14027E1D0 (NtGdiFastPolyPolyline.c)
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
