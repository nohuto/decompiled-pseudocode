/*
 * XREFs of xxxSendMessageFF @ 0x1402B32C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageEx @ 0x140182270 (xxxSendMessageEx.c)
 */

unsigned __int64 __fastcall xxxSendMessageFF(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct tagDRAWITEMSTRUCT *a4,
        ULONG64 a5)
{
  if ( a5 )
    return xxxSendMessageEx((struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout(
             (struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL,
             a2,
             a3,
             a4,
             0,
             0,
             0LL,
             0,
             1);
}
