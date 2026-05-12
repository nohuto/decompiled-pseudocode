/*
 * XREFs of sub_1401899C8 @ 0x1401899C8
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     <none>
 */

void sub_1401899C8()
{
  if ( CallbackRegistration )
  {
    ExUnregisterCallback(CallbackRegistration);
    CallbackRegistration = 0LL;
  }
}
