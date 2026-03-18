/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x140010EB0
 * Callers:
 *     ProtocolCommandToNVMe @ 0x140001290 (ProtocolCommandToNVMe.c)
 * Callees:
 *     NVMeIsAllowedWithinThrottleLimit @ 0x14000F350 (NVMeIsAllowedWithinThrottleLimit.c)
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = 60LL;
    v5 = 64LL;
  }
  else
  {
    v4 = 16LL;
    v5 = 24LL;
  }
  v6 = *(_QWORD *)(a2 + v5);
  if ( *(_DWORD *)(v6 + 8) != 3 )
    goto LABEL_44;
  v7 = *(unsigned int *)(a2 + v4);
  if ( (unsigned int)v7 < 0x54 )
  {
    if ( (unsigned int)v7 < 0x14 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( *(_DWORD *)v6 != 1 || *(_DWORD *)(v6 + 4) != 84 || *(_DWORD *)(v6 + 24) != 64 )
    goto LABEL_43;
  v8 = *(unsigned int *)(v6 + 28);
  if ( (_DWORD)v8 )
  {
    v9 = *(unsigned int *)(v6 + 44);
    if ( v9 < 0x90 )
      goto LABEL_43;
    if ( (v9 & 7) != 0 )
      goto LABEL_43;
    v10 = *(unsigned int *)(a2 + v4);
    if ( v7 < v9 + v8 )
      goto LABEL_43;
  }
  else
  {
    v10 = *(unsigned int *)(a2 + v4);
  }
  v11 = *(unsigned int *)(v6 + 32);
  if ( (_DWORD)v11 )
  {
    v12 = *(unsigned int *)(v6 + 48);
    if ( v12 < 0x90 || (v12 & 7) != 0 || v10 < v12 + v11 )
      goto LABEL_43;
  }
  v13 = *(unsigned int *)(v6 + 36);
  if ( (_DWORD)v13 )
  {
    v14 = *(unsigned int *)(v6 + 52);
    if ( v14 < 0x90 || (v14 & 7) != 0 || v10 < v14 + v13 )
      goto LABEL_43;
  }
  if ( (_DWORD)v11 && (_DWORD)v8 && *(unsigned int *)(v6 + 48) < v8 + (unsigned __int64)*(unsigned int *)(v6 + 44) )
    goto LABEL_43;
  if ( (_DWORD)v13 )
  {
    if ( (_DWORD)v8 && *(unsigned int *)(v6 + 52) < v8 + (unsigned __int64)*(unsigned int *)(v6 + 44) )
      goto LABEL_43;
    v15 = *(unsigned int *)(v6 + 32);
    if ( (_DWORD)v15 )
    {
      if ( *(unsigned int *)(v6 + 52) < v15 + (unsigned __int64)*(unsigned int *)(v6 + 48) )
        goto LABEL_43;
    }
  }
  v16 = *(_DWORD *)(v6 + 56);
  if ( v16 != 1 && v16 != 2 )
    goto LABEL_43;
  if ( (unsigned __int8)*(_DWORD *)(v6 + 80) == 20
    && (*(_DWORD *)(a1 + 56) & 0x200000) == 0
    && !NVMeIsAllowedWithinThrottleLimit(a1, 5, 0LL)
    && (*(_BYTE *)(v6 + 120) & 0xF) != 0xF )
  {
    *(_DWORD *)(v6 + 16) = 8;
    v17 = -1056964595;
    *(_BYTE *)(a2 + 3) = 39;
LABEL_45:
    *(_BYTE *)(a2 + 3) = 1;
    return v17;
  }
  v18 = *(_DWORD *)(v6 + 80) & 3;
  if ( !v18 )
  {
    if ( !*(_DWORD *)(v6 + 32) )
      goto LABEL_42;
LABEL_43:
    *(_DWORD *)(v6 + 16) = 3;
LABEL_44:
    v17 = -1056964602;
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_45;
  }
  if ( v18 != 1 )
  {
    if ( v18 == 2 && (*(_DWORD *)(v6 + 32) || !*(_DWORD *)(v6 + 36)) )
      goto LABEL_43;
    goto LABEL_52;
  }
  if ( !*(_DWORD *)(v6 + 32) )
    goto LABEL_43;
LABEL_42:
  if ( *(_DWORD *)(v6 + 36) )
    goto LABEL_43;
LABEL_52:
  if ( *(_DWORD *)(v6 + 56) == 2 && !_bittest64((const signed __int64 *)(a1 + 192), 0x25u) )
    goto LABEL_43;
  return 0LL;
}
