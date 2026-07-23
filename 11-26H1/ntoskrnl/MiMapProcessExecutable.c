/*
 * XREFs of MiMapProcessExecutable @ 0x140A08810
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 *     MmMapViewOfSectionEx @ 0x1404B623C (MmMapViewOfSectionEx.c)
 *     MiCfgInitializeProcess @ 0x14077B82C (MiCfgInitializeProcess.c)
 *     PsMapSystemDlls @ 0x140A08964 (PsMapSystemDlls.c)
 *     MiMapAllImageScpPages @ 0x140A08CA0 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(ULONG_PTR a1, ULONG_PTR a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rcx
  BOOL v11; // r11d
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // [rsp+28h] [rbp-41h]
  int v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+17h]
  _OWORD v19[2]; // [rsp+88h] [rbp+1Fh] BYREF
  unsigned __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a2 + 56);
  memset(v19, 0, sizeof(v19));
  if ( (v3 & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = PsSessionCreate(), (int)result >= 0) )
  {
    v7 = 4LL;
    v14 = (*a3 & 0x10) << 25;
    v21 = 0LL;
    v20 = 0LL;
    v16 = 0LL;
    v17 = 5LL;
    v18 = 32LL;
    result = MmMapViewOfSectionEx(
               a2,
               a1,
               (__int64)&v20,
               (__int64)&v16,
               (__int64)&v21,
               v14,
               4,
               &v17,
               1,
               0,
               0LL,
               v15,
               0x2000000);
    v9 = result;
    if ( (int)result >= 0 )
    {
      v10 = v20;
      v11 = 0;
      *(_QWORD *)(a1 + 688) = v20;
      if ( (*a3 & 0x10) != 0 )
      {
        MiFillPteHierarchy(v10, (unsigned __int64 *)v19);
        while ( 1 )
        {
          v12 = (__int64 *)*(&v18 + v7--);
          v13 = *v12;
          if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v13) = MiReadPteShadow((unsigned __int64)v12, *v12);
          if ( (v13 & 1) == 0 )
          {
LABEL_20:
            *a3 &= ~0x10u;
            goto LABEL_5;
          }
          if ( (v13 & 0x80u) != 0LL )
            break;
          if ( v7 == 1 )
            goto LABEL_20;
        }
        v11 = (*a3 & 0x20) != 0;
      }
LABEL_5:
      result = PsMapSystemDlls(a1, v11);
      if ( (int)result >= 0 )
      {
        result = MiCfgInitializeProcess(a1);
        if ( (int)result >= 0 )
        {
          result = MiCommitInitialVadMetadataBits();
          if ( (int)result >= 0 )
          {
            MiMapAllImageScpPages(a1);
            return v9;
          }
        }
      }
    }
  }
  return result;
}
