/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x1408BF9B8
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140862CBC (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1408BF948 (HvpViewMapCOWAndUnsealRange.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14049C6F4 (CmSiProtectViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1404DF730 (HvcallpNoHypervisorPresent.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408BFBB4 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 *     HvpViewMapTouchPages @ 0x1408BFEA0 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  NTSTATUS v8; // r14d
  __int64 i; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  LODWORD(v17) = 0;
  v8 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), (void *)(a2[7] + a3 - a2[3]), a4 - a3, 8u, (ULONG *)&v17);
  if ( v8 >= 0 )
  {
    for ( i = v4; i < a4; i += 4096LL )
    {
      if ( (*((_BYTE *)a2 + ((unsigned __int64)(i - a2[3]) >> 12) + 72) & 2) == 0 )
      {
        v14 = HvcallpNoHypervisorPresent();
        LOBYTE(v16) = 1;
        v8 = HvpViewMapTouchPages(a2[7] + v15, v14, v16);
        if ( v8 < 0 )
        {
          while ( v4 < a4 )
          {
            if ( (*((_BYTE *)a2 + ((unsigned __int64)(v4 - a2[3]) >> 12) + 72) & 6) == 0 )
              CmSiProtectViewOfSection(
                v4 - a2[3],
                *(void ***)(a1 + 24),
                (void *)(v4 - a2[3] + a2[7]),
                0x1000uLL,
                0x80000002,
                (ULONG *)&v17);
            v4 += 4096LL;
          }
          return (unsigned int)v8;
        }
      }
    }
    while ( v4 < a4 )
    {
      v10 = v4 - a2[3];
      v11 = v10 + a2[7];
      v12 = v10 >> 12;
      *((_BYTE *)a2 + (v10 >> 12) + 72) |= 0xAu;
      if ( (*((_BYTE *)a2 + (v10 >> 12) + 72) & 0x10) != 0 )
      {
        HvpViewMapReleaseChargesAndUnlockViewPages(v10, *(_QWORD *)(a1 + 24), v11, 4096LL);
        *((_BYTE *)a2 + v12 + 72) &= ~0x10u;
        --a2[8];
        *((_BYTE *)a2 + v12 + 72) |= 4u;
      }
      v4 += 4096LL;
    }
    return 0;
  }
  return (unsigned int)v8;
}
