/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x180080000
 * Callers:
 *     AVrfpSnapDllImports @ 0x1800C6E40 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  unsigned int v4; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  __int64 Config; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // edx
  unsigned int *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = a1 + 120;
  v4 = 0;
  v20 = 0LL;
  v21 = 0LL;
  LOBYTE(a2) = 1;
  v6 = *(_QWORD *)(v2 + 48);
  v22 = 0LL;
  v7 = RtlImageDirectoryEntryToData(v6, a2, 12LL, v3);
  v8 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  *(_QWORD *)(a1 + 112) = v7;
  if ( v8 )
  {
    RtlImageNtHeaderEx(3, *(_QWORD *)(v2 + 48), 0LL, &v22);
    Config = LdrImageDirectoryEntryToLoadConfigEx(*(_QWORD *)(v2 + 48));
    v10 = v22;
    if ( Config )
    {
      if ( *(_DWORD *)Config >= 0x94u
        && (*(_WORD *)(v22 + 94) & 0x4000) != 0
        && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
      {
        v11 = *(_QWORD **)(Config + 112);
        *(_QWORD *)(a1 + 160) = v11;
        if ( v11 )
          *(_QWORD *)(a1 + 152) = *v11;
      }
    }
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v16 = *(_DWORD *)(v10 + 144);
      v17 = (unsigned int *)(v10 + *(unsigned __int16 *)(v10 + 20) + 24LL);
      if ( v16 )
      {
        while ( v4 < *(unsigned __int16 *)(v10 + 6) )
        {
          v18 = v17[3];
          if ( v16 >= (unsigned int)v18 && v16 < (unsigned int)v18 + v17[4] )
          {
            *(_QWORD *)(a1 + 112) = *(_QWORD *)(v2 + 48) + v18;
            v19 = v17[2];
            *(_QWORD *)(a1 + 120) = v19;
            if ( !v19 )
              *(_QWORD *)(a1 + 120) = v17[4];
            break;
          }
          ++v4;
          v17 += 10;
        }
      }
    }
    v12 = *(_QWORD **)(a1 + 112);
    if ( v12 )
    {
      if ( *(_QWORD *)(a1 + 120) )
      {
        v21 = *(_QWORD *)(a1 + 120);
        v20 = v12;
        result = ZwProtectVirtualMemory(-1LL, &v20, &v21, 4LL, a1 + 144);
        if ( (int)result < 0 )
          return result;
        v14 = v20;
        v15 = (unsigned __int64)v20 + v21;
        do
        {
          *v14 = *v14;
          v14 += 512;
        }
        while ( (unsigned __int64)v14 < v15 );
      }
    }
  }
  return 0LL;
}
