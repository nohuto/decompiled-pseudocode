/*
 * XREFs of ?Initialize@RimBackedDeviceBase@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE8C0
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE680 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimBackedDeviceBase::Initialize(RimBackedDeviceBase *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 result; // rax

  result = RawInputManagerDeviceObjectReference(a2);
  if ( (int)result >= 0 )
    *((_QWORD *)this + 2) = a2;
  return result;
}
