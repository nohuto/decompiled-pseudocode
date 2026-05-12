/*
 * XREFs of NvmeNamespaceScsiLogSenseRequest @ 0x140117C60
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117898 (NvmeNamespacePopulateLogSenseInformationalExceptions.c)
 *     NvmeNamespacePopulateLogSenseTemperature @ 0x140117990 (NvmeNamespacePopulateLogSenseTemperature.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiLogSenseRequest(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  size_t v10; // rsi
  char v11; // cl
  char v12; // al
  __int64 result; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v4 = 64LL;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    v4 = 24LL;
  v8 = *(_DWORD **)(v4 + a3);
  v9 = 60LL;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    v9 = 16LL;
  v10 = *(unsigned int *)(v9 + a3);
  LODWORD(v14) = *(_DWORD *)(v9 + a3);
  if ( !v8 )
    goto LABEL_26;
  if ( !(_DWORD)v10 )
    goto LABEL_26;
  if ( (a4[1] & 1) != 0 )
    goto LABEL_26;
  if ( (a4[2] & 0xC0) != 0x40 )
    goto LABEL_26;
  v11 = a4[2] & 0x3F;
  if ( v11 )
  {
    if ( v11 != 13 && v11 != 47 )
      goto LABEL_26;
  }
  if ( a4[3] )
    goto LABEL_26;
  memset_0(v8, 0, v10);
  v12 = a4[2] & 0x3F;
  if ( v12 )
  {
    if ( v12 == 13 )
    {
      result = NvmeNamespacePopulateLogSenseTemperature(a1, a3, (int *)&v14, (__int64)v8);
      goto LABEL_18;
    }
    if ( v12 == 47 )
    {
      result = NvmeNamespacePopulateLogSenseInformationalExceptions(a1, a3, &v14, (__int64)v8);
LABEL_18:
      LODWORD(v10) = v14;
      goto LABEL_22;
    }
LABEL_26:
    SetSrbSenseData(a3, 6, 5, 36, 0);
    return 3221225485LL;
  }
  if ( v10 >= 7 )
  {
    *v8 = 50331648;
    LODWORD(v10) = 7;
    *((_WORD *)v8 + 2) = 3328;
    result = 0LL;
    *((_BYTE *)v8 + 6) = 47;
    *(_BYTE *)(a3 + 3) = 1;
  }
  else
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    result = 3221225485LL;
  }
LABEL_22:
  if ( !(_DWORD)result )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
      *(_DWORD *)(a3 + 60) = v10;
    else
      *(_DWORD *)(a3 + 16) = v10;
  }
  return result;
}
