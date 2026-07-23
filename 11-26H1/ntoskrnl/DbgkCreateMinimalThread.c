/*
 * XREFs of DbgkCreateMinimalThread @ 0x1409E6974
 * Callers:
 *     PspUserThreadStartup @ 0x1409E79E0 (PspUserThreadStartup.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalThread(__int64 a1)
{
  void *result; // rax
  _KPROCESS *v3; // rdi
  _DWORD v4[14]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v5; // [rsp+58h] [rbp-E0h]
  _BYTE v6[216]; // [rsp+60h] [rbp-D8h] BYREF

  result = memset_0(v6, 0, 0xD0uLL);
  v3 = *(_KPROCESS **)(a1 + 184);
  if ( v3[1].UserTime )
  {
    memset_0(v4, 0, 0x40uLL);
    v5 = *(_QWORD *)(a1 + 1376);
    v4[10] = 1;
    v4[0] = 4194328;
    v4[1] = 8;
    return (void *)DbgkpSendApiMessage(v3, 1, (__int64)v4);
  }
  return result;
}
