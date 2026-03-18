/*
 * XREFs of DxgkSetIndirectDisplayHostProcess @ 0x1401AA7D4
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 DxgkSetIndirectDisplayHostProcess()
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v1; // rdi

  Current = DXGPROCESS::GetCurrent();
  v1 = Current;
  if ( Current )
  {
    DXGFASTMUTEX::Acquire((struct DXGPROCESS *)((char *)Current + 104));
    *((_DWORD *)v1 + 102) |= 0x4000u;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v1 + 13);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 215;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get DXGPROCESS for IndirectDisplay host process",
      215LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
}
