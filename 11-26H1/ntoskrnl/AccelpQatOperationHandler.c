/*
 * XREFs of AccelpQatOperationHandler @ 0x1406E3C44
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     AccelpQatCompressionDecompression @ 0x1406E3A04 (AccelpQatCompressionDecompression.c)
 *     AccelpQatGetCompressionWorkspaceSize @ 0x1406E511C (AccelpQatGetCompressionWorkspaceSize.c)
 *     AccelpQatSetCompressionWorkspace @ 0x1406E51AC (AccelpQatSetCompressionWorkspace.c)
 *     QatGetStatusFromCompletionRecord @ 0x1406E52E4 (QatGetStatusFromCompletionRecord.c)
 *     QatValidateDescriptorFlags @ 0x1406E5498 (QatValidateDescriptorFlags.c)
 */

__int64 __fastcall AccelpQatOperationHandler(__int64 a1, __int64 *a2)
{
  int v2; // r8d
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 result; // rax
  unsigned int *v10; // rsi
  int v11; // edx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int StatusFromCompletionRecord; // r10d
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  v22 = 0;
  v4 = a1;
  if ( !v2 )
  {
    *(_DWORD *)a2 = 256;
    *((_DWORD *)a2 + 1) = 32;
    *((_DWORD *)a2 + 2) = 64;
    return QatValidateDescriptorFlags(a1, a2, *(_QWORD *)(v4 + 48));
  }
  v5 = v2 - 3;
  if ( !v5 )
  {
    result = QatGetStatusFromCompletionRecord(*(_QWORD *)(a1 + 40));
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v16 = *(_QWORD *)(a1 + 40);
    v17 = *a2;
    v18 = *(_DWORD *)(a1 + 56) - 1;
    if ( v18 )
    {
      a1 = (unsigned int)(v18 - 3);
      if ( (_DWORD)a1 )
      {
        if ( (_DWORD)a1 != 2 )
        {
          result = 3221225659LL;
          goto LABEL_14;
        }
        *(_DWORD *)(v17 + 12) = *(_DWORD *)(v16 + 20);
      }
      else
      {
        *(_DWORD *)(v17 + 4) = *(_DWORD *)(v16 + 24);
      }
      result = 0LL;
    }
    else
    {
      StatusFromCompletionRecord = QatGetStatusFromCompletionRecord(v16);
      a1 = StatusFromCompletionRecord + 0x80000000;
      if ( (int)a1 < 0 || StatusFromCompletionRecord == -1073741789 )
      {
        StatusFromCompletionRecord = 0;
        *(_DWORD *)(v20 + 12) = *(_DWORD *)(v19 + 20);
        *(_DWORD *)(v20 + 4) = *(_DWORD *)(v19 + 24);
      }
      result = StatusFromCompletionRecord;
    }
LABEL_14:
    if ( (int)result < 0 )
      return result;
    return QatValidateDescriptorFlags(a1, a2, *(_QWORD *)(v4 + 48));
  }
  v7 = v6 - 508;
  if ( !v7 || (v8 = v7 - 1) == 0 )
  {
    result = AccelpQatCompressionDecompression(a1, *(int *)(a1 + 24) < 0, *(_DWORD *)(a1 + 24) & 0xFFFFF);
    goto LABEL_14;
  }
  if ( v8 != 1 )
    return 3221225659LL;
  v10 = (unsigned int *)(a2 + 1);
  v11 = *(_DWORD *)(a1 + 72);
  v12 = *v10;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v14 = *(_DWORD *)(v13 + 36) & 4;
  result = AccelpQatGetCompressionWorkspaceSize(v13, v11, 1, v14 != 0, (__int64)&v22, (__int64)v10);
  if ( (int)result >= 0 )
  {
    v15 = *v10;
    if ( v12 < (unsigned int)v15 )
      return 3221225507LL;
    if ( !*a2 )
      return 3221225485LL;
    result = AccelpQatSetCompressionWorkspace(
               *a2,
               v15,
               *(unsigned int *)(v4 + 68),
               *(unsigned int *)(v4 + 72),
               *(_DWORD *)(v4 + 76),
               *(_DWORD *)(v4 + 80),
               v22 & (unsigned int)-(v14 != 0));
    goto LABEL_14;
  }
  return result;
}
