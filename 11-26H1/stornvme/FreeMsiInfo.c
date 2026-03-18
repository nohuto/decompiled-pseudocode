/*
 * XREFs of FreeMsiInfo @ 0x1400115A0
 * Callers:
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     GetInterruptMessageInformation @ 0x140010A50 (GetInterruptMessageInformation.c)
 *     NVMeControllerStop @ 0x140017BD4 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeMsiInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 280);
  if ( v7 )
  {
    result = StorPortExtendedFunction(1LL, a1, v7, a4);
    *(_QWORD *)(a1 + 280) = 0LL;
  }
  *(_WORD *)(a1 + 272) = 0;
  return result;
}
