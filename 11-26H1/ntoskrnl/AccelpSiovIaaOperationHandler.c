/*
 * XREFs of AccelpSiovIaaOperationHandler @ 0x1406E4274
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     IaaBuildDescriptorCommon @ 0x1404B9304 (IaaBuildDescriptorCommon.c)
 *     AccelpSiovIaaCompressionDecompression @ 0x1406E3F00 (AccelpSiovIaaCompressionDecompression.c)
 *     AccelpSiovIaaGetCompressionWorkspaceSize @ 0x1406E4190 (AccelpSiovIaaGetCompressionWorkspaceSize.c)
 *     AccelpSiovIaaQueryCompletionInformation @ 0x1406E4540 (AccelpSiovIaaQueryCompletionInformation.c)
 *     AccelpSiovIaaSetCompressionWorkspace @ 0x1406E4798 (AccelpSiovIaaSetCompressionWorkspace.c)
 *     IaaGetStatusFromCompletionRecord @ 0x1406E5974 (IaaGetStatusFromCompletionRecord.c)
 */

int __fastcall AccelpSiovIaaOperationHandler(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // ecx
  int v7; // esi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r10
  int v18; // r11d
  int v19; // ebp
  unsigned int v20; // r15d
  int result; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  ULONG v25; // [rsp+70h] [rbp+8h] BYREF

  v25 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)a1;
  v7 = 87;
  v8 = *(_QWORD *)(v4 + 16);
  if ( !v6 )
  {
    *a2 = 64;
    a2[1] = 64;
    a2[2] = 64;
    goto LABEL_26;
  }
  v9 = v6 - 3;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      result = AccelpSiovIaaQueryCompletionInformation(
                 *(_QWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 40),
                 *(_DWORD *)(a1 + 56),
                 *(_DWORD *)(*(_QWORD *)a2 + 24LL),
                 *(_QWORD *)a2);
LABEL_20:
      if ( result < 0 )
        return result;
      goto LABEL_26;
    }
    v11 = v10 - 256;
    if ( v11 )
    {
      v12 = v11 - 252;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              return -1073741637;
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 80LL);
            if ( !v15 )
              return -1073741811;
            v16 = *(_QWORD *)(a1 + 32);
            IaaBuildDescriptorCommon(
              67,
              (int *)v16,
              *(_QWORD *)(a1 + 40),
              *(int *)(a1 + 24) < 0,
              *(_DWORD *)(a1 + 24) & 0xFFFFF,
              (unsigned __int8)*(_QWORD *)(v8 + 192) >> 7,
              (*(_QWORD *)(v8 + 192) & 0x400LL) != 0);
            *(_WORD *)(v16 + 38) |= 0x11u;
            *(_QWORD *)(v16 + 24) = v15 + 13640;
            *(_QWORD *)(v16 + 16) = v17;
            *(_DWORD *)(v16 + 32) = v18;
            *(_DWORD *)(v16 + 48) = 1280;
            goto LABEL_26;
          }
          v19 = *(_DWORD *)(v8 + 36) & 4;
          v20 = a2[2];
          result = AccelpSiovIaaGetCompressionWorkspaceSize(
                     *(_DWORD *)(a1 + 68),
                     *(_DWORD *)(a1 + 72),
                     *(_DWORD *)(a1 + 76),
                     v19 != 0,
                     &v25,
                     a2 + 2);
          if ( result < 0 )
            return result;
          v22 = (unsigned int)a2[2];
          if ( v20 < (unsigned int)v22 )
            return -1073741789;
          if ( !*(_QWORD *)a2 )
            return -1073741811;
          result = AccelpSiovIaaSetCompressionWorkspace(
                     *(_QWORD *)a2,
                     v22,
                     *(_QWORD *)(a1 + 56),
                     *(unsigned int *)(a1 + 64),
                     *(_DWORD *)(a1 + 68),
                     *(_DWORD *)(a1 + 72),
                     *(_DWORD *)(a1 + 76),
                     *(_DWORD *)(a1 + 80),
                     v19 != 0 ? v25 : 0);
          goto LABEL_20;
        }
      }
      result = AccelpSiovIaaCompressionDecompression(
                 a1,
                 *(int *)(a1 + 24) < 0,
                 *(_DWORD *)(a1 + 24) & 0xFFFFF,
                 (unsigned __int8)*(_QWORD *)(v8 + 192) >> 7,
                 (*(_QWORD *)(v8 + 192) & 0x400LL) != 0);
      if ( result < 0 )
        return result;
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = *(_QWORD *)(a1 + 88);
      v7 = 67 - (*(_DWORD *)a1 != 512);
    }
    else
    {
      IaaBuildDescriptorCommon(
        0,
        *(int **)(a1 + 32),
        *(_QWORD *)(a1 + 40),
        *(int *)(a1 + 24) < 0,
        *(_DWORD *)(a1 + 24) & 0xFFFFF,
        0,
        0);
      v7 = 0;
    }
LABEL_26:
    v23 = *(_QWORD *)(a1 + 32);
    if ( v7 && v7 != 66 && v7 != 67 )
    {
      if ( v7 != 87 )
        return -1073741637;
      return 0;
    }
    v24 = *(_QWORD *)(a1 + 48);
    if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    {
      if ( (v24 & 1) != 0 )
      {
        if ( !v7 )
          return -1073741637;
        *(_BYTE *)(v23 + 4) &= ~2u;
      }
      if ( (v24 & 2) != 0 )
      {
        if ( !v7 )
          return -1073741637;
        *(_BYTE *)(v23 + 5) &= ~1u;
      }
      return 0;
    }
    return -1073741811;
  }
  result = IaaGetStatusFromCompletionRecord(*(_QWORD *)(a1 + 40), v8, a3, *(_QWORD *)(v8 + 192));
  if ( result >= 0 && result != 259 )
    goto LABEL_26;
  return result;
}
