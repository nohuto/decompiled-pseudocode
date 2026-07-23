/*
 * XREFs of CmpTransAllocateTrans @ 0x140AC578C
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408F3684 (CmpTransSearchAddLightWeightTrans.c)
 * Callees:
 *     CmpBindHiveToTrans @ 0x140AC5858 (CmpBindHiveToTrans.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpTransAllocateTrans(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v9; // rdx
  __int128 v11; // xmm0

  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 56) = a1;
    *(_QWORD *)(Pool2 + 104) = CLFS_LSN_INVALID_EXT;
    *(_DWORD *)(Pool2 + 48) = 8;
    *(_QWORD *)(Pool2 + 64) = a3;
    if ( (a1 & 1) != 0 )
      *(_DWORD *)(Pool2 + 48) = 136;
    if ( a2 )
    {
      v11 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_6:
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
        *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
        *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
        *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
        CmpBindHiveToTrans(a4);
        return v9;
      }
      v11 = *(_OWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 176);
    }
    *(_OWORD *)(Pool2 + 88) = v11;
    goto LABEL_6;
  }
  return v9;
}
