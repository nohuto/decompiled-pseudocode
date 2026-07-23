/*
 * XREFs of EtwpSendNoReplyReply @ 0x14082EAE4
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140911650 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpQueueReply @ 0x140A8BB90 (EtwpQueueReply.c)
 */

void *__fastcall EtwpSendNoReplyReply(__int64 a1, __int128 *a2)
{
  void *result; // rax
  __int128 v5; // xmm0
  __int64 v6; // rcx
  _DWORD v7[14]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v8; // [rsp+58h] [rbp-20h]

  result = memset_0(v7, 0, 0x48uLL);
  if ( (*(_BYTE *)(a1 + 98) & 0x20) == 0 )
  {
    v5 = *a2;
    v6 = *(_QWORD *)(a1 + 48);
    v7[1] = 72;
    v8 = v5;
    v7[0] = 1;
    return (void *)EtwpQueueReply(v6, v7);
  }
  return result;
}
