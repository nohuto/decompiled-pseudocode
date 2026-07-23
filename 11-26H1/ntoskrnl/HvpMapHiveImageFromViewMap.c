/*
 * XREFs of HvpMapHiveImageFromViewMap @ 0x140B878DC
 * Callers:
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x1408BFACC (HvpViewMapFindViewForFileOffset.c)
 *     CmpClaimGlobalQuota @ 0x140A8F33C (CmpClaimGlobalQuota.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMapHiveImageFromViewMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // edi
  char v7; // al
  __int64 v8; // r11
  bool v9; // zf
  unsigned int v10; // ebx
  __int64 v11; // rdi
  unsigned __int64 ViewForFileOffset; // rax
  __int64 v13; // rcx
  __int64 v14; // r10

  v5 = a3;
  v6 = a2;
  v7 = CmpClaimGlobalQuota((unsigned int)a3, a2, a3, a4);
  LODWORD(v8) = 0;
  if ( v7 )
  {
    v9 = v6 + v5 == 0;
    v10 = v6 + v5;
    LODWORD(v11) = 0;
    if ( !v9 )
    {
      do
      {
        HvpGetCellMap(a1, (unsigned int)v11);
        v11 = (unsigned int)(v11 + 4096);
        ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1 + 224, (unsigned int)v11);
        v13 = v11 + *(_QWORD *)(ViewForFileOffset + 56) - *(_QWORD *)(ViewForFileOffset + 24);
        *(_QWORD *)v14 = v8;
        *(_QWORD *)(v14 + 8) = v13;
        LODWORD(v13) = *(_DWORD *)(v14 + 20) | 1;
        *(_DWORD *)(v14 + 16) = 4096;
        *(_DWORD *)(v14 + 20) = v13;
      }
      while ( (unsigned int)v11 < v10 );
    }
  }
  else
  {
    LODWORD(v8) = -1073741670;
  }
  return (unsigned int)v8;
}
