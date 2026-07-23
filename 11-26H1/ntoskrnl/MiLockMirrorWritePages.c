/*
 * XREFs of MiLockMirrorWritePages @ 0x140525140
 * Callers:
 *     MiWriteBrownPages @ 0x1404A8640 (MiWriteBrownPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockMirrorWritePages(_QWORD *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  ULONG_PTR v6; // r10
  volatile signed __int32 *v7; // r9
  __int64 result; // rax
  int v9; // esi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // r10
  unsigned __int64 v17; // r9
  volatile signed __int32 *v18; // r8
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  ULONG_PTR v24; // r10
  unsigned __int64 v25; // r9
  volatile signed __int32 *v26; // r8
  unsigned int v27; // eax
  unsigned __int64 v28; // rcx
  ULONG_PTR v29; // r10
  unsigned __int64 v30; // r9
  volatile signed __int32 *v31; // r8
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned __int8 v34; // cl
  int v35; // [rsp+60h] [rbp+8h] BYREF
  __int64 v36; // [rsp+78h] [rbp+20h]

  LODWORD(v4) = 0;
  if ( !*(_DWORD *)(*a1 + 24LL) )
  {
    v11 = 48 * a2 - 0x220000000000LL;
    v36 = 0LL;
    v12 = 256LL;
    if ( a3 <= 0x100 )
      v12 = a3;
    v13 = v11 + 48 * v12;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
    }
    if ( v11 >= v13 )
    {
LABEL_76:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    v15 = v11 + 24;
    while ( 1 )
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(__int64 *)v15 < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v15 + 8) || (unsigned __int8)((*(_BYTE *)(v15 + 10) & 7) - 2) > 2u )
      {
        v29 = a2 & 0x1F;
        LOBYTE(v30) = 1;
        v31 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (a2 >> 5);
        if ( v29 + 1 <= 0x20 )
        {
          v32 = 1 << v29;
          goto LABEL_65;
        }
        if ( (a2 & 0x1F) == 0 )
          goto LABEL_64;
        v4 = 32 - (unsigned int)(a2 & 0x1F);
        _InterlockedOr(v31, ((1 << (32 - (a2 & 0x1F))) - 1) << v29);
        v30 = 1 - v4;
        ++v31;
        if ( (unsigned __int64)(1 - v4) >= 0x20 )
        {
          v33 = v30 >> 5;
          v30 += -32LL * (v30 >> 5);
          do
          {
            *v31++ = -1;
            --v33;
          }
          while ( v33 );
        }
        if ( v30 )
        {
LABEL_64:
          v32 = (1 << v30) - 1;
LABEL_65:
          _InterlockedOr(v31, v32);
        }
        _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
        v21 = a1[2] == -1LL;
        goto LABEL_67;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v15 + 16) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      {
        v16 = a2 & 0x1F;
        LOBYTE(v17) = 1;
        v18 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (a2 >> 5);
        if ( v16 + 1 <= 0x20 )
        {
          v19 = 1 << v16;
          goto LABEL_37;
        }
        if ( (a2 & 0x1F) == 0 )
          goto LABEL_36;
        v4 = 32 - (unsigned int)(a2 & 0x1F);
        _InterlockedOr(v18, ((1 << (32 - (a2 & 0x1F))) - 1) << v16);
        v17 = 1 - v4;
        ++v18;
        if ( (unsigned __int64)(1 - v4) >= 0x20 )
        {
          v20 = v17 >> 5;
          v17 += -32LL * (v17 >> 5);
          do
          {
            *v18++ = -1;
            --v20;
          }
          while ( v20 );
        }
        if ( v17 )
        {
LABEL_36:
          v19 = (1 << v17) - 1;
LABEL_37:
          _InterlockedOr(v18, v19);
        }
        _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_39;
      }
      if ( (MiUnlinkPageFromListEx(v11, 0) & 3) != 0 )
      {
        MiDiscardTransitionPfnEx(v11, 0LL, v22);
        goto LABEL_42;
      }
      *(_QWORD *)v15 &= 0xC000000000000000uLL;
      if ( !(unsigned int)MiAddLockedPageCharge(v11, 0, v22, v23) )
      {
        MiPfnReferenceCountIsZero(v11, a2);
LABEL_42:
        _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
        *(_DWORD *)(*a1 + 24LL) = 1;
LABEL_39:
        v21 = a1[1] == -1LL;
LABEL_67:
        if ( !v21 )
          goto LABEL_76;
        goto LABEL_68;
      }
      v24 = a2 & 0x1F;
      LOBYTE(v25) = 1;
      v26 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (a2 >> 5);
      if ( v24 + 1 > 0x20 )
      {
        if ( (a2 & 0x1F) != 0 )
        {
          v4 = 32 - (unsigned int)(a2 & 0x1F);
          _InterlockedAnd(v26, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v24));
          v25 = 1 - v4;
          ++v26;
          if ( (unsigned __int64)(1 - v4) >= 0x20 )
          {
            v28 = v25 >> 5;
            v25 += -32LL * (v25 >> 5);
            do
            {
              *v26++ = 0;
              --v28;
            }
            while ( v28 );
          }
          if ( !v25 )
            goto LABEL_54;
        }
        v27 = -1 << v25;
      }
      else
      {
        v27 = ~(1 << v24);
      }
      _InterlockedAnd(v26, v27);
LABEL_54:
      _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
      if ( a1[1] == -1LL )
        a1[1] = a2;
      ++a1[2];
LABEL_68:
      if ( (++v36 & 0xF) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v34 = KeGetCurrentIrql();
        if ( v34 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v4) = 2;
          KiRaiseIrqlProcessIrqlFlags(v34, v4);
        }
      }
      v11 += 48LL;
      v15 += 48LL;
      ++a2;
      if ( v11 >= v13 )
        goto LABEL_76;
    }
  }
  v6 = a2 & 0x1F;
  v7 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (a2 >> 5);
  result = v6 + a3;
  if ( v6 + a3 <= 0x20 )
  {
    if ( a3 == 32 )
    {
      *v7 = -1;
      return result;
    }
    result = (unsigned int)(((1 << a3) - 1) << v6);
    goto LABEL_13;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    v9 = a2 & 0x1F;
    result = (unsigned int)(((1 << (32 - v9)) - 1) << v6);
    _InterlockedOr(v7, result);
    a3 -= (unsigned int)(32 - v9);
    ++v7;
  }
  if ( a3 >= 0x20 )
  {
    v10 = a3 >> 5;
    result = -32LL * (a3 >> 5);
    a3 += result;
    do
    {
      *v7++ = -1;
      --v10;
    }
    while ( v10 );
  }
  if ( a3 )
  {
    result = (unsigned int)((1 << a3) - 1);
LABEL_13:
    _InterlockedOr(v7, result);
  }
  return result;
}
