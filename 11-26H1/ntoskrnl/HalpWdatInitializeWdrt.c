/*
 * XREFs of HalpWdatInitializeWdrt @ 0x14059A130
 * Callers:
 *     HalpWdatInitialize @ 0x14059A020 (HalpWdatInitialize.c)
 * Callees:
 *     WdInstrInitializeInstruction @ 0x1405A78D4 (WdInstrInitializeInstruction.c)
 */

__int64 __fastcall HalpWdatInitializeWdrt(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  unsigned int v3; // eax
  __int64 result; // rax
  __int64 i; // rdi
  int v6; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1;
  v3 = *(unsigned __int16 *)(v1 + 68);
  *(_DWORD *)(a1 + 16) = v3;
  if ( v3 < 0x1FF )
    *(_DWORD *)(a1 + 16) = 512;
  *(_DWORD *)(a1 + 20) = 1;
  if ( *(_BYTE *)(v1 + 70) )
  {
    if ( *(_BYTE *)(v1 + 70) == 1 )
    {
      *(_DWORD *)(a1 + 24) = 100;
    }
    else
    {
      if ( *(_BYTE *)(v1 + 70) != 2 )
        return 3221225485LL;
      *(_DWORD *)(a1 + 24) = 10;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1000;
  }
  *(_DWORD *)(a1 + 44) = 15;
  for ( i = 0LL; (unsigned int)i < 0xF; i = (unsigned int)(i + 1) )
  {
    v6 = 3 * i;
    LOBYTE(v6) = WdrtRev1Instructions[12 * i];
    result = WdInstrInitializeInstruction(
               v2 + ((_DWORD)i << 6) + 48,
               v6,
               WdrtRev1Instructions[12 * i + 1],
               (unsigned int)v1 + (WdrtRev1Instructions[12 * i + 2] != 0 ? 48 : 36),
               *(_DWORD *)&WdrtRev1Instructions[12 * i + 4],
               *(_DWORD *)&WdrtRev1Instructions[12 * i + 8],
               1);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
