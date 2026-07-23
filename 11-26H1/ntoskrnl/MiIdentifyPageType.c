/*
 * XREFs of MiIdentifyPageType @ 0x1402D3640
 * Callers:
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 * Callees:
 *     MiGetPfnPidSafe @ 0x14040A730 (MiGetPfnPidSafe.c)
 */

__int64 __fastcall MiIdentifyPageType(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r10
  int v3; // eax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned int PfnPidSafe; // eax
  unsigned __int64 v9; // r11

  v2 = a2;
  v3 = *(_BYTE *)(a1 + 34) & 7;
  if ( v3 == 6 )
  {
    if ( (*(_QWORD *)a1 & 1) == 0
      || (*(_DWORD *)(a1 + 32) & 0x8000000) != 0
      || (unsigned __int16)*(_DWORD *)(a1 + 32) > 1u )
    {
      *a2 |= 0x100uLL;
    }
    return 0LL;
  }
  if ( v3 == 4 )
  {
LABEL_3:
    if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
      *a2 |= 0x100uLL;
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      v5 = v4 >> 2;
      v6 = v4 >> 16;
      if ( (*(_QWORD *)(a1 + 16) & 0x400LL) != 0 )
        LOBYTE(v6) = v5;
      if ( (v6 & 1) != 0 )
      {
        *v2 |= 0x80uLL;
        return 0LL;
      }
      return 0LL;
    }
    if ( *(__int64 *)(a1 + 40) >= 0 )
      a2[2] = ((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
    *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
    return 1LL;
  }
  else
  {
    switch ( *(_BYTE *)(a1 + 34) & 7 )
    {
      case 0:
      case 1:
      case 5:
        result = 1LL;
        break;
      case 2:
      case 3:
        goto LABEL_3;
      case 4:
      case 6:
        return 0LL;
      case 7:
        *a2 |= 0x100uLL;
        if ( *(__int64 *)(a1 + 40) >= 0 )
          a2[2] = ((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1 )
        {
          PfnPidSafe = MiGetPfnPidSafe(a1, 3LL);
          v9 = *v2 & 0xFE000000000001F9uLL | ((unsigned __int64)PfnPidSafe << 9) | 9;
        }
        else
        {
          v9 = *a2 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
            v9 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        }
        *v2 = v9;
        result = 1LL;
        break;
    }
  }
  return result;
}
