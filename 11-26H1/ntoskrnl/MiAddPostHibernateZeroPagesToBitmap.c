/*
 * XREFs of MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4
 * Callers:
 *     MiRecordPostHibernateZeroPages @ 0x140C07280 (MiRecordPostHibernateZeroPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiIsPfn @ 0x14041A8F0 (MiIsPfn.c)
 *     MiIsPfnFileOnly @ 0x1404595D0 (MiIsPfnFileOnly.c)
 *     MiIsPfnOnSlabStandbyList @ 0x14048756C (MiIsPfnOnSlabStandbyList.c)
 *     MiTryLockPageAtDpc @ 0x14048B090 (MiTryLockPageAtDpc.c)
 *     MiTryLockHugePfnAtDpc @ 0x1406F2A6C (MiTryLockHugePfnAtDpc.c)
 *     MiUnlockHugePfnAtDpcUnordered @ 0x1406F2A88 (MiUnlockHugePfnAtDpcUnordered.c)
 */

__int64 __fastcall MiAddPostHibernateZeroPagesToBitmap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 **v4; // rax
  unsigned __int8 *p_WaitType; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int PfnPageSizeIndex; // eax
  char v19; // al
  int v20; // r9d
  int v21; // r14d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  __int64 v25; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = 0LL;
  v4 = (unsigned __int8 **)&v25;
  p_WaitType = &stru_140E2ED08.WaitBlock[1].WaitType;
  v6 = 2LL;
  do
  {
    *v4 = p_WaitType;
    p_WaitType += 32;
    ++v4;
    --v6;
  }
  while ( v6 );
  v7 = a2 + a3;
  v8 = 0LL;
  while ( a2 < v7 )
  {
    if ( a2 > qword_140E2D920 )
      return v8;
    v9 = -1LL;
    v10 = 1LL;
    v11 = 1LL;
    if ( MiIsPageInHugePfn(a2) )
    {
      v10 = 0x40000LL;
      v12 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((a2 >> 18) & 0x3FFFFF));
      if ( (unsigned int)MiTryLockHugePfnAtDpc((__int64)v12) )
      {
        v13 = *v12 & 7LL;
        if ( (v13 == 1 || v13 == 2) && (*v12 & 0x800000000000000LL) == 0 )
          v9 = (a2 >> 18) & 0x3FFFFF;
        MiUnlockHugePfnAtDpcUnordered((__int64)v12);
        v14 = v26;
        goto LABEL_42;
      }
    }
    else if ( MiIsPfn(a2) )
    {
      v15 = 48 * a2 - 0x220000000000LL;
      if ( MiTryLockPageAtDpc(v15) )
      {
        if ( !(unsigned int)MiIsPfnFileOnly(v16) )
        {
          if ( (*(_QWORD *)(v15 + 40) & 0x10000000000LL) == 0 )
            goto LABEL_19;
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(v17);
          if ( PfnPageSizeIndex != 3 )
          {
            v10 = MiPageSizes[PfnPageSizeIndex];
LABEL_19:
            if ( !(unsigned __int16)*(_DWORD *)(v15 + 32) )
            {
              v19 = *(_BYTE *)(v15 + 34) & 7;
              switch ( v19 )
              {
                case 0:
                  goto LABEL_23;
                case 1:
                  if ( (*(_BYTE *)(v15 + 34) & 8) == 0 )
LABEL_23:
                    v9 = a2;
                  break;
                case 2:
                  if ( (unsigned int)MiGetPfnSlabType(v15) == 9
                    || (v21 = 1, !(unsigned int)MiIsPfnOnSlabStandbyList(v15)) )
                  {
                    v21 = v20;
                  }
                  if ( !(unsigned int)MiGetPagePrivilege((_QWORD *)v15, 1LL, 0LL) )
                  {
                    v23 = (unsigned int)MiIsPfnFileOnly(v15)
                       || (*(_DWORD *)(v15 + 32) & 0x8000000) != 0
                       && (v15 < 0xFFFFDE0000000000uLL
                        || v15 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
                        || MiIsDecayPfn((__int64)(48 * a2) / 48)
                        || (v22 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v15) == 9)
                        ? 5
                        : HIBYTE(v22) & 7;
                    if ( !v21
                      && v23 < *(unsigned __int8 *)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                                              + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL))
                                                  + 16484LL) )
                    {
                      v9 = a2;
                    }
                  }
                  break;
              }
            }
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v14 = v25;
            v11 = v10;
LABEL_42:
            if ( !(a2 % v10) && v7 - a2 >= v10 && v9 != -1LL )
            {
              RtlSetBitsEx(v14, v9, v11);
              v8 += v10;
            }
            goto LABEL_46;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
LABEL_46:
    a2 += v10 - ((v10 - 1) & (v10 + a2));
  }
  return v8;
}
