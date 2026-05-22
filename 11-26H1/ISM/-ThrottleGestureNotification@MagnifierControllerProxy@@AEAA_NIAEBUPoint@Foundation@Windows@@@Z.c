/*
 * XREFs of ?ThrottleGestureNotification@MagnifierControllerProxy@@AEAA_NIAEBUPoint@Foundation@Windows@@@Z @ 0x18015B820
 * Callers:
 *     ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18015B710 (-PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Win.c)
 *     ?ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18015C090 (-ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Wi.c)
 * Callees:
 *     <none>
 */

bool __fastcall MagnifierControllerProxy::ThrottleGestureNotification(
        MagnifierControllerProxy *this,
        int a2,
        const struct Windows::Foundation::Point *a3)
{
  __int32 v3; // xmm1_4

  if ( a2 == 1 )
  {
    if ( !*((_BYTE *)this + 56) )
      return 1;
    COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a3 - *((float *)this + 15)) & v3) <= 1.0 )
      return COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 1) - *((float *)this + 16)) & v3) <= 1.0;
  }
  return 0;
}
