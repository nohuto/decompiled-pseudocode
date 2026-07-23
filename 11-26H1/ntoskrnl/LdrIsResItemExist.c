/*
 * XREFs of LdrIsResItemExist @ 0x1403DF838
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1403DF8BC (LdrpGetRcConfig.c)
 *     LdrRscIsTypeExist @ 0x1403E0840 (LdrRscIsTypeExist.c)
 */

__int64 __fastcall LdrIsResItemExist(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 RcConfig; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  LOBYTE(a3) = 1;
  RcConfig = LdrpGetRcConfig(a1, a2, a3);
  v6 = RcConfig;
  if ( RcConfig )
  {
    if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v5, &v9) < 0 )
    {
      return 393216;
    }
    else
    {
      v7 = v9;
      if ( (*(_DWORD *)(v6 + 20) & 0x100) != 0 )
        v7 = v9 | 0x100000;
      if ( (*(_DWORD *)(v6 + 16) & 0x10) != 0 )
        v7 |= 0x200000u;
    }
  }
  else
  {
    return 0x80000;
  }
  return v7;
}
