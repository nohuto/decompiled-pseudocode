/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x14035A1D0
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1404BBDD8 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiJoinHugeContext @ 0x140358884 (MiJoinHugeContext.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     MiCompleteJoinHugeContext @ 0x14035A938 (MiCompleteJoinHugeContext.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 */

unsigned int **__fastcall MiGetUltraHugeAlreadyActive(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  _RTL_BITMAP **v4; // r12
  _RTL_BITMAP *i; // r15
  unsigned int **p_Buffer; // rbx
  ULONG ClearBits; // ebp
  __int64 v8; // rcx
  _BYTE *v9; // rsi
  unsigned int v10; // r13d
  unsigned int *v11; // rcx
  __int64 v12; // rdi
  char v13; // al
  unsigned int *v14; // rcx
  __int128 v15; // xmm0
  __int64 v17; // rdi
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 328);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 136LL);
  if ( v2 )
  {
    if ( (*(_QWORD *)(v2 + 24) & 1) == 0 && (unsigned int)MiJoinHugeContext(*(_QWORD *)(a1 + 328), a1, 1) )
      return (unsigned int **)v2;
    MiDereferenceHugeContext(a1);
  }
  v4 = (_RTL_BITMAP **)(v3 + 32);
  for ( i = *v4; i != (_RTL_BITMAP *)v4; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    p_Buffer = &i[-5].Buffer;
    v18 = 0LL;
    ClearBits = RtlFindClearBits(i + 1, 1u, 0);
    if ( ClearBits != -1 )
    {
      v8 = ClearBits & 7;
      v9 = (char *)p_Buffer[12] + ((unsigned __int64)ClearBits >> 3);
      v10 = 1;
      if ( (unsigned int)(v8 + 1) > 8 )
      {
        if ( (ClearBits & 7) == 0 )
          goto LABEL_21;
        v10 = v8 - 7;
        *v9++ |= byte_140018470[v8];
        if ( (unsigned int)(v8 - 7) > 8 )
        {
          RtlSetVolatileMemory(v9, 255, (unsigned __int64)v10 >> 3);
          v9 += (unsigned __int64)v10 >> 3;
          v10 &= 7u;
        }
        if ( v10 )
LABEL_21:
          *v9 |= byte_1400327C0[v10];
      }
      else
      {
        *v9 |= 1 << v8;
      }
      v11 = p_Buffer[21];
      if ( *((_BYTE *)p_Buffer + 68) )
      {
        v17 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((unsigned __int64)p_Buffer[21] & 0x3FFFFF);
        *(_QWORD *)&v18 = v17;
        MiLockHugePfnAtDpc(v17);
        if ( ((unsigned __int8)p_Buffer[3] & 1) == 0 )
        {
LABEL_9:
          v15 = v18;
          ++*((_DWORD *)p_Buffer + 79);
          v18 = v15;
          *(_QWORD *)(a1 + 328) = p_Buffer;
          MiCompleteJoinHugeContext(v14, a1, &v18, ClearBits);
          return &i[-5].Buffer;
        }
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                    + 4
                                    * ((((v17 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << ((v17 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
      }
      else
      {
        v12 = 48LL * (_QWORD)v11 - 0x220000000000LL;
        BYTE8(v18) = 1;
        *(_QWORD *)&v18 = v12;
        v13 = MiSafeLockPageAtDpc(v11);
        v14 = p_Buffer[3];
        if ( ((unsigned __int8)v14 & 1) == 0 )
          goto LABEL_9;
        if ( v13 != 17 )
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 0LL;
}
