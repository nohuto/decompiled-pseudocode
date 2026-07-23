/*
 * XREFs of sub_1409EB2D4 @ 0x1409EB2D4
 * Callers:
 *     sub_1409EB278 @ 0x1409EB278 (sub_1409EB278.c)
 *     sub_1409EB6CC @ 0x1409EB6CC (sub_1409EB6CC.c)
 *     WbHeapExecutionUnloadModule @ 0x140AF0A5C (WbHeapExecutionUnloadModule.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140B14A0C (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1407184B0 (Feature_58333519__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     sub_1409EB4C0 @ 0x1409EB4C0 (sub_1409EB4C0.c)
 */

__int64 __fastcall sub_1409EB2D4(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // edi
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 == -1 )
  {
    v5 = sub_1409EB4C0(a1, a2, a3, a5, (__int64)&v9);
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
