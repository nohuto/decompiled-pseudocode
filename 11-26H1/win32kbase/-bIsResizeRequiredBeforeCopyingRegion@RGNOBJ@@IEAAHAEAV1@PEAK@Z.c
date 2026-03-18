/*
 * XREFs of ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x140022F9C
 * Callers:
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1400C5040 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(RGNOBJ *this, struct RGNOBJ *a2, unsigned int *a3)
{
  __int64 v4; // rbp
  PVOID DeferredContext; // rax
  unsigned int v6; // esi
  REGION_CORE *v7; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // ecx
  unsigned int sizeScan; // ebx
  unsigned int v11; // eax

  v4 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v6 = 0;
  v7 = (REGION_CORE *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL));
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 184LL))(v4);
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    v8 = *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 8);
  }
  if ( DeferredContext )
  {
    v9 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)DeferredContext + 176LL))(v7);
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    v9 = *((_DWORD *)v7 + 4);
  }
  sizeScan = 112;
  if ( v8 >= v9 )
    goto LABEL_6;
  if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(v7) <= 0x70 )
  {
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
LABEL_6:
    if ( DeferredContext )
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 184LL))(v4);
    else
      v11 = *(_DWORD *)(v4 + 8);
    if ( v11 <= 0x70 || (unsigned int)REGION_CORE::get_sizeScanAlloc(v7) > 0x70 )
      return v6;
  }
  if ( (unsigned int)REGION_CORE::get_sizeScan(v7) > 0x70 )
    sizeScan = REGION_CORE::get_sizeScan(v7);
  *a3 = sizeScan;
  return 1;
}
