/*
 * XREFs of MiUpdateWsleAge @ 0x14029B680
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 * Callees:
 *     MiGetVaAge @ 0x14029BC40 (MiGetVaAge.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiUpdateWsleAge(__int64 a1, __int64 a2, char a3)
{
  int v4; // esi
  __int64 v5; // rdi
  __int64 result; // rax
  int v7; // r9d
  __int64 *v8; // r10
  __int64 PteShadow; // rax

  v4 = a1;
  v5 = a2 << 25 >> 16;
  result = MiGetVaAge(a1, v5);
  if ( a3 != (_BYTE)result && (unsigned __int8)result < 8u && (a3 == 7 || (_BYTE)result == 7) )
  {
    PteShadow = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v8, *v8);
    if ( !a3 )
      MiWriteValidPteNewProtection(v8, PteShadow | 0x20);
    LOBYTE(v7) = a3;
    return MiSetVaAgeListEx(v4, v5, 1, v7, 0);
  }
  return result;
}
