/*
 * XREFs of HvWriteHivePrimaryFile @ 0x140AA80BC
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 *     HvpFinishPrimaryWrite @ 0x140AA82C8 (HvpFinishPrimaryWrite.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x140AA8DBC (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvWriteHivePrimaryFile(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  char v7; // r13
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  _QWORD *Pool2; // rsi
  bool v13; // zf
  ULONG v15; // eax
  unsigned int v16; // ebx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]
  int i; // [rsp+B0h] [rbp+48h] BYREF
  int v22; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+60h] BYREF

  v24 = 0LL;
  v22 = 0;
  v23 = 0;
  v5 = a3 & 1;
  v7 = 0;
  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 128) )
    {
      v8 = *(_DWORD **)(a1 + 64);
      v8[10] = *(_DWORD *)(a1 + 280);
      v8[11] = 1;
      goto LABEL_4;
    }
LABEL_23:
    v11 = 0;
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(a1 + 1768) )
    goto LABEL_23;
  v8 = *(_DWORD **)(a1 + 1784);
LABEL_4:
  v9 = *(_DWORD *)(a1 + 184);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = HvpHeaderCheckSum(v8);
  v13 = *(_DWORD *)&WheapPfaLock.WaitBlockFill11[24] == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v13 )
    goto LABEL_26;
  v20 = v5;
  v7 = 1;
  v11 = guard_dispatch_icall_no_overrides(a1, 0LL);
  if ( v11 < 0 )
    goto LABEL_16;
  if ( *(_DWORD *)&WheapPfaLock.WaitBlockFill11[24] == 2 )
  {
LABEL_26:
    v11 = -1073741823;
    goto LABEL_16;
  }
  if ( a2 )
  {
    Pool2 = *(_QWORD **)(a1 + 1768);
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v11 = -1073741801;
      goto LABEL_16;
    }
    v16 = 0;
    for ( i = 0; v16 < *(_DWORD *)(a1 + 128); v22 = v18 + v17 )
    {
      if ( !HvpFindNextDirtyBlock(a1, a1 + 112, &i, &v24, &v23, &v22, 0) )
        break;
      v17 = v22;
      v18 = v16++;
      v19 = 3 * v18;
      Pool2[v19 + 1] = v24;
      LODWORD(v18) = v23;
      LODWORD(Pool2[v19]) = v17;
      LODWORD(Pool2[v19 + 2]) = v18;
    }
  }
  if ( *(_DWORD *)&WheapPfaLock.WaitBlockFill11[24] == 3 )
    goto LABEL_14;
  v20 = v5;
  v11 = guard_dispatch_icall_no_overrides(a1, 0LL);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( *(_DWORD *)&WheapPfaLock.WaitBlockFill11[24] == 4 )
    goto LABEL_14;
  v11 = CmpFileFlushAndPurge(a1, 0LL);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( *(_DWORD *)&WheapPfaLock.WaitBlockFill11[24] == 5 )
  {
LABEL_14:
    v11 = -1073741823;
  }
  else
  {
    if ( a2 )
      v15 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 1744));
    else
      v15 = *(_DWORD *)(a1 + 128);
    CmpTraceHiveFlushWrotePrimaryFile(v15, v15 << 9);
    v7 = 0;
    v11 = 0;
  }
LABEL_15:
  if ( Pool2 )
  {
    v13 = a2 == 0;
    if ( a2 )
      goto LABEL_17;
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_16:
  v13 = a2 == 0;
LABEL_17:
  LOBYTE(a4) = v13;
  LOBYTE(a3) = v7;
  HvpFinishPrimaryWrite(a1, v11 >= 0, a3, a4, v20);
  return (unsigned int)v11;
}
