/*
 * XREFs of MiValidatePagefilePageHash @ 0x14038ED2C
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiArePagefileContentsCorrupted @ 0x1402BD7B0 (MiArePagefileContentsCorrupted.c)
 *     MiObtainPagefileHashes @ 0x14038DD0C (MiObtainPagefileHashes.c)
 *     MiInPageSkipPage @ 0x14038F000 (MiInPageSkipPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  __int64 v6; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r10
  int v18; // [rsp+20h] [rbp-158h] BYREF
  __int64 v19; // [rsp+28h] [rbp-150h]
  __int64 v20; // [rsp+30h] [rbp-148h]
  unsigned __int64 v21; // [rsp+38h] [rbp-140h]
  __int128 v22[16]; // [rsp+40h] [rbp-138h] BYREF

  v1 = (__int64 *)(a1 + 320);
  v2 = (*(_DWORD *)(a1 + 304) + *(_DWORD *)(a1 + 316)) & 0xFFF;
  v3 = *(_QWORD *)(a1 + 88) + 4095LL;
  v19 = 0LL;
  v4 = 0;
  v5 = 0;
  LODWORD(v6) = 0;
  v8 = 8 * ((unsigned __int64)(v3 + v2) >> 12);
  v21 = v8 + a1 + 320;
  if ( a1 + 320 < v21 )
  {
    v9 = 2LL;
    while ( 1 )
    {
      v20 = *v1;
      v10 = 48 * v20 - 0x220000000000LL;
      if ( !(unsigned int)MiInPageSkipPage(v10, v9) )
        break;
LABEL_29:
      ++v5;
      ++v1;
      v8 -= 8LL;
      if ( (unsigned __int64)v1 >= v21 )
        return v4;
    }
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v9 )
      __writecr8(v9);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v11, v9);
    }
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_24;
    v13 = *(_QWORD *)(v10 + 16);
    v14 = (v13 >> 5) & 0x1F;
    if ( (dword_140FBF210 & 1) == 0 && (_DWORD)v14 != 31 )
    {
      if ( (unsigned int)v14 >> 3 != 3 )
      {
        if ( (unsigned int)v14 >> 3 != 1 )
          goto LABEL_15;
LABEL_24:
        v9 = 2LL;
        if ( CurrentIrql != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql < 2u )
          {
            if ( KiIrqlFlags )
            {
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              v9 = 2LL;
            }
            __writecr8(CurrentIrql);
          }
        }
        goto LABEL_29;
      }
      if ( ((v13 >> 5) & 7) != 0 )
        goto LABEL_24;
    }
LABEL_15:
    if ( (v13 & 8) != 0 )
    {
      if ( qword_140E2D8C0 && (v13 & 0x10) == 0 )
        v13 &= qword_140E2D8C8;
      v15 = HIDWORD(v13);
      if ( (_DWORD)v15 )
      {
        v16 = v19;
        if ( !v19 )
        {
          v16 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL))
                          + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v10 + 16)) >> 4)
                          + 22304);
          v19 = v16;
        }
        if ( v5 >= (unsigned int)v6 )
        {
          v6 = v8 >> 3;
          if ( (unsigned int)(v8 >> 3) > 0x10 )
            LODWORD(v6) = 16;
          MiObtainPagefileHashes(v16, v15, v6, (__int64)v22);
          v5 = 0;
        }
        if ( (unsigned int)MiArePagefileContentsCorrupted(v20, &v22[v5], 1) )
        {
          if ( v10 == *(_QWORD *)(a1 + 256) )
            v4 = -1073741761;
          *(_DWORD *)(v10 + 32) |= 0x10000000u;
        }
      }
    }
    goto LABEL_24;
  }
  return v4;
}
