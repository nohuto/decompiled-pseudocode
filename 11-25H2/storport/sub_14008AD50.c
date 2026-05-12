/*
 * XREFs of sub_14008AD50 @ 0x14008AD50
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_140072CE0 @ 0x140072CE0 (sub_140072CE0.c)
 *     StorPortGetDeviceBase @ 0x140073E10 (StorPortGetDeviceBase.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_14008AD50(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax

  v10 = sub_1400143E0(64LL, 40LL, 1296130386LL, a6);
  v11 = v10;
  if ( !v10 )
    return 3221225495LL;
  *(_QWORD *)v10 = *a1;
  *a1 = v10;
  *(_DWORD *)(v10 + 32) = a5;
  result = 0LL;
  *(_QWORD *)(v11 + 24) = a2;
  *(_QWORD *)(v11 + 8) = a3;
  *(_DWORD *)(v11 + 16) = a4;
  return result;
}
