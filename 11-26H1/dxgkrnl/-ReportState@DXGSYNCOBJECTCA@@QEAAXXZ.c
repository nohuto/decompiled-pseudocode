/*
 * XREFs of ?ReportState@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1403BBF78
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403BB818 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1403BBB4C (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 */

void __fastcall DXGSYNCOBJECTCA::ReportState(DXGSYNCOBJECTCA *this, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *i; // rdi

  v3 = (_QWORD *)((char *)this + 440);
  for ( i = (_QWORD *)*((_QWORD *)this + 55); i != v3; i = (_QWORD *)*i )
    DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((struct ADAPTER_RENDER **)(*v3 - 152LL), this, a3);
}
