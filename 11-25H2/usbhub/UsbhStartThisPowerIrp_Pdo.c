/*
 * XREFs of UsbhStartThisPowerIrp_Pdo @ 0x14003850C
 * Callers:
 *     UsbhPdoPower_QueryPower @ 0x14004BD30 (UsbhPdoPower_QueryPower.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 */

__int64 __fastcall UsbhStartThisPowerIrp_Pdo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx

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
        result = 860767312LL;
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_DWORD *)v12 = 860767312;
        *(_QWORD *)(v12 + 16) = v8;
        *(_QWORD *)(v12 + 24) = a3;
      }
    }
    *(_QWORD *)(v9 + 8 * v10 + 800) = a3;
    *(_QWORD *)(v9 + 8 * v10 + 816) = v8;
    *(_DWORD *)(v9 + 4 * v10 + 832) = a4;
  }
  return result;
}
