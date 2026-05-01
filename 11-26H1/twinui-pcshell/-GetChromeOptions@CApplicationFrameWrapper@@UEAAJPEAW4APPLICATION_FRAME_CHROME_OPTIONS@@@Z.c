/*
 * XREFs of ?GetChromeOptions@CApplicationFrameWrapper@@UEAAJPEAW4APPLICATION_FRAME_CHROME_OPTIONS@@@Z @ 0x1802F9920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetChromeOptions(
        CApplicationFrameWrapper *this,
        enum APPLICATION_FRAME_CHROME_OPTIONS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum APPLICATION_FRAME_CHROME_OPTIONS *))(**((_QWORD **)this + 13) + 104LL))(
           *((_QWORD *)this + 13),
           a2);
}
