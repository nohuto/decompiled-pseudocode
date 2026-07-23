/*
 * XREFs of ExpNodeUpdateProcessorSubQueueIndex @ 0x1406D4C94
 * Callers:
 *     ExpNodeHotAddProcessor @ 0x1406D4BD0 (ExpNodeHotAddProcessor.c)
 *     ExpNodeInitialize @ 0x140845C00 (ExpNodeInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall ExpNodeUpdateProcessorSubQueueIndex(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Prcb; // rax
  __int64 result; // rax
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0;
  v10 = 0;
  v8 = 0;
  v11 = 0;
  v7[1] = *(unsigned __int16 **)(a2 + 8);
  v7[0] = (unsigned __int16 *)a2;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v11, v7);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v11);
    *(_DWORD *)(Prcb + 33576) = *(_DWORD *)(a1 + 120) * *(_DWORD *)(Prcb + 47400) / a3;
  }
  return result;
}
