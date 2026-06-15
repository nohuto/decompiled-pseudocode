/*
 * XREFs of ?GetSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ @ 0x18006CC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *__fastcall CAudioSrv::GetSerialWorkQueue(CAudioSrv *this)
{
  return (CAudioSrv *)((char *)this + 208);
}
