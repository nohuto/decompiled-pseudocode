/*
 * XREFs of EtwpApplyScopeFilters @ 0x140912900
 * Callers:
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140912E34 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x1409135A0 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140913694 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140913700 (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, char a4, _WORD *a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int i; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // r10
  char v17; // r8

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    v8 = 0LL;
    v9 = 32LL;
    if ( a3 )
      v9 = 40LL;
    *a5 = 0;
    v10 = *(_QWORD *)(v9 + a1);
    if ( a4 )
      v10 = *(_QWORD *)(v10 + 656);
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *(_DWORD *)(32 * (i + 4LL) + v10) )
      {
        v12 = 32LL * i;
        if ( (!a4 || (*(_DWORD *)(v10 + v12 + 136) & 0x400) != 0)
          && (!a2 || *(_WORD *)(v12 + v10 + 134) == *(_WORD *)(v10 + 88)) )
        {
          v13 = *(_QWORD *)(v10 + 640);
          if ( !v13 )
            goto LABEL_14;
          if ( (*(_DWORD *)(104LL * i + v13) & 0x80000004) != 0x80000004 )
            goto LABEL_40;
          v16 = *(_DWORD **)(104LL * i + v13 + 8);
          if ( !v16 )
            goto LABEL_40;
          v17 = 0;
          while ( (unsigned int)v8 < *v16 )
          {
            if ( v16[v8 + 1] == *(_DWORD *)(*(_QWORD *)(a1 + 80) + 464LL) )
            {
              v17 = 1;
              break;
            }
            v8 = (unsigned int)(v8 + 1);
          }
          if ( v17 )
          {
LABEL_40:
            if ( (*(_DWORD *)(104LL * i + v13) & 0x80000008) != 0x80000008
              || (unsigned __int8)EtwpApplyExeFilter(a1, *(_QWORD *)(104LL * i + v13 + 16)) )
            {
              if ( (v14 = *(_QWORD *)(v10 + 640) + 104LL * i, (*(_DWORD *)v14 & 0x80000010) != 0x80000010)
                && (*(_DWORD *)v14 & 0x80000020) != 0x80000020
                || (unsigned __int8)EtwpApplyPackageIdFilter(a1, *(_QWORD *)(v14 + 24), *(_QWORD *)(v14 + 32), v8) )
              {
                v15 = *(_QWORD *)(v10 + 640) + 104LL * i;
                if ( (*(_DWORD *)v15 & 0x80008000) != 0x80008000
                  || (unsigned __int8)EtwpApplyContainerFilter(a1, *(_QWORD *)(v15 + 40)) )
                {
LABEL_14:
                  *a5 |= 1 << i;
                }
              }
            }
          }
          if ( a2 )
            return;
          v8 = 0LL;
        }
      }
    }
  }
}
