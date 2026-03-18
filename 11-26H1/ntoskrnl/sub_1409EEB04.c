/*
 * XREFs of sub_1409EEB04 @ 0x1409EEB04
 * Callers:
 *     sub_1409EEAA8 @ 0x1409EEAA8 (sub_1409EEAA8.c)
 *     sub_1409EEEFC @ 0x1409EEEFC (sub_1409EEEFC.c)
 *     WbHeapExecutionUnloadModule @ 0x140AEDAC4 (WbHeapExecutionUnloadModule.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140B12C8C (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1407137C0 (Feature_58333519__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     sub_1409EECF0 @ 0x1409EECF0 (sub_1409EECF0.c)
 */

__int64 __fastcall sub_1409EEB04(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // edi
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 == -1 )
  {
    v5 = sub_1409EECF0(a1, a2, a3, a5, (__int64)&v9);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v6 = v9;
  }
  memmove(
    (void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(v6 * *(_DWORD *)a1)),
    (const void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)a1 * (v6 + 1))),
    (unsigned int)(*(_DWORD *)a1 * (*(_DWORD *)(a1 + 4) - v6 - 1)));
  if ( (unsigned int)Feature_58333519__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4));
  else
    --*(_DWORD *)(a1 + 4);
  return (unsigned int)v5;
}
