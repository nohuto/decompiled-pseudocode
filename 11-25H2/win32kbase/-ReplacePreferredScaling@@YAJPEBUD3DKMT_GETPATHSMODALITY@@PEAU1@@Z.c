/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1401CC5D8
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401CCA14 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1401A238C (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall ReplacePreferredScaling(
        const struct D3DKMT_GETPATHSMODALITY *a1,
        struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int i; // esi
  char *v5; // rbx
  _DWORD *v6; // rdx
  unsigned int j; // r8d
  const signed __int64 *v8; // rdi
  __int64 result; // rax

  for ( i = 0; ; ++i )
  {
    if ( i >= *((unsigned __int16 *)a2 + 10) )
      return 0LL;
    v5 = (char *)a2 + 296 * i;
    if ( (*((_DWORD *)v5 + 14) & 0x10000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 13785;
    }
    if ( *((_DWORD *)v5 + 48) == 253 )
      break;
LABEL_22:
    ;
  }
  if ( _bittest64((const signed __int64 *)v5 + 7, 0x24u) )
  {
    ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v5 + 56));
    goto LABEL_22;
  }
  if ( v5 == (char *)-72LL || !a1 )
  {
    v6 = v5 + 84;
  }
  else
  {
    v6 = v5 + 84;
    for ( j = 0; j < *((unsigned __int16 *)a1 + 10); ++j )
    {
      v8 = (const signed __int64 *)((char *)a1 + 296 * j + 56);
      if ( *((_DWORD *)v8 + 7) == *v6
        && *((_DWORD *)v8 + 4) == *((_DWORD *)v5 + 18)
        && *((_DWORD *)v8 + 5) == *((_DWORD *)v5 + 19) )
      {
        if ( !v8 )
          break;
        if ( !_bittest64(v8, 0x2Au) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 13810;
        }
        if ( (*(_DWORD *)v8 & 0x10000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 13811;
        }
        *((_DWORD *)v5 + 48) = *((_DWORD *)v8 + 34);
        *((_DWORD *)v5 + 49) = *((_DWORD *)v8 + 35);
        *((_QWORD *)v5 + 7) |= 0x40000010000uLL;
        goto LABEL_22;
      }
    }
  }
  WdLogSingleEntry2(2LL, *((unsigned int *)v5 + 20), (unsigned int)*v6);
  result = 3221225473LL;
  WdLogGlobalForLineNumber = 13806;
  return result;
}
