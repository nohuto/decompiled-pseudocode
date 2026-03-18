/*
 * XREFs of ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1401C3AF0
 * Callers:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400D89CC (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall CoreMessaging::Calling::SendProcessor::MarshalArray(
        CoreMessaging::Calling::SendProcessor *this,
        int *a2,
        const void *a3)
{
  if ( a3 )
    memmove(a2, a3, *((unsigned int *)this + 21));
}
