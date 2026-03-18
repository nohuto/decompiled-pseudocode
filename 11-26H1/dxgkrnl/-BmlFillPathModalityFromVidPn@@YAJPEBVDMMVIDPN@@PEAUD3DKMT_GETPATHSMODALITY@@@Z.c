/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403D3670
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403D38C4 (--$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(const struct DMMVIDPN *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  VIDPN_MGR *v2; // r13
  char *v3; // r12
  char *v4; // rcx
  char v5; // r15
  char *v6; // rbp
  unsigned int i; // ebx
  __int64 v9; // rdi
  char *v10; // rsi
  __int64 v11; // rbx
  struct DMMVIDPNTARGETMODESET *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  bool v15; // al
  struct DMMVIDPNTARGETMODESET *v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  char *v19; // rax
  unsigned int v21; // [rsp+54h] [rbp+Ch]

  v2 = (VIDPN_MGR *)*((_QWORD *)a1 + 6);
  v3 = (char *)a1 + 120;
  v4 = (char *)*((_QWORD *)a1 + 15);
  v5 = 0;
  v6 = 0LL;
  if ( v4 != v3 )
    v6 = v4 - 8;
  while ( v6 )
  {
    for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
    {
      v9 = 296LL * i;
      v10 = (char *)a2 + v9;
      if ( (*(_QWORD *)((_BYTE *)a2 + v9 + 56) & 0x700000000000LL) == 0x700000000000LL )
      {
        if ( *(_DWORD *)((char *)a2 + v9 + 72) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v2) + 103)
          && *((_DWORD *)v10 + 19) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v2) + 104)
          && *(_DWORD *)((char *)a2 + v9 + 80) == *(_DWORD *)(*((_QWORD *)v6 + 11) + 24LL)
          && *(_DWORD *)((char *)a2 + v9 + 84) == *(_DWORD *)(*((_QWORD *)v6 + 12) + 24LL) )
        {
          LODWORD(v11) = 0;
          v21 = 0;
          if ( (*((_DWORD *)a2 + 6) & 1) != 0 && (*((_DWORD *)v10 + 14) & 0x100LL) != 0 )
          {
            v11 = *((_QWORD *)v10 + 19);
            v5 = 1;
            v21 = HIDWORD(v11);
          }
          _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(v6, v10 + 56);
          v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v6 + 11));
          v13 = *((_QWORD *)v12 + 18);
          if ( v13 )
          {
            v14 = *(_DWORD *)(v13 + 72);
            v15 = v14 == 3 || v14 == 4;
            v10[184] = v15;
          }
          v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v6 + 12));
          v17 = *((_QWORD *)v16 + 18);
          if ( v17 )
          {
            *((_DWORD *)v10 + 65) = *(_DWORD *)(v17 + 132);
            v18 = *(_DWORD *)(v17 + 136);
            *((_QWORD *)v10 + 7) |= 8uLL;
          }
          else
          {
            *((_DWORD *)v10 + 65) = 0;
            v18 = 4;
          }
          *((_DWORD *)v10 + 66) = v18;
          if ( v5 && *((_QWORD *)v10 + 19) != __PAIR64__(v21, v11) )
            *((_QWORD *)v10 + 7) &= ~0x20000uLL;
          ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v16 + 88));
          ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v12 + 88));
          v5 = 0;
          break;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, i, a2);
        WdLogGlobalForLineNumber = 5368;
      }
    }
    v19 = (char *)*((_QWORD *)v6 + 1);
    v6 = v19 - 8;
    if ( v19 == v3 )
      v6 = 0LL;
  }
  return 0LL;
}
