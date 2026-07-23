/*
 * XREFs of RtlpHpLfhSubsegmentDecBlockCounts @ 0x14034F790
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhOwnerListCompact @ 0x14034F430 (RtlpHpLfhOwnerListCompact.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDecBlockCounts(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  char v5; // cl
  __int64 v7; // r11
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // r8
  int v11; // edx
  signed __int16 v12; // cx
  __int64 v14; // kr00_8
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int StackBase_high; // eax

  v5 = *(_BYTE *)(a2 + 38);
  v7 = 2LL * (a3 >> 12 >> v5);
  v8 = (char *)(a2 + v7 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v8);
  LODWORD(v9) = -1;
  v10 = &v8[2 * (((a4 + a3 - 1) >> 12 >> v5) - (a3 >> 12 >> v5)) + 2];
  v11 = 0;
  if ( v8 < v10 )
  {
    do
    {
      v12 = _InterlockedDecrement16((volatile signed __int16 *)v8);
      if ( v12 )
      {
        if ( v12 == -1 )
          --v11;
      }
      else
      {
        ++v11;
        if ( (_DWORD)v9 == -1 )
          v9 = v7 >> 1;
      }
      v8 += 2;
      v7 += 2LL;
    }
    while ( v8 < v10 );
    if ( v11 )
    {
      v14 = v11 << 12 << *(_BYTE *)(a2 + 38);
      v15 = ((WORD2(v14) & 0xFFF) + (int)v14) >> 12;
      _InterlockedAdd64((volatile signed __int64 *)((char *)a1 + a1[37] + 24), v15);
      if ( v15 > 0 )
      {
        v16 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*((_BYTE *)a1 + v16 + 92) )
        {
          *((_BYTE *)a1 + v16 + 92) = 1;
          if ( BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1 )
            StackBase_high = HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase);
          else
            StackBase_high = ExSaPageGroupDescriptorArrayLock.ThreadLock;
          if ( !StackBase_high )
            RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)a1 + 56LL));
        }
      }
    }
  }
  return (unsigned int)v9;
}
