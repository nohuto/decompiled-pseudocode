/*
 * XREFs of AccelpSiovDsaOperationHandler @ 0x1404B90F4
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     DsaValidateDescriptorFlags @ 0x1404B9288 (DsaValidateDescriptorFlags.c)
 *     IaaBuildDescriptorCommon @ 0x1404B9304 (IaaBuildDescriptorCommon.c)
 *     AccelBuildDescriptorNop @ 0x1406E2D44 (AccelBuildDescriptorNop.c)
 *     AccelpSiovUpdateStatsOnWorkCompletion @ 0x1406E49AC (AccelpSiovUpdateStatsOnWorkCompletion.c)
 */

__int64 __fastcall AccelpSiovDsaOperationHandler(int *a1, unsigned int *a2)
{
  __int64 v2; // r10
  int v4; // ecx
  unsigned int v5; // ebp
  __int64 v6; // r9
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 result; // rax
  _BYTE *v15; // r8
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r10
  int v23; // r11d
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // r10
  __int64 v31; // r11

  v2 = *((_QWORD *)a1 + 1);
  v4 = *a1;
  v5 = 33;
  v6 = *(_QWORD *)(v2 + 16);
  if ( !v4 )
  {
    *a2 = 64;
    a2[1] = 32;
    a2[2] = 32;
    if ( a2 != (unsigned int *)-12LL )
      a2[3] = 64;
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
  }
  v7 = v4 - 3;
  if ( !v7 )
  {
    v15 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( (*v15 & 0x3F) == 0 )
      return 259LL;
    if ( (*v15 & 0x3F) != 1 )
      return 3221225473LL;
    if ( *(_BYTE *)(*((_QWORD *)a1 + 4) + 7LL) == 5 )
    {
      if ( !v15[1] )
        goto LABEL_13;
      result = 3221225473LL;
    }
    else
    {
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
LABEL_13:
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 16) + 152LL) & 1) != 0 )
      AccelpSiovUpdateStatsOnWorkCompletion(v2, *((_QWORD *)a1 + 4));
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
  }
  v8 = v7 - 253;
  if ( !v8 )
  {
    if ( (*(_BYTE *)(v6 + 224) & 1) != 0 )
    {
      v16 = a1[14];
      if ( v16 <= *(_DWORD *)(v6 + 232) )
      {
        *a2 = v16;
        if ( a1[14] == 1 )
          *a2 = 2;
        return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
      }
    }
    return 3221225659LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = *((_QWORD *)a1 + 9);
    v5 = 4;
    v11 = *((_QWORD *)a1 + 8);
    IaaBuildDescriptorCommon(
      4,
      *((_QWORD *)a1 + 4),
      *((_QWORD *)a1 + 5),
      (unsigned int)a1[6] >> 31,
      a1[6] & 0xFFFFF,
      (unsigned __int8)*(_QWORD *)(v6 + 192) >> 7,
      (*(_QWORD *)(v6 + 192) & 0x400LL) != 0);
    *(_QWORD *)(v13 + 24) = v12;
    *(_DWORD *)(v13 + 32) = v11;
    *(_QWORD *)(v13 + 16) = v10;
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
  }
  v17 = v9 - 1;
  if ( !v17 )
  {
    v28 = *((_QWORD *)a1 + 9);
    v29 = *((_QWORD *)a1 + 8);
    IaaBuildDescriptorCommon(
      3,
      *((_QWORD *)a1 + 4),
      *((_QWORD *)a1 + 5),
      (unsigned int)a1[6] >> 31,
      a1[6] & 0xFFFFF,
      (unsigned __int8)*(_QWORD *)(v6 + 192) >> 7,
      (*(_QWORD *)(v6 + 192) & 0x400LL) != 0);
    *(_QWORD *)(v31 + 16) = v30;
    v5 = 3;
    *(_QWORD *)(v31 + 24) = v29;
    *(_DWORD *)(v31 + 32) = v28;
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v24 = *((_QWORD *)a1 + 9);
    IaaBuildDescriptorCommon(
      5,
      *((_QWORD *)a1 + 4),
      *((_QWORD *)a1 + 5),
      (unsigned int)a1[6] >> 31,
      a1[6] & 0xFFFFF,
      (unsigned __int8)*(_QWORD *)(v6 + 192) >> 7,
      0);
    *(_QWORD *)(v25 + 16) = v26;
    v5 = 5;
    *(_QWORD *)(v25 + 24) = v27;
    *(_DWORD *)(v25 + 32) = v24;
    *(_BYTE *)(v25 + 40) = 1;
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    IaaBuildDescriptorCommon(
      0,
      *((_QWORD *)a1 + 4),
      *((_QWORD *)a1 + 5),
      (unsigned int)a1[6] >> 31,
      a1[6] & 0xFFFFF,
      0,
      0);
    v5 = 0;
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
  }
  if ( v19 != 1 )
    return 3221225659LL;
  v20 = *((_QWORD *)a1 + 7);
  if ( *(_DWORD *)(v20 + 32) < 2u )
    return 3221225473LL;
  if ( *((_QWORD *)a1 + 9) != 1LL
    || (*((_QWORD *)a1 + 9) = 2LL, result = AccelBuildDescriptorNop(*(_QWORD *)(v20 + 40) + 64LL), (int)result >= 0) )
  {
    IaaBuildDescriptorCommon(
      1,
      *((_QWORD *)a1 + 4),
      *((_QWORD *)a1 + 5),
      (unsigned int)a1[6] >> 31,
      a1[6] & 0xFFFFF,
      0,
      0);
    *(_QWORD *)(v21 + 16) = v22;
    v5 = 1;
    *(_DWORD *)(v21 + 32) = v23;
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 6));
  }
  return result;
}
