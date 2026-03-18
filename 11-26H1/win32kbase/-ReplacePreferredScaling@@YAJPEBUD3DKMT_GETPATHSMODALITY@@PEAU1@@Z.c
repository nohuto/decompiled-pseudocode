/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1401F5F98
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401F6320 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1401C69BC (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall ReplacePreferredScaling(
        const struct D3DKMT_GETPATHSMODALITY *a1,
        struct D3DKMT_GETPATHSMODALITY *a2)
{
  struct D3DKMT_GETPATHSMODALITY *v2; // rsi
  unsigned int i; // ebp
  __int64 v5; // r14
  char *v6; // rbx
  unsigned int j; // r8d
  const signed __int64 *v8; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = 0; ; ++i )
  {
    if ( i >= *((unsigned __int16 *)v2 + 10) )
      return 0LL;
    v5 = 296LL * i;
    v6 = (char *)v2 + v5;
    if ( (*(_DWORD *)((_BYTE *)v2 + v5 + 56) & 0x10000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 13641;
    }
    if ( *(_DWORD *)((char *)v2 + v5 + 192) == 253 )
      break;
LABEL_22:
    ;
  }
  if ( _bittest64((const signed __int64 *)v6 + 7, 0x24u) )
  {
    ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v6 + 56), (__int64)a2);
    goto LABEL_22;
  }
  if ( v6 == (char *)-72LL || !a1 )
  {
    a2 = (struct D3DKMT_GETPATHSMODALITY *)(v6 + 84);
  }
  else
  {
    a2 = (struct D3DKMT_GETPATHSMODALITY *)(v6 + 84);
    for ( j = 0; j < *((unsigned __int16 *)a1 + 10); ++j )
    {
      v8 = (const signed __int64 *)((char *)a1 + 296 * j + 56);
      if ( *((_DWORD *)v8 + 7) == *(_DWORD *)a2
        && *((_DWORD *)v8 + 4) == *((_DWORD *)v6 + 18)
        && *((_DWORD *)v8 + 5) == *((_DWORD *)v6 + 19) )
      {
        if ( !v8 )
          break;
        if ( !_bittest64(v8, 0x2Au) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 13666;
        }
        if ( (*(_DWORD *)v8 & 0x10000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 13667;
        }
        *(_DWORD *)((char *)v2 + v5 + 192) = *((_DWORD *)v8 + 34);
        *(_DWORD *)((char *)v2 + v5 + 196) = *((_DWORD *)v8 + 35);
        *((_QWORD *)v6 + 7) |= 0x40000010000uLL;
        goto LABEL_22;
      }
    }
  }
  WdLogSingleEntry2(2LL, *((unsigned int *)v6 + 20), *(unsigned int *)a2);
  result = 3221225473LL;
  WdLogGlobalForLineNumber = 13662;
  return result;
}
