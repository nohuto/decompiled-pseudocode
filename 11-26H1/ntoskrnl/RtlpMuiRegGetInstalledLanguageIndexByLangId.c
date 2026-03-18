/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1408A8798
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14071FA40 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1408A8648 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408AA5F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x14072028C (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1408A88E8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x140B5CEE0 (RtlLCIDToCultureName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  unsigned int v4; // ebp
  char v8; // r14
  __int64 result; // rax
  unsigned int InstalledLanguageIndexByName; // ebx
  __int64 v11; // r9
  __int64 i; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int16 v15; // r8
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // r8
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  v8 = 0;
  v19 = 0LL;
  result = 3221225524LL;
  InstalledLanguageIndexByName = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 == 4096 )
    return result;
  v11 = *(_QWORD *)(a1 + 24);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (int)i >= *(unsigned __int16 *)(v11 + 6) )
    {
      v16 = MuiRegAllocArray(i, 0x55u);
      v17 = (void *)v16;
      if ( v16 )
      {
        if ( a3 )
        {
          *((_QWORD *)&v19 + 1) = v16;
          LODWORD(v19) = 11141120;
          if ( (unsigned __int8)RtlLCIDToCultureName(v4, &v19) )
            InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(a1, *((_QWORD *)&v19 + 1), v18, a4);
        }
        ExFreePoolWithTag(v17, 0);
        if ( v8 && InstalledLanguageIndexByName == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return InstalledLanguageIndexByName;
    }
    v13 = 28LL * (int)i;
    v14 = *(_QWORD *)(v11 + 16);
    if ( *(_WORD *)(v13 + v14 + 4) == (_WORD)v4 )
      break;
LABEL_10:
    ;
  }
  v15 = *(_WORD *)(v13 + v14);
  if ( (v15 & 0x1020) != 0x20 )
  {
    if ( (v15 & 0x1000) != 0 )
      v8 = 1;
    goto LABEL_10;
  }
  if ( a4 )
    *a4 = i;
  return 0LL;
}
