/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x140A879B0
 * Callers:
 *     LdrpFindMessageInAlternateModule @ 0x1403DAA20 (LdrpFindMessageInAlternateModule.c)
 *     LdrpGetRcConfig @ 0x1403DC6CC (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403DCA90 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpAccessResourceData @ 0x140A878C8 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     RtlAddressInSectionTable @ 0x14040E484 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14040E4E0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     LdrpGetImageSize @ 0x1404AAFB8 (LdrpGetImageSize.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  _DWORD *v4; // rbx
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // r15
  unsigned int *v9; // rcx
  __int64 v10; // r13
  int v11; // eax
  _DWORD *v12; // rax
  unsigned __int64 v13; // rsi
  __int16 v14; // ax
  unsigned int v15; // r8d
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned int v18; // r8d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+28h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]

  v4 = a4;
  v6 = a1;
  v25 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v24);
  if ( !v25 )
    return 3221225609LL;
  v24 = 0LL;
  result = LdrpGetImageSize(v6, &v24);
  if ( (int)result >= 0 )
  {
    v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = a2 + 4;
    if ( (unsigned __int64)a2 < (v6 & 0xFFFFFFFFFFFFFFFCuLL) )
      return 3221225595LL;
    if ( v9 < a2 )
      return 3221225595LL;
    v10 = v24;
    if ( v24 && (unsigned __int64)v9 > v8 + v24 )
    {
      return 3221225595LL;
    }
    else
    {
      v11 = 0;
      if ( (v6 & 2) != 0 || (v6 & 1) != 0 )
      {
        if ( (v6 & 1) != 0 )
          v11 = 1;
        v6 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v11 == 1 )
      {
        v12 = RtlImageNtHeader(v6);
        v13 = (unsigned __int64)v12;
        if ( !v12 )
          return 3221225609LL;
        v14 = *((_WORD *)v12 + 12);
        if ( v14 == 267 )
        {
          v15 = *(_DWORD *)(v13 + 136);
        }
        else if ( v14 == 523 )
        {
          v15 = *(_DWORD *)(v13 + 152);
        }
        else
        {
          v15 = 0;
        }
        if ( !v15 )
          return 3221225609LL;
        v16 = v6 + v15 - v25;
        v17 = RtlSectionTableFromVirtualAddress(v13, v6, v15);
        if ( !v17 )
          return 3221225609LL;
        _mm_lfence();
        v18 = *a2;
        if ( *a2 > *(_DWORD *)(v17 + 8) )
        {
          LODWORD(v24) = *(_DWORD *)(v17 + 12);
          v21 = RtlSectionTableFromVirtualAddress(v13, v6, v18);
          if ( !v21 )
            return 3221225609LL;
          v22 = *(_DWORD *)(v21 + 12);
          v23 = RtlAddressInSectionTable(v13, v6, v22);
          v16 += v25 + v22 - (unsigned __int64)(unsigned int)v24 - v23;
          v4 = a4;
        }
      }
      else
      {
        v16 = 0LL;
      }
      if ( a3 )
      {
        v19 = v6 + *a2 - v16;
        v20 = v19 + a2[1];
        if ( v19 < v8 || v20 < v19 || v10 && v20 > v8 + v10 )
          return 3221225595LL;
        *a3 = v19;
      }
      if ( v4 )
        *v4 = a2[1];
      return 0LL;
    }
  }
  return result;
}
