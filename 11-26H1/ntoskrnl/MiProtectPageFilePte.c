/*
 * XREFs of MiProtectPageFilePte @ 0x140480B38
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiProtectPageFilePte(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR v6; // rdx
  unsigned int v7; // ecx
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // edx
  unsigned __int64 result; // rax
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // cl

  if ( *(_QWORD *)(a1 + 48) != 1LL )
    KeBugCheckEx(0x1Au, 0x44000uLL, a2, a3, 0LL);
  if ( a3 )
  {
    v6 = a3 >> 5;
  }
  else
  {
    MiIncreaseUsedPtes(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 0);
    LODWORD(v6) = *(_DWORD *)(*(_QWORD *)a1 + 48LL) >> 5;
  }
  v7 = *(_DWORD *)(a1 + 28);
  v8 = v6 & 0x1F;
  v9 = 24;
  if ( v7 != 24 )
  {
    if ( v8 == 24
      && ((v12 = *(_DWORD *)(*(_QWORD *)a1 + 48LL), (v12 & 0x80000) == 0)
        ? (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 32LL) >> 1)
        : (v13 = v12 >> 5),
          v14 = v13 & 0x1F,
          LOBYTE(v8) = v14,
          v14 == 24)
      || (v10 = v8 & 0x18) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 28) & 0x18) == 0x18 )
      {
        v7 &= 0xFFFFFFE7;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(a1 + 28) & 0x18) != 8 )
      {
LABEL_10:
        v9 = v7;
        goto LABEL_11;
      }
    }
    else if ( v10 != 16 )
    {
      if ( v10 == 8 )
      {
        v7 = v7 & 0xFFFFFFE7 | 8;
      }
      else if ( v10 == 24 )
      {
        v7 |= 0x18u;
      }
      goto LABEL_10;
    }
    v7 &= ~8u;
    goto LABEL_10;
  }
LABEL_11:
  if ( a3 )
  {
    result = (32LL * v9) ^ (a3 ^ (32LL * v9)) & 0xFFFFFFFFFFFFFC1FuLL;
  }
  else
  {
    v15 = v9;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 48LL) & 0x8080000) != 0x8080000 )
      v15 = v9;
    result = MiMakeDemandZeroPte(v15);
  }
  *(_QWORD *)a2 = result;
  return result;
}
