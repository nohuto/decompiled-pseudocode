/*
 * XREFs of ??1RawMouseTargetingEntry@Win32kInterop@@QEAA@XZ @ 0x1800F0E3C
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$6 @ 0x1801DA40F (_Win32kInterop--Win32kInterop_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::RawMouseTargetingEntry::~RawMouseTargetingEntry(
        Win32kInterop::RawMouseTargetingEntry *this)
{
  Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop::RawMouseTargetingEntry *)((char *)this + 8));
}
