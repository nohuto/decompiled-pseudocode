/*
 * XREFs of ?GetMonitor@CSwitchItemElement@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1804BFE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwitchItemElement::GetMonitor(CSwitchItemElement *this, HMONITOR *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(**((_QWORD **)this + 45) + 80LL))(*((_QWORD *)this + 45), a2);
}
