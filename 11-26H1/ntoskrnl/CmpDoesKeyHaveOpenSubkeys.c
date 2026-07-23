/*
 * XREFs of CmpDoesKeyHaveOpenSubkeys @ 0x1408B5DE8
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     CmpCleanUpKCBCacheTable @ 0x1408B6020 (CmpCleanUpKCBCacheTable.c)
 */

bool __fastcall CmpDoesKeyHaveOpenSubkeys(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r9
  int v9; // eax

  v1 = *(_QWORD *)(a1 + 32);
  CmpCleanUpKCBCacheTable(v1);
  if ( *(_QWORD *)a1 == 1LL || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 && *(_QWORD *)a1 == 2LL )
    goto LABEL_16;
  v3 = 0LL;
LABEL_5:
  if ( (unsigned int)v3 >= *(_DWORD *)(v1 + 1656) )
  {
LABEL_16:
    v9 = 0;
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 1648) + 24 * v3 + 16);
    while ( 1 )
    {
      if ( !v4 )
      {
        v3 = (unsigned int)(v3 + 1);
        goto LABEL_5;
      }
      v5 = *(unsigned __int16 *)(a1 + 12);
      v6 = v4 - 16;
      v7 = *(unsigned __int16 *)(v4 - 16 + 12);
      v4 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int16)v5 < (unsigned __int16)v7 )
      {
        if ( v7 != v5 )
        {
          v8 = (unsigned int)(v7 - v5);
          do
          {
            v6 = *(_QWORD *)(v6 + 72);
            --v8;
          }
          while ( v8 );
        }
        if ( v6 == a1 )
          break;
      }
    }
    v9 = 1;
  }
  return v9 != 0;
}
