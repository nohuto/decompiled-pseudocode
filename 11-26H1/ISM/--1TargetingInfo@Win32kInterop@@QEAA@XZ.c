/*
 * XREFs of ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x180022810
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180020F50 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005CCFC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop.c)
 *     ??1RawMouseTargetingEntry@Win32kInterop@@QEAA@XZ @ 0x1800F0E3C (--1RawMouseTargetingEntry@Win32kInterop@@QEAA@XZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800F0E4C (--1Win32kInterop@@UEAA@XZ.c)
 *     _ButtonProcessor::OnInputReport_::_1_::dtor$2 @ 0x1801D52D1 (_ButtonProcessor--OnInputReport_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::TargetingInfo::~TargetingInfo(Win32kInterop::TargetingInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
