/*
 * XREFs of FsRtlpCheckSharingAgainstOplockOwner @ 0x140919890
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x14091A710 (IoCheckLinkShareAccess.c)
 */

__int64 __fastcall FsRtlpCheckSharingAgainstOplockOwner(__int64 a1, _BYTE *a2, int a3, unsigned __int16 a4)
{
  __int64 v5; // r8
  __int64 v6; // r8
  bool v7; // zf
  BOOL v8; // eax
  BOOL v9; // eax
  BOOL v10; // eax
  BOOL v11; // eax
  _DWORD v13[10]; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 184);
  if ( *(_BYTE *)v5 )
    return 3221225485LL;
  v6 = *(_QWORD *)(v5 + 48);
  v7 = a2[75] == 0;
  v13[1] = a2[74] != 0;
  v8 = !v7;
  v7 = a2[76] == 0;
  v13[2] = v8;
  v9 = !v7;
  v13[0] = 1;
  v7 = a2[77] == 0;
  v13[3] = v9;
  v10 = !v7;
  v7 = a2[78] == 0;
  v13[4] = v10;
  v11 = !v7;
  v7 = a2[79] == 0;
  v13[5] = v11;
  v13[6] = !v7;
  return IoCheckLinkShareAccess(a3, a4, v6, (unsigned int)v13, 0LL, 2);
}
