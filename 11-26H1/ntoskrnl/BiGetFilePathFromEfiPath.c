/*
 * XREFs of BiGetFilePathFromEfiPath @ 0x1409A1EF8
 * Callers:
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiCreateMergedBootEntry @ 0x1409A2090 (BiCreateMergedBootEntry.c)
 * Callees:
 *     RtlULongSub @ 0x1404CF71C (RtlULongSub.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall BiGetFilePathFromEfiPath(__int64 a1, __int64 *a2, _DWORD *a3)
{
  int v6; // esi
  __int64 v7; // r8
  __int64 i; // r10
  NTSTATUS v9; // eax
  int v10; // esi
  __int64 Pool2; // rax
  __int64 v12; // rbp
  _WORD *v13; // r14
  __int64 j; // rdi
  size_t v15; // rbx
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  pulResult = 0;
  v6 = 0;
  if ( (*(_BYTE *)a1 & 0x7F) != 0x7F )
  {
    for ( i = a1 + *(unsigned __int16 *)(a1 + 2); ; i += *(unsigned __int16 *)(i + 2) )
    {
      if ( (*(_BYTE *)i & 0x7F) == 0x7F )
      {
        if ( !v6 )
        {
          LODWORD(v7) = -1073741275;
          return (unsigned int)v7;
        }
        v10 = v6 + 2;
        Pool2 = ExAllocatePool2(0x102uLL);
        v12 = Pool2;
        if ( !Pool2 )
        {
          v7 = 3221225626LL;
          goto LABEL_17;
        }
        v13 = (_WORD *)Pool2;
        for ( j = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)j & 0x7F) != 0x7F; j += *(unsigned __int16 *)(j + 2) )
        {
          if ( *(_BYTE *)j == 4 && *(_BYTE *)(j + 1) == 4 )
          {
            v15 = (unsigned int)*(unsigned __int16 *)(j + 2) - 4;
            memmove(v13, (const void *)(j + 4), v15);
            v13 = (_WORD *)((char *)v13 + v15);
          }
        }
        *v13 = 0;
        LODWORD(v7) = 0;
        *a2 = v12;
        *a3 = v10;
        return (unsigned int)v7;
      }
      if ( *(_BYTE *)i == 4 && *(_BYTE *)(i + 1) == 4 )
      {
        v9 = RtlULongSub(*(unsigned __int16 *)(i + 2), 4u, &pulResult);
        v7 = (unsigned int)v9;
        if ( v9 < 0 )
        {
          if ( v9 != -1073741275 || v6 )
            goto LABEL_17;
          return (unsigned int)v7;
        }
        v6 += pulResult;
      }
    }
  }
  v7 = 3221225530LL;
LABEL_17:
  BiLogMessage(4LL, L"BiGetFilePathFromEfiPath failed %x", v7);
  return (unsigned int)v7;
}
