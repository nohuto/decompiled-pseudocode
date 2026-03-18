/*
 * XREFs of ?IsXboxOneDevice@MONITOR_MGR@@UEBA_NXZ @ 0x140273BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MONITOR_MGR::IsXboxOneDevice(MONITOR_MGR *this)
{
  return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 444LL) & 0x200) != 0;
}
