/*
 * XREFs of ?GetWaitHandle@AggregateWaitHandle@@QEBAPEAXXZ @ 0x180111F90
 * Callers:
 *     ?GetCallbackWaitHandle@SipcServer@@UEAAPEAXXZ @ 0x180111B60 (-GetCallbackWaitHandle@SipcServer@@UEAAPEAXXZ.c)
 * Callees:
 *     SipcFailFast @ 0x18011347C (SipcFailFast.c)
 */

void *__fastcall AggregateWaitHandle::GetWaitHandle(AggregateWaitHandle *this)
{
  void *result; // rax

  result = (void *)*((_QWORD *)this + 1);
  if ( !result )
  {
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  return result;
}
