/*
 * XREFs of ?GetOopCalloutSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ @ 0x180084AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *__fastcall CAudioSrv::GetOopCalloutSerialWorkQueue(CAudioSrv *this)
{
  return (CAudioSrv *)((char *)this + 384);
}
