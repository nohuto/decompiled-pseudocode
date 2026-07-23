/*
 * XREFs of RtlpHpLfhContextMaximumExtension @ 0x1800E71E4
 * Callers:
 *     RtlpHpHeapAllocate @ 0x1800E6ECC (RtlpHpHeapAllocate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLfhContextMaximumExtension(unsigned int a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // r11
  unsigned __int64 result; // rax

  v1 = 64LL;
  v2 = 256LL;
  v3 = 512;
  if ( a1 <= 0x40 )
    v1 = a1;
  v4 = ((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1;
  v5 = (unsigned int)v4;
  v6 = ((_DWORD)v4 + 1) << 6;
  v7 = v4 << 6;
  if ( (RtlpHpLfhPerfFlags & 4) != 0 )
    v2 = ((unsigned __int64)((v5 + 1) << 13) >> 2) + 512;
  if ( (unsigned int)(16 * v1) < 0x200 )
    v3 = 16 * v1;
  result = ((v7 + (unsigned int)(v6 * v1) + 2 * (v1 + 64)) << 7) + v2 * v3;
  if ( result >= 0x3FF8C0 )
    return 4192448LL;
  return result;
}
