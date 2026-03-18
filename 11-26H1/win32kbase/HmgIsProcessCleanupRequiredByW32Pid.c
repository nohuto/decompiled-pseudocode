/*
 * XREFs of HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1401FA98C (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8 (-vRemoveRefPalettes@@YAXK@Z.c)
 * Callees:
 *     ??1ReferencedW32Process@@QEAA@XZ @ 0x1400C5614 (--1ReferencedW32Process@@QEAA@XZ.c)
 *     ??0ReferencedW32Process@@QEAA@K@Z @ 0x1400C56AC (--0ReferencedW32Process@@QEAA@K@Z.c)
 */

_BOOL8 __fastcall HmgIsProcessCleanupRequiredByW32Pid(unsigned int a1)
{
  BOOL v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  if ( a1 && a1 != -2147483630 )
  {
    ReferencedW32Process::ReferencedW32Process((ReferencedW32Process *)&v3, a1);
    if ( v3 )
      v1 = *(_DWORD *)(v3 + 64) != 0;
    ReferencedW32Process::~ReferencedW32Process((ReferencedW32Process *)&v3);
  }
  return v1;
}
