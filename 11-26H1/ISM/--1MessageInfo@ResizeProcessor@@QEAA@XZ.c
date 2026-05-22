/*
 * XREFs of ??1MessageInfo@ResizeProcessor@@QEAA@XZ @ 0x1801537FC
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180152F58 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@st.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18015375C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18014D95C (--1-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ResizeProcessor::MessageInfo::~MessageInfo(ResizeProcessor::MessageInfo *this)
{
  __int64 v2; // rcx

  std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>((_QWORD *)this + 3);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this);
}
