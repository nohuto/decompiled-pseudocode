/*
 * XREFs of MmEnoughMemoryForWrite @ 0x140385F80
 * Callers:
 *     CcCanIWriteStreamEx @ 0x140385C00 (CcCanIWriteStreamEx.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 */

__int64 __fastcall MmEnoughMemoryForWrite(__int64 a1)
{
  unsigned __int8 v1; // r13
  __int64 v2; // r15
  unsigned __int8 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  ULONG *v8; // rbp
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int16 **v14; // rbx
  unsigned __int16 *v15; // rcx
  unsigned int v16; // r8d
  _DWORD *v17; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  char v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  v3 = 17;
  v4 = a1;
  v20 = 17;
  if ( a1 )
  {
    v5 = 3LL;
    if ( KeGetCurrentIrql() != 2 )
      v5 = 1LL;
    v6 = MiLockSectionControlArea(a1, v5, &v20);
    v2 = v6;
    if ( !v6 )
      return 1LL;
    v3 = v20;
    v8 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v6 + 60) & 0x3FF));
  }
  else
  {
    v8 = &MiSystemPartition;
  }
  v9 = *((_QWORD *)v8 + 2808);
  v10 = 450LL;
  if ( (_BYTE)dword_140FBF22C )
    v10 = 0x4000LL;
  if ( v9 >= v10 )
    goto LABEL_24;
  v11 = 0;
  if ( KeNumberNodes )
  {
    v12 = *((_QWORD *)v8 + 2) + 13856LL;
    while ( 2 )
    {
      v13 = 0LL;
      v14 = (unsigned __int16 **)v12;
      do
      {
        v15 = *v14;
        v16 = 0;
        if ( dword_140E2D90C )
        {
          while ( 1 )
          {
            v9 += *v15;
            if ( v9 >= v10 )
              break;
            ++v16;
            v15 += 8;
            if ( v16 >= dword_140E2D90C )
              goto LABEL_17;
          }
          v4 = a1;
          goto LABEL_24;
        }
LABEL_17:
        ++v13;
        ++v14;
      }
      while ( v13 <= 1 );
      v12 += 56320LL;
      if ( ++v11 < (unsigned int)(unsigned __int16)KeNumberNodes )
        continue;
      break;
    }
    v4 = a1;
  }
  if ( *((_QWORD *)v8 + 2906) < (unsigned __int64)(*((_QWORD *)v8 + 2932) + 800LL)
    && (unsigned int)MiSufficientAvailablePages((__int64)v8, 0x50uLL) )
  {
LABEL_24:
    v1 = 1;
  }
  if ( !v4 )
    return v1;
  v17 = (_DWORD *)(v2 + 72);
  if ( v3 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v17 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
    return v1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    *v17 = 0;
    return v1;
  }
  else
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
    return v1;
  }
}
