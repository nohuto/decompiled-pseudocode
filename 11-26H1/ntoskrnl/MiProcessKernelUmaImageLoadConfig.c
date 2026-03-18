/*
 * XREFs of MiProcessKernelUmaImageLoadConfig @ 0x140B059BC
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140B0594C (MiProcessLoadConfigForDriver.c)
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14038B930 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140772CFC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiProcessKernelUmaImageLoadConfig(__int64 a1)
{
  __int64 (__fastcall **v1)(); // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall **)())&MiKscpUmaKasanFunctions;
  v3 = *(_QWORD *)(a1 + 112);
  if ( (MiFlags & 0x2000000000LL) == 0 )
    v1 = &MiKscpUmaFunctions;
  if ( v3 )
  {
    v4 = MiSectionControlArea(v3);
    v5 = v4 + 128;
    if ( !*(_QWORD *)(v4 + 144) )
      return 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 0xAu, &v12);
  if ( !v6 )
    return 0LL;
  if ( *(_DWORD *)v6 < 0x148u )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 320);
  if ( !v7 )
    return 0LL;
  if ( !v5 || (unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v6 + 320), 336) )
  {
    v8 = 2LL;
    v9 = (_OWORD *)v7;
    do
    {
      *v9 = *(_OWORD *)v1;
      v9[1] = *((_OWORD *)v1 + 1);
      v9[2] = *((_OWORD *)v1 + 2);
      v9[3] = *((_OWORD *)v1 + 3);
      v9[4] = *((_OWORD *)v1 + 4);
      v9[5] = *((_OWORD *)v1 + 5);
      v9[6] = *((_OWORD *)v1 + 6);
      v9 += 8;
      v10 = *((_OWORD *)v1 + 7);
      v1 += 16;
      *(v9 - 1) = v10;
      --v8;
    }
    while ( v8 );
    *v9 = *(_OWORD *)v1;
    v9[1] = *((_OWORD *)v1 + 1);
    v9[2] = *((_OWORD *)v1 + 2);
    v9[3] = *((_OWORD *)v1 + 3);
    v9[4] = *((_OWORD *)v1 + 4);
    if ( v5 )
      MiSetImageProtection(a1, v7, 336);
    return 0LL;
  }
  MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig", a1);
  result = 3221225595LL;
  *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 128;
  return result;
}
