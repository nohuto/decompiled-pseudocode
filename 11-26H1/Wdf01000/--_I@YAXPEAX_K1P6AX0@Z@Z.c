/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140075B3C
 * Callers:
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14003A3D8 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x140075B00 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x14008263C (--1FxTagTracker@@QEAA@XZ.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x14009E270 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall `vector destructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void (__fastcall *__f)(void *))
{
  unsigned __int64 v5; // rdi
  char *v7; // rbx

  v5 = __n;
  v7 = &__t[__n * __s];
  do
  {
    v7 -= __s;
    __f(v7);
    --v5;
  }
  while ( v5 );
}
