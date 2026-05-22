/*
 * XREFs of ?GetEditControlPosition@TextInputStateAdapter@@UEAAJPEAUTextRect@@@Z @ 0x1801D2400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetEditControlPosition(TextInputStateAdapter *this, struct TextRect *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct TextRect *))(**((_QWORD **)this + 4) + 96LL))(
           *((_QWORD *)this + 4),
           a2);
}
