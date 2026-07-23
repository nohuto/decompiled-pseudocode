/*
 * XREFs of XmPushStack @ 0x1404A19DC
 * Callers:
 *     XmPushOp @ 0x1404A1670 (XmPushOp.c)
 *     XmCallOp @ 0x1404A1970 (XmCallOp.c)
 *     XmPushaOp @ 0x1405AFDD0 (XmPushaOp.c)
 *     XmEnterOp @ 0x1405B0020 (XmEnterOp.c)
 *     XmIntOp @ 0x1405B00F0 (XmIntOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

__int64 __fastcall XmPushStack(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  v3 = (unsigned int)(*(_DWORD *)(a1 + 40) + ~*(_DWORD *)(a1 + 120));
  if ( (unsigned int)v3 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - *(_DWORD *)(a1 + 120) )
    longjmp((_JBTYPE *)(a1 + 160), 15);
  *(_DWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 88) = x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 60), v3);
  return XmStoreResult(a1, a2);
}
