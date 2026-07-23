/*
 * XREFs of CmpProcessLightWeightUOW @ 0x1408B4F40
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x1408B4C54 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1408B4DDC (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpReportNotify @ 0x1408C12E4 (CmpReportNotify.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A3FE60 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A3FFF0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140A401A0 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A4043C (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A408DC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140AAFA18 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140AAFB68 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140AD1290 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x140AD9B1C (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140AE3604 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE38D8 (CmpLightWeightCommitSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  _QWORD v22[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(a1 + 68);
  v22[1] = v22;
  v22[0] = v22;
  if ( v4 > 6 )
  {
    v18 = v4 - 7;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_25;
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( !a3 )
        {
          v12 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
          goto LABEL_41;
        }
        CmpLightWeightCommitSetSecDescUoW(a1, a2);
        v14 = 10LL;
LABEL_18:
        CmpReportNotify(*(_QWORD *)(a1 + 48), v13, v14, v22);
        goto LABEL_25;
      }
      v21 = v20 - 4;
      if ( !v21 )
        goto LABEL_25;
      if ( v21 != 2 )
        return (unsigned int)-1073741811;
      if ( !a3 )
      {
        v12 = HvpMarkCellDirty(
                *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
        goto LABEL_41;
      }
      CmpLightWeightCommitRecreateKeyUoW(a1, a2, a4);
LABEL_17:
      v14 = 1LL;
      goto LABEL_18;
    }
    if ( !a3 )
    {
LABEL_40:
      v12 = CmpLightWeightPrepareSetKeyUserFlags(a1);
      goto LABEL_41;
    }
LABEL_23:
    if ( a3 == 1 )
      CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
    goto LABEL_25;
  }
  if ( v4 != 6 )
  {
    if ( v4 )
    {
      v9 = v4 - 1;
      if ( !v9 )
        goto LABEL_25;
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( (unsigned int)(v11 - 1) <= 1 )
          {
            if ( !a3 )
            {
              v12 = CmpLightWeightPrepareSetValueKeyUoW(a1, a2);
              goto LABEL_41;
            }
            CmpLightWeightCommitSetValueKeyUoW(a1, a2, a4);
            v14 = 4LL;
            goto LABEL_18;
          }
          return (unsigned int)-1073741811;
        }
LABEL_25:
        v15 = 0;
        CmpSignalDeferredPosts(v22);
        return v15;
      }
      if ( a3 )
      {
        CmpReportNotify(*(_QWORD *)(a1 + 48), a2, 1LL, v22);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
        goto LABEL_25;
      }
      v12 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
LABEL_41:
      v15 = v12;
      if ( v12 < 0 )
        return v15;
      goto LABEL_25;
    }
    if ( !a3 )
    {
      v12 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
      goto LABEL_41;
    }
    CmpLightWeightCommitAddKeyUoW(a1, a2);
    goto LABEL_17;
  }
  if ( a3 )
  {
    CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
    CmpReportNotify(*(_QWORD *)(a1 + 48), v16, 4LL, v22);
    goto LABEL_23;
  }
  v15 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
  if ( (v15 & 0x80000000) == 0 )
    goto LABEL_40;
  return v15;
}
