/*
 * XREFs of KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BC154
 * Callers:
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1407BC378 (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402E92C0 (RtlLookupFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x1402E9A40 (RtlpxLookupFunctionTable.c)
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 *     KeReadStateSemaphore @ 0x140480600 (KeReadStateSemaphore.c)
 *     RtlIsMachineFrameUnwind @ 0x1406229E0 (RtlIsMachineFrameUnwind.c)
 *     RtlLookupPrimaryFunctionEntry @ 0x140622A38 (RtlLookupPrimaryFunctionEntry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

PRTL_BITMAP __fastcall KiTpBuildExcludedKernelTracepointBitmap(PRTL_BITMAP BitMapHeader)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rdi
  unsigned int *Pool2; // rax
  unsigned __int64 *v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  struct _KTIMER *v8; // rax
  unsigned int LockNV; // edi
  unsigned int v10; // eax
  unsigned int v11; // edi
  _BYTE *v12; // rbp
  unsigned __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rdi
  struct _KTIMER *v16; // rsi
  unsigned int v17; // eax
  ULONG v18; // edx
  unsigned int v19; // eax
  ULONG v20; // edx
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v1 = PsNtosImageEnd;
  *BitMapHeader = 0LL;
  v24 = 0LL;
  v3 = (((v1 - PsNtosImageBase + 15) >> 4) + 31) & 0xFFFFFFFFFFFFFFE0uLL;
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    BitMapHeader->SizeOfBitMap = v3;
    v5 = (unsigned __int64 *)KiTpExcludedRoutines;
    BitMapHeader->Buffer = Pool2;
    v6 = 191LL;
    do
    {
      v7 = *v5;
      v8 = (struct _KTIMER *)RtlLookupFunctionEntry(*v5, &v24, 0LL);
      if ( v8 )
      {
        LockNV = v8->Header.LockNV;
        LOBYTE(v10) = KeReadStateSemaphore(v8);
      }
      else
      {
        LockNV = v7 - PsNtosImageBase;
        v10 = LockNV + 1;
      }
      RtlSetBits(BitMapHeader, LockNV >> 4, (((unsigned __int64)v10 + 15) >> 4) - (LockNV >> 4));
      ++v5;
      --v6;
    }
    while ( v6 );
    v11 = 0;
    v23 = 0LL;
    v22 = 0LL;
    if ( PsNtosImageBase < *((_QWORD *)&xmmword_141200030 + 1)
      || PsNtosImageBase >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      v12 = RtlpxLookupFunctionTable(PsNtosImageBase, (__int64)&v22);
    }
    else
    {
      v12 = (_BYTE *)xmmword_141200030;
      v22 = xmmword_141200030;
      v23 = qword_141200040;
    }
    if ( v12 )
    {
      v13 = *((_QWORD *)&v22 + 1);
      v11 = HIDWORD(v23);
    }
    else
    {
      v13 = v24;
    }
    if ( v11 / 0xC )
    {
      v14 = v11 / 0xC;
      v15 = 0LL;
      do
      {
        v16 = (struct _KTIMER *)RtlLookupPrimaryFunctionEntry(&v12[v15], v13);
        if ( (unsigned int)RtlIsMachineFrameUnwind((unsigned __int64)v16, v13) )
        {
          LOBYTE(v17) = KeReadStateSemaphore(v16);
          RtlSetBits(BitMapHeader, v18, (((unsigned __int64)v17 + 15) >> 4) - v18);
        }
        if ( v16 != (struct _KTIMER *)&v12[v15]
          && ((*((char *)BitMapHeader->Buffer + ((unsigned __int64)((unsigned int)v16->Header.LockNV >> 4) >> 3)) >> (((unsigned int)v16->Header.LockNV >> 4) & 7)) & 1) != 0 )
        {
          LOBYTE(v19) = KeReadStateSemaphore((PKTIMER)&v12[v15]);
          RtlSetBits(BitMapHeader, v20, (((unsigned __int64)v19 + 15) >> 4) - v20);
        }
        v15 += 12LL;
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    *BitMapHeader = 0LL;
  }
  return BitMapHeader;
}
