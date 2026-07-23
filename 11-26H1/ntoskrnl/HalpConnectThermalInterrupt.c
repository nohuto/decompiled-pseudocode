/*
 * XREFs of HalpConnectThermalInterrupt @ 0x140592320
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x140436214 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptGetIdentifiers @ 0x1404F6820 (HalpInterruptGetIdentifiers.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInterruptSetIdtEntry @ 0x140596E80 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpConnectThermalInterrupt(ULONG_PTR BugCheckParameter4)
{
  unsigned int Number; // ecx
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // r8d
  int v6; // r9d
  KPCR *Pcr; // rsi
  ULONG_PTR v8; // r10
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  int v12; // [rsp+40h] [rbp-30h]
  int v13; // [rsp+44h] [rbp-2Ch]
  __int64 v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+54h] [rbp-1Ch]
  int v17; // [rsp+5Ch] [rbp-14h]
  int v18; // [rsp+60h] [rbp-10h]
  int Priority; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+30h] BYREF
  int v22; // [rsp+A4h] [rbp+34h]

  HIDWORD(v9) = 0;
  HIDWORD(v14) = 0;
  v16 = 0LL;
  v17 = 0;
  Number = KeGetPcr()->Prcb.Number;
  v20 = 0;
  result = HalpInterruptGetIdentifiers(Number, &v20, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = HalpInterruptController;
    v21 = *(_DWORD *)(HalpInterruptController + 256);
    v22 = -2;
    if ( *(_DWORD *)(HalpInterruptController + 240) == 2 && HalpInterruptFindLines(&v21) )
    {
      Pcr = KeGetPcr();
      if ( !BYTE1(Pcr->HalReserved[5]) )
      {
        if ( HalpInterruptThermalServiceRoutine )
        {
          if ( HalpInterruptThermalServiceRoutine != BugCheckParameter4 )
          {
            HalpInterruptSetProblemEx(0LL, 36, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xD97u);
            KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v8, BugCheckParameter4);
          }
        }
        else
        {
          HalpInterruptThermalServiceRoutine = BugCheckParameter4;
        }
        LOBYTE(v5) = 12;
        HalpInterruptSetIdtEntry(205, (unsigned int)HalpInterruptThermalService, v5, v6, -1LL);
        BYTE1(Pcr->HalReserved[5]) = 1;
        goto LABEL_8;
      }
      if ( HalpInterruptThermalServiceRoutine == BugCheckParameter4 )
      {
LABEL_8:
        v15 = v20;
        v9 = 1LL;
        v14 = 4LL;
        v16 = 0LL;
        v17 = 0;
        v10 = 1;
        v11 = 16;
        v12 = -1;
        v13 = 1;
        v18 = 205;
        Priority = HalpInterruptGetPriority(v4, 0xCDu);
        return HalpInterruptSetLineStateInternal(v4, (__int64)&v21, (__int64)&v9);
      }
      HalpInterruptSetProblemEx(0LL, 36, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xDB4u);
      return 3221226021LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
