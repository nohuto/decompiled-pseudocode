/*
 * XREFs of ??1CDDisplayFlipAwayFence@@QEAA@XZ @ 0x18029A3B0
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180299D9C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@s.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18029A380 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIVCDDisplayFlipAwayFence@@@st.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDDisplayFlipAwayFence::~CDDisplayFlipAwayFence(CDDisplayFlipAwayFence *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  CFlipAwayFence::~CFlipAwayFence(this, v2, v3, v4);
}
