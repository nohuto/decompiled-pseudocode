/*
 * XREFs of UsbhStartThisPowerIrp_Pdo @ 0x1400369CC
 * Callers:
 *     UsbhPdoPower_QueryPower @ 0x14004B8E0 (UsbhPdoPower_QueryPower.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

__int64 __fastcall UsbhStartThisPowerIrp_Pdo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx

  result = (__int64)PdoExt(a2);
  v8 = *(_QWORD *)(a3 + 184);
  v9 = result;
  v10 = *(unsigned int *)(v8 + 16);
  if ( (unsigned int)v10 <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
        v13 = *(_DWORD *)(v11 + 884);
        v14 = *(_QWORD *)(v11 + 888);
        v15 = (v12 - 1) & v13;
        result = 860767312LL;
        v15 *= 32LL;
        *(_DWORD *)(v15 + v14) = 860767312;
        *(_QWORD *)(v15 + v14 + 8) = 0LL;
        *(_QWORD *)(v15 + v14 + 16) = v8;
        *(_QWORD *)(v15 + v14 + 24) = a3;
      }
    }
    *(_QWORD *)(v9 + 8 * v10 + 800) = a3;
    *(_QWORD *)(v9 + 8 * v10 + 816) = v8;
    *(_DWORD *)(v9 + 4 * v10 + 832) = a4;
  }
  return result;
}
