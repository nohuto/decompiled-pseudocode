/*
 * XREFs of VidSchInvalidateHwContext @ 0x140057AA0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     McTemplateK0dp_EtwWriteTransfer @ 0x140054754 (McTemplateK0dp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchInvalidateHwContext(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  _BYTE *v10; // r9
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  int v14; // eax
  bool IsLimitExhausted; // al
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v2 + 40);
  VidSchMarkDeviceAsError(v2, 7);
  v7 = *(_QWORD *)(v3 + 1776);
  if ( v7 && (a2 & 1) == 0 )
  {
    v8 = *(_QWORD *)(v2 + 48);
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
    {
      *(_QWORD *)(v7 + 2808) = *(_QWORD *)(v9 + 56);
      v10 = *(_BYTE **)(v8 + 2648);
      if ( !v10 )
        goto LABEL_12;
      v11 = 15LL;
      v12 = (_BYTE *)(v7 + 2821);
      do
      {
        if ( v11 == -2147483631 )
          break;
        if ( !*v10 )
          break;
        *v12++ = *v10++;
        --v11;
      }
      while ( v11 );
      v13 = v12 - 1;
      if ( v11 )
        v13 = v12;
      *v13 = 0;
      if ( !v11 )
LABEL_12:
        *(_BYTE *)(v7 + 2821) = 0;
      *(_DWORD *)(v7 + 2836) = *(_DWORD *)(a1 + 88);
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v2 + 48) + 2632LL) )
    {
      v14 = *(_DWORD *)(v2 + 56);
      if ( (v14 & 8) == 0 && (v14 & 1) == 0 )
      {
        TdrHistoryUpdate((struct _TDR_HISTORY *)(v8 + 40), (const struct _TDR_RECOVERY_CONTEXT *)v7);
        IsLimitExhausted = TdrHistoryIsLimitExhausted(
                             (const struct _TDR_HISTORY *)(v8 + 40),
                             (const struct _TDR_RECOVERY_CONTEXT *)v7,
                             1);
        *(_BYTE *)(v7 + 2820) = IsLimitExhausted;
        if ( IsLimitExhausted )
        {
          v16 = *(unsigned int *)(v6 + 4);
          v17 = *(_QWORD *)(v8 + 2624);
          *(_DWORD *)(v17 + 4 * (v16 >> 5)) |= 1 << v16;
          if ( (byte_14008A201 & 1) != 0 )
            McTemplateK0dp_EtwWriteTransfer(v16, v17, v16 >> 5, *(_DWORD *)(v6 + 4), *(_QWORD *)(v7 + 2808));
        }
      }
    }
  }
  return 0LL;
}
