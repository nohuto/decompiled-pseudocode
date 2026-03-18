/*
 * XREFs of ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x14001DC74
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x140018EE0 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x14001DFA8 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 */

__int64 __fastcall FxPkgIo::InitializeDefaultQueue(FxPkgIo *this, unsigned __int64 Device, FxIoQueue *Queue)
{
  FxIoQueue **m_DispatchTable; // rax
  __int64 v4; // r9
  unsigned __int16 v6; // ax
  const void *_a2; // rdx

  if ( this->m_DefaultQueue )
  {
    v6 = *(_WORD *)(Device + 10);
    _a2 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6 )
      _a2 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgIo_cpp_Traceguids, this, _a2, 0xC0000001);
    return 3221225473LL;
  }
  else
  {
    m_DispatchTable = this->m_DispatchTable;
    v4 = 28LL;
    do
    {
      if ( !*m_DispatchTable )
        *m_DispatchTable = Queue;
      ++m_DispatchTable;
      --v4;
    }
    while ( v4 );
    this->m_DefaultQueue = Queue;
    FxObject::MarkNoDeleteDDI(Queue, ObjectLock);
    return 0LL;
  }
}
