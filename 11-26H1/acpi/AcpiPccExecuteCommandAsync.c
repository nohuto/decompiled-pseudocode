/*
 * XREFs of AcpiPccExecuteCommandAsync @ 0x140064B50
 * Callers:
 *     AcpiPccExecuteCommand @ 0x1400B2690 (AcpiPccExecuteCommand.c)
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiDiagTracePccExecuteCommand @ 0x14004C334 (AcpiDiagTracePccExecuteCommand.c)
 *     AcpiPccRingDoorbell @ 0x140065000 (AcpiPccRingDoorbell.c)
 *     AcpiPccSetCommand @ 0x1400655D0 (AcpiPccSetCommand.c)
 */

__int64 __fastcall AcpiPccExecuteCommandAsync(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  bool v5; // zf
  char v9; // bl
  char v10; // r15
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebp
  LARGE_INTEGER v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // kr00_8
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-38h] BYREF
  KIRQL v22; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 16) == 2;
  v22 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  if ( v5 )
  {
    v12 = -1073741637;
  }
  else
  {
    AcpiPccLockSubspace(a1, &v22);
    if ( *(_QWORD *)(a1 + 424) )
    {
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v14 = *(_QWORD *)(a1 + 416);
      v15 = *(_QWORD *)(a1 + 424);
      if ( (unsigned __int64)(v14 + v15) > v13.QuadPart )
      {
        v16 = v14 + v15 - v13.QuadPart;
        if ( is_mul_ok(v16, 0x989680uLL) )
          v17 = v16 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        else
          v17 = -10000000 / PerformanceFrequency.QuadPart;
        v11 = v17;
      }
    }
    v18 = *(_DWORD *)(a1 + 8);
    v12 = -1073741823;
    v10 = (v18 >> 1) & 0xF;
    if ( v10 == 5 )
    {
      if ( a3 )
      {
        *(_QWORD *)(a1 + 376) = a3;
        v18 = v18 & 0xFFFFFFE1 | 0xC;
      }
      else
      {
        v18 = v18 & 0xFFFFFFE1 | 0x10;
      }
      *(_DWORD *)(a1 + 8) = v18;
      *(_QWORD *)(a1 + 384) = a4;
      if ( v11 )
      {
        v18 ^= ((unsigned __int8)v18 ^ (unsigned __int8)(v18 + 2)) & 0x1E;
        *(_DWORD *)(a1 + 8) = v18;
      }
      v12 = 259;
    }
    v9 = (v18 >> 1) & 0xF;
    AcpiPccUnlockSubspace(a1, v22);
    if ( v12 == 259 )
    {
      LOBYTE(v19) = a2;
      AcpiPccSetCommand(a1, v19);
      if ( v11 <= 0x1F4 )
      {
        if ( v11 )
          KeStallExecutionProcessor((v11 + 5) / 0xA);
        AcpiPccRingDoorbell(0LL, a1, 0LL, 0LL);
      }
      else
      {
        KeSetTimer((PKTIMER)(a1 + 432), (LARGE_INTEGER)-(__int64)v11, (PKDPC)(a1 + 496));
      }
    }
  }
  AcpiDiagTracePccExecuteCommand(*(_DWORD *)(a1 + 4), a2, v10, v9, v11, v12);
  return v12;
}
