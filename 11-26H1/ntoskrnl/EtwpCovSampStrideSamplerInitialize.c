/*
 * XREFs of EtwpCovSampStrideSamplerInitialize @ 0x14083727C
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 */

__int64 __fastcall EtwpCovSampStrideSamplerInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  int v6; // ecx
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = a2;
  *(_DWORD *)(a1 + 36) = ExGenRandom(0, a2);
  *(_DWORD *)(a1 + 8) = 10 * v5 / KeMaximumIncrement;
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = MEMORY[0xFFFFF78000000320] - v6 - 1;
  if ( !v6 )
  {
    if ( v5 )
    {
      v7 = v3 * (KeMaximumIncrement / 0xA / v5);
      LODWORD(v3) = 0x10000000;
      if ( v7 < 0x10000000 )
        LODWORD(v3) = v7;
    }
  }
  result = (unsigned int)(4 * v3);
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
