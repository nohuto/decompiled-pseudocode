/*
 * XREFs of Win32CreateSection @ 0x1401641E4
 * Callers:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1401B4FC8 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     EngAllocSectionMem @ 0x1401F3540 (EngAllocSectionMem.c)
 *     InitKernelHandleTable @ 0x1402F02B4 (InitKernelHandleTable.c)
 *     InitCreateSharedSection @ 0x1402F4E7C (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int Section; // ebx

  Section = MmCreateSection(a1, 983071LL, 0LL, a4, 4, a6, 0LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
