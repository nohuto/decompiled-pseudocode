/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x1800C8110
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C7758 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD2(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( *a2 < 0x14 )
    return 3221225485LL;
  if ( *(__int16 *)(a1 + 2) >= 0 )
    return 3221225703LL;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    v4 = 0LL;
    goto LABEL_37;
  }
  v4 = a1 + *(unsigned int *)(a1 + 4);
  if ( !v4 )
  {
LABEL_37:
    v5 = 0LL;
    goto LABEL_8;
  }
  v5 = (4LL * *(unsigned __int8 *)(v4 + 1) + 11) & 0xFFFFFFFCLL;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 && *(_DWORD *)(a1 + 16) )
  {
    v6 = a1 + *(unsigned int *)(a1 + 16);
    if ( v6 )
    {
      v7 = (*(unsigned __int16 *)(v6 + 2) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_12;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = 0LL;
LABEL_12:
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v8 = 0LL;
    goto LABEL_34;
  }
  v8 = a1 + *(unsigned int *)(a1 + 8);
  if ( !v8 )
  {
LABEL_34:
    v9 = 0LL;
    goto LABEL_15;
  }
  v9 = (4LL * *(unsigned __int8 *)(v8 + 1) + 11) & 0xFFFFFFFCLL;
LABEL_15:
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 && *(_DWORD *)(a1 + 12) )
  {
    v10 = a1 + *(unsigned int *)(a1 + 12);
    if ( v10 )
    {
      v11 = (*(unsigned __int16 *)(v10 + 2) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_20;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0LL;
LABEL_20:
  v12 = v8 + v9;
  v13 = v4 + v5;
  if ( v4 <= v8 )
    v13 = v12;
  v14 = v7 + v6;
  if ( v13 > v6 )
    v14 = v13;
  v15 = v11 + v10;
  if ( v14 > v10 )
    v15 = v14;
  v16 = 40;
  if ( v15 )
    v16 = ((v15 - a1 - 13) & 0xFFFFFFF8) + 40;
  if ( v16 > *a2 )
  {
    *a2 = v16;
    return 3221225507LL;
  }
  else
  {
    if ( v15 )
      memmove((void *)(a1 + 40), (const void *)(a1 + 20), v16 - 40LL);
    *(_WORD *)(a1 + 2) &= ~0x8000u;
    *(_QWORD *)(a1 + 8) = (v4 + 20) & -(__int64)(v4 != 0);
    *(_QWORD *)(a1 + 16) = (v8 + 20) & -(__int64)(v8 != 0);
    *(_QWORD *)(a1 + 24) = (v10 + 20) & -(__int64)(v10 != 0);
    *(_QWORD *)(a1 + 32) = (v6 + 20) & -(__int64)(v6 != 0);
    return 0LL;
  }
}
