/*
 * XREFs of MiCanBatchHardFaultPages @ 0x14031EEF0
 * Callers:
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 */

__int64 __fastcall MiCanBatchHardFaultPages(__int64 *a1, __int64 a2)
{
  char v2; // r10
  __int64 v3; // rbx
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v10; // rdx

  v2 = 0;
  v3 = *a1;
  *(_DWORD *)(a2 + 32) &= ~0x200000u;
  *(_QWORD *)a2 = 0LL;
  v5 = a1[7];
  if ( v5 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) != 0 )
      return 2LL;
    if ( byte_140E3BEA6 )
    {
      v10 = (unsigned __int64)((a2 + 0x220000000000LL) / 48) >> 9;
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v10) )
      {
        if ( *(_BYTE *)(qword_140E3D240 + 2 * v10) != 10 )
          return 2LL;
      }
    }
    if ( (*(_BYTE *)(a2 + 35) & 0x10) != 0
      || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0
      || (((unsigned __int16)(*(_QWORD *)(v5 + 40) >> 43) ^ (unsigned __int16)(*(_QWORD *)(a2 + 40) >> 43)) & 0x3FF) != 0
      || (*(_DWORD *)(a2 + 32) & 0x7000000u) >= 0x5000000 )
    {
      return 2LL;
    }
  }
  if ( (*(_BYTE *)(a2 + 34) & 0x18) != 0 )
    return 2LL;
  if ( byte_140E3BEA6 )
  {
    v6 = (unsigned __int64)((a2 + 0x220000000000LL) / 48) >> 9;
    if ( *(_BYTE *)(qword_140E3D240 + 2 * v6) )
    {
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v6) != 10 )
        return 2LL;
    }
  }
  if ( (*(_DWORD *)(a2 + 32) & 0x40000000) != 0
    || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0
    || (*(_BYTE *)(a2 + 35) & 0x10) != 0
    || *(int *)(v3 + 80) < 0
    || a1[2] >= (unsigned __int64)a1[3] )
  {
    return 2LL;
  }
  if ( (*(_DWORD *)(v3 + 188) & 0x20000) != 0 )
  {
    *(_QWORD *)a1[2] |= 0x8000000000000000uLL;
    return 0LL;
  }
  else
  {
    if ( (unsigned __int16)*(_DWORD *)(a2 + 32) == 1 )
    {
      if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_21;
      *(_DWORD *)(a2 + 32) = (*(_DWORD *)(a2 + 32) - 1) ^ (*(_DWORD *)(a2 + 32) ^ (*(_DWORD *)(a2 + 32) - 1)) & 0xFFFF0000;
      if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) == 0 && (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) == 0 )
      {
        v7 = *(_DWORD *)(a2 + 32);
        v8 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( (_WORD)v7 )
        {
          if ( (_WORD)v7 == 1 )
          {
            if ( v8 || (*(_BYTE *)(a2 + 34) & 8) != 0 )
              v2 = 1;
          }
          else if ( (_WORD)v7 == 2 && v8 && (*(_BYTE *)(a2 + 34) & 8) != 0 )
          {
            v2 = 1;
          }
        }
        else
        {
          v2 = 1;
        }
      }
      *(_DWORD *)(a2 + 32) = (*(_DWORD *)(a2 + 32) + 1) ^ (*(_DWORD *)(a2 + 32) ^ (*(_DWORD *)(a2 + 32) + 1)) & 0xFFFF0000;
      if ( v2 )
      {
LABEL_21:
        MiRemoveLockedPageCharge(a2);
        return 1LL;
      }
      return 2LL;
    }
    MiRemoveLockedPageCharge(a2);
    return 0LL;
  }
}
