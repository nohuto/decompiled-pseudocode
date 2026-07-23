/*
 * XREFs of MmSetPfnListInfo @ 0x1402D4250
 * Callers:
 *     PfpPfnPrioRequest @ 0x140A5C74C (PfpPfnPrioRequest.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiRelinkStandbyPage @ 0x140298DC0 (MiRelinkStandbyPage.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiAddPageToHeatRanges @ 0x14048AFA8 (MiAddPageToHeatRanges.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  ULONG_PTR v10; // rbx
  unsigned __int8 v11; // al
  unsigned __int64 v12; // r15
  __int64 v13; // rbp
  unsigned __int64 v14; // r9
  char v15; // cl
  unsigned int v16; // r8d
  unsigned __int64 v17; // r9
  int v18; // r10d
  int v19; // r8d
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 PteShadow; // rax
  __int64 *v26; // r9
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-E8h]
  __int128 v29; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-D0h]
  _QWORD v31[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v32[128]; // [rsp+50h] [rbp-B8h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  if ( a3 && (stru_140E366D8.WaitRegister.Flags & 2) == 0 )
    return 3221225659LL;
  v6 = 0;
  v31[1] = qword_140E2D950;
  v7 = (unsigned __int64)&a2[3 * a1];
  v28 = 0;
  v31[0] = 130LL;
  if ( (unsigned __int64)a2 >= v7 )
    goto LABEL_28;
  do
  {
    v8 = a2[1];
    v9 = 48 * v8;
    v10 = 48 * v8 - 0x220000000000LL;
    v11 = MiSafeLockPage(v8);
    v12 = v11;
    if ( v11 == 17 )
      goto LABEL_10;
    if ( v8 > qword_140E2D920 || (*(_QWORD *)(v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        __writecr8(v12);
      }
LABEL_10:
      v28 = -1073741584;
      goto LABEL_26;
    }
    MiIdentifyPfn(v8, 0LL, (unsigned __int64 *)&v29);
    v13 = v30;
    if ( v30 != a2[2]
      || (v14 = *a2, (((unsigned __int64)v29 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0)
      || (v15 = *(_BYTE *)(v10 + 34) & 7, v15 != 6) && (unsigned __int8)(v15 - 2) > 2u )
    {
LABEL_35:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v12 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
        __writecr8(v12);
      }
      v28 = -1073741788;
      v30 = v13 | 2;
      *(_OWORD *)a2 = v29;
      a2[2] = v13 | 2;
      goto LABEL_26;
    }
    if ( !a3 )
    {
      v16 = *(_DWORD *)(v10 + 32);
      v17 = v14 >> 57;
      v18 = v17 & 7;
      if ( (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) == 0 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x8000000) == 0 )
          goto LABEL_17;
        if ( v10 >= 0xFFFFDE0000000000uLL
          && v10 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
          && !(unsigned int)MiIsDecayPfn(v9 / 48) )
        {
          if ( (v16 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v10) == 9 )
          {
            v19 = 5;
            goto LABEL_18;
          }
LABEL_17:
          v19 = HIBYTE(v16) & 7;
LABEL_18:
          if ( v18 != v19 )
          {
            if ( (*(_BYTE *)(v10 + 34) & 7) == 2 )
            {
              MiRelinkStandbyPage(v10, v18);
            }
            else if ( (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) == 0 )
            {
              *(_DWORD *)(v10 + 32) = ((_DWORD)v17 << 24) ^ (((_DWORD)v17 << 24) ^ *(_DWORD *)(v10 + 32)) & 0xF8FFFFFF;
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int8)v12 < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
            __writecr8(v12);
          }
          goto LABEL_26;
        }
      }
      v19 = 5;
      goto LABEL_18;
    }
    if ( (v14 & 0x80u) == 0LL || v15 != 2 || (unsigned __int16)*(_DWORD *)(v10 + 32) )
      goto LABEL_35;
    v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    v22 = MiPageToNode(v8);
    if ( ((stru_140E366D8.WaitRegister.Flags & 2) == 0
       || (stru_140E366D8.WaitRegister.Flags & 4) != 0
       || (v23 = 56320LL * v22 + *(_QWORD *)(v21 + 16)) != 0 && (*(_DWORD *)(v23 + 14096) & 2) != 0)
      && (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) == 0 )
    {
      goto LABEL_35;
    }
    v24 = *(_QWORD *)(v10 + 16) >> 16;
    if ( (*(_QWORD *)(v10 + 16) & 0x400LL) != 0 )
      LOBYTE(v24) = *(_QWORD *)(v10 + 16) >> 2;
    if ( (v24 & 1) != 0 )
      goto LABEL_35;
    if ( (*(_BYTE *)(v10 + 34) & 7) != 6 )
      _InterlockedIncrement(&dword_140E34A84);
    PteShadow = *(_QWORD *)(v10 + 16);
    v26 = (__int64 *)(v10 + 16);
    if ( v10 + 16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v26 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v10 + 16, *(_QWORD *)(v10 + 16));
    v27 = 0x10000LL;
    if ( (PteShadow & 0x400) != 0 )
      v27 = 4LL;
    *v26 = PteShadow | v27;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v12 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      __writecr8(v12);
    }
    if ( (unsigned int)MiAddPageToHeatRanges(v31, v8, 3LL) )
      MiIssuePageHeatList(v31);
LABEL_26:
    a2 += 3;
  }
  while ( (unsigned __int64)a2 < v7 );
  v6 = v28;
LABEL_28:
  if ( HIDWORD(v31[0]) )
    MiIssuePageHeatList(v31);
  return v6;
}
