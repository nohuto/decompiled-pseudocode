/*
 * XREFs of MmFreePoolMemory @ 0x14035231C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpFreeVA @ 0x140352258 (RtlpHpFreeVA.c)
 *     RtlpHpEnvFreeVA @ 0x1403522D8 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x140352980 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140353684 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x14063BF90 (RtlpHpVaMgrRangeDecommit.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiDeterminePoolType @ 0x140353D3C (MiDeterminePoolType.c)
 *     MiDecommitPagedPool @ 0x140353D78 (MiDecommitPagedPool.c)
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2, unsigned int a3)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // rsi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // edi
  int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  volatile signed __int64 *p_Process; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-28h]

  v3 = *a2;
  v4 = *a1;
  BugCheckParameter4 = a3;
  v14[0] = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v14[1] = (v3 >> 12) + ((v3 & 0xFFF) != 0);
  v6 = MiDeterminePoolType(v4);
  v7 = v6;
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v4, v3, BugCheckParameter4);
  v8 = BugCheckParameter4 | 0x4000;
  if ( (BugCheckParameter4 & 0x8000) == 0 )
    v8 = BugCheckParameter4;
  v9 = v8;
  if ( (v8 & 0x4000) != 0 )
  {
    if ( v6 == 64 )
    {
      if ( (v8 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        v9 = v8 | 0x40000000;
      BYTE4(v15) = 1;
      LODWORD(v15) = v9;
      v14[0] = v4;
      v10 = MiClearNonPagedPtes(v14);
    }
    else
    {
      v10 = MiDecommitPagedPool(v4, (v3 >> 12) + ((v3 & 0xFFF) != 0), v8);
    }
    if ( v10 )
    {
      v11 = -v10;
      p_Process = &qword_140E2C708;
      if ( v7 != 64 )
        p_Process = (volatile signed __int64 *)&stru_140E366D8.ApcState.Process;
      _InterlockedAdd64(p_Process, v11);
    }
  }
  if ( (v9 & 0x8000) != 0 && (unsigned int)MiGetSystemRegionType(v4) != 20 )
    MiReturnSystemVa(v4, v3 + v4);
  return 0LL;
}
