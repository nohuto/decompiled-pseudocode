/*
 * XREFs of MiMapCacheExceptionFilter @ 0x140870DDC
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 * Callees:
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 */

__int64 __fastcall MiMapCacheExceptionFilter(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v3; // rcx
  int v4; // eax
  bool v5; // zf
  char v6; // bl

  v3 = *a1;
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == -1073741818 )
  {
    if ( *(_DWORD *)(v3 + 24) < 3u )
      goto LABEL_6;
    v4 = *(_DWORD *)(v3 + 48);
  }
  if ( v4 == -1073741819 )
    v4 = -1073741592;
LABEL_6:
  v5 = *(_BYTE *)a2 == 0;
  v6 = *(_BYTE *)(a2 + 1);
  *(_DWORD *)(a2 + 4) = v4;
  if ( !v5 && MmIsKernelAddress(*(_QWORD *)(v3 + 16)) )
    v6 = 1;
  return MiModeCopyExceptionFilterEx(a1, v6, MiZeroedModeCopyFlags);
}
