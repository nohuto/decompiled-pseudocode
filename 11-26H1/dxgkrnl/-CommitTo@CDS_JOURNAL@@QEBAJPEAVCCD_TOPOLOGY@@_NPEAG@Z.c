/*
 * XREFs of ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1404190F4
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x140098548 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026AF50 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x140422A50 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::CommitTo(CDS_JOURNAL *this, struct CCD_TOPOLOGY *a2, __int64 a3, unsigned __int16 *a4)
{
  const struct CDS_JOURNAL::_ENTRY *v4; // r14
  __int64 result; // rax
  unsigned int v9; // ebx
  const struct CDS_JOURNAL::_ENTRY *v10; // r15
  unsigned __int16 v11; // di
  const struct CDS_JOURNAL::_ENTRY *v12; // rcx
  int v13; // eax
  const struct CDS_JOURNAL::_ENTRY *i; // r14
  const struct CDS_JOURNAL::_ENTRY *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int16 v18; // r10
  const struct CDS_JOURNAL::_ENTRY *v19; // r11
  __int16 v20; // r9
  const struct CDS_JOURNAL::_ENTRY *j; // rbp
  bool IsUnextend; // al
  __int16 v23; // r9
  const struct CDS_JOURNAL::_ENTRY **v24; // r11
  __int16 v25; // cx
  unsigned __int16 v26; // r9
  __int64 v27; // r8
  unsigned __int16 v28; // ax

  v4 = (CDS_JOURNAL *)((char *)this + 24);
  if ( *(const struct CDS_JOURNAL::_ENTRY **)v4 == v4 )
    return 0LL;
  v9 = -1073741823;
  v10 = (CDS_JOURNAL *)((char *)this + 24);
  if ( *(_DWORD *)this == 1 )
  {
    v9 = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this);
    if ( v9 == -1073741266 )
    {
      WdLogSingleEntry3(3LL, this, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 606;
      return 0LL;
    }
    v10 = (CDS_JOURNAL *)((char *)this + 24);
  }
  v11 = 0;
  while ( 1 )
  {
    v4 = *(const struct CDS_JOURNAL::_ENTRY **)v4;
    if ( v4 == v10 )
      break;
    if ( CDS_JOURNAL::_IsUnextend(v4) )
    {
      v13 = CDS_JOURNAL::_CommitEntry(v12, a2);
      v9 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry4(2LL, v13, v4, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 635;
        return v9;
      }
    }
  }
  for ( i = (const struct CDS_JOURNAL::_ENTRY *)*((_QWORD *)this + 3);
        i != (CDS_JOURNAL *)((char *)this + 24);
        i = *(const struct CDS_JOURNAL::_ENTRY **)i )
  {
    if ( !CDS_JOURNAL::_IsUnextend(i) )
    {
      v16 = CDS_JOURNAL::_CommitEntry(v15, a2);
      v9 = v16;
      if ( v16 == -1073741789 )
      {
        v17 = *((_QWORD *)a2 + 8);
        if ( v17 )
          v18 = *(_WORD *)(v17 + 20);
        else
          v18 = 0;
        v19 = (const struct CDS_JOURNAL::_ENTRY *)*((_QWORD *)this + 3);
        v20 = 0;
        for ( j = (CDS_JOURNAL *)((char *)this + 24); v19 != j; v20 = v25 )
        {
          IsUnextend = CDS_JOURNAL::_IsUnextend(v19);
          v19 = *v24;
          v25 = v23 + 1;
          if ( IsUnextend )
            v25 = v23;
        }
        v26 = v18 + v20;
        if ( a4 )
          *a4 = v26;
        v27 = *((_QWORD *)a2 + 8);
        if ( v27 )
        {
          v28 = *(_WORD *)(v27 + 20);
          v11 = *(_WORD *)(v27 + 22);
        }
        else
        {
          v28 = 0;
        }
        WdLogSingleEntry5(3LL, a2, v27, v28, v11, v26);
        result = 3221225507LL;
        WdLogGlobalForLineNumber = 672;
        return result;
      }
      if ( v16 < 0 )
      {
        WdLogSingleEntry4(2LL, v16, i, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 682;
        return v9;
      }
    }
  }
  return v9;
}
