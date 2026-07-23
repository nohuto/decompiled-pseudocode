/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x14041CC00
 * Callers:
 *     KiUpdateSpeculationControl @ 0x140305F40 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int16 v4; // ax
  unsigned __int16 v5; // r9
  __int64 result; // rax
  __int64 v7; // r10

  v2 = *(_QWORD *)(a1 + 1808);
  v3 = KiSpeculationFeatures;
  if ( !v2 || v2 == *(_QWORD *)(a2 + 1888) || (KiSpeculationFeatures & 0x400) != 0 )
  {
    *(_WORD *)(a1 + 1816) &= 0xFFDBu;
  }
  else
  {
    v4 = *(_WORD *)(a1 + 1816) | 4;
    *(_WORD *)(a1 + 1816) = v4;
    if ( (v3 & 8) == 0 )
      *(_WORD *)(a1 + 1816) = v4 | 0x20;
  }
  v5 = *(_WORD *)(a1 + 1830) | 1;
  *(_WORD *)(a1 + 1832) = 1;
  *(_WORD *)(a1 + 1826) = 1;
  *(_WORD *)(a1 + 1836) = 1;
  result = *(unsigned int *)(a2 + 1532);
  v7 = *(_QWORD *)(a2 + 1888);
  if ( (result & 0x400000) == 0 )
    v7 = 1LL;
  if ( (v3 & 0x4000000000LL) != 0 && KiSsbdMsr == 72 )
  {
    *(_WORD *)(a1 + 1832) |= 4u;
    *(_WORD *)(a1 + 1836) |= 4u;
    *(_WORD *)(a1 + 1826) |= 4u;
    v5 |= 4u;
  }
  else if ( (v3 & 0x8000000000LL) != 0 )
  {
    if ( v7 )
    {
      *(_WORD *)(a1 + 1832) |= 4u;
      *(_WORD *)(a1 + 1826) |= 4u;
      v5 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 1876) & 0x2000) != 0 )
      *(_WORD *)(a1 + 1836) |= 4u;
  }
  if ( (v3 & 0x40000000000000LL) != 0 )
  {
    *(_WORD *)(a1 + 1832) |= 0x400u;
    *(_WORD *)(a1 + 1826) |= 0x400u;
    *(_WORD *)(a1 + 1836) |= 0x400u;
    *(_WORD *)(a1 + 1834) |= 0x400u;
    v5 |= 0x400u;
  }
  if ( v7 && (*(_BYTE *)(a1 + 1820) & 0x30) != 0 )
  {
    *(_WORD *)(a1 + 1816) |= 0x80u;
  }
  else
  {
    result = 65407LL;
    *(_WORD *)(a1 + 1816) &= ~0x80u;
    if ( !v7 && (v3 & 0x800) != 0 )
    {
      result = *(unsigned int *)(a2 + 1532);
      if ( (result & 0x1000) == 0 || (*(_BYTE *)(a1 + 1830) & 1) == 0 )
      {
        *(_WORD *)(a1 + 1832) &= ~1u;
        v5 &= ~1u;
        *(_WORD *)(a1 + 1826) &= ~1u;
        *(_WORD *)(a1 + 1836) &= ~1u;
      }
    }
  }
  if ( (v3 & 0x2000) != 0 )
  {
    *(_WORD *)(a1 + 1832) |= 0x80u;
    *(_WORD *)(a1 + 1826) |= 0x80u;
  }
  if ( v5 != *(_WORD *)(a1 + 1830) )
  {
    result = v5;
    *(_WORD *)(a1 + 1830) = v5;
    __writemsr(0x48u, v5);
  }
  return result;
}
