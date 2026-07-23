/*
 * XREFs of HvValidateOrInvalidatePrimaryFileHeader @ 0x140AA83C0
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvValidateOrInvalidatePrimaryFileHeader(__int64 a1, char a2, char a3)
{
  _DWORD *Pool2; // rsi
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  if ( *(_QWORD *)(a1 + 1544) )
  {
    if ( a3 )
    {
      Pool2 = *(_DWORD **)(a1 + 1784);
    }
    else
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v11 = *(_OWORD **)(a1 + 64);
      v12 = 4LL;
      v13 = Pool2;
      do
      {
        *v13 = *v11;
        v13[1] = v11[1];
        v13[2] = v11[2];
        v13[3] = v11[3];
        v13[4] = v11[4];
        v13[5] = v11[5];
        v13[6] = v11[6];
        v13 += 8;
        v14 = v11[7];
        v11 += 8;
        *(v13 - 1) = v14;
        --v12;
      }
      while ( v12 );
    }
    v7 = *(_DWORD *)(a1 + 172);
    v8 = v7 - 1;
    if ( a2 )
      v8 = *(_DWORD *)(a1 + 172);
    Pool2[2] = v8;
    Pool2[1] = v7;
    Pool2[127] = HvpHeaderCheckSum(Pool2);
    v9 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v9 >= 0 )
    {
      v9 = CmpFileFlushAndPurge(a1, 0LL);
      if ( v9 >= 0 )
      {
        *(_BYTE *)(a1 + 194) = a2;
        v9 = 0;
        *(_DWORD *)(a1 + 184) = Pool2[2];
      }
    }
    if ( !a3 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v9;
}
