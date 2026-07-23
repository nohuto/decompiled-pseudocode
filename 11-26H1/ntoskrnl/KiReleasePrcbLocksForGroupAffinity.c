/*
 * XREFs of KiReleasePrcbLocksForGroupAffinity @ 0x1405E7C38
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiReleasePrcbLocksForGroupAffinity(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 8);
  v2[1] = *(unsigned __int16 **)a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2[0] = 0LL;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v6, v2);
    if ( (_DWORD)result )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(KiProcessorBlock[v6] + 48), 0LL);
  }
  return result;
}
