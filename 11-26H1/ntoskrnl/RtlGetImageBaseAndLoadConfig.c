/*
 * XREFs of RtlGetImageBaseAndLoadConfig @ 0x14043BE50
 * Callers:
 *     KiVerifyContextIpForUserCet @ 0x1403D7500 (KiVerifyContextIpForUserCet.c)
 *     RtlVerifyUserUnwindTarget @ 0x140A902C8 (RtlVerifyUserUnwindTarget.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x14043BF20 (RtlpLookupUserFunctionTableInverted.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14077DECC (LdrImageDirectoryEntryToLoadConfig.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     MmGetImageInformation @ 0x140942C3C (MmGetImageInformation.c)
 */

__int64 __fastcall RtlGetImageBaseAndLoadConfig(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 Config; // rbx
  volatile void *v7; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  volatile void *Address[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  char v12; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)Address = 0LL;
  v11 = 0LL;
  Config = 0LL;
  v9[0] = 0LL;
  if ( !RtlpLookupUserFunctionTableInverted(a1, Address) )
  {
    if ( (int)MmGetImageInformation(a1, &Address[1], v9, &v12) < 0 )
    {
      v7 = 0LL;
      goto LABEL_3;
    }
    if ( v9[0] >= 0xFFFFFFFFuLL )
      return 3221225621LL;
  }
  v7 = Address[1];
LABEL_3:
  if ( v7 )
  {
    ProbeForRead(v7, 0x40uLL, 1u);
    Config = LdrImageDirectoryEntryToLoadConfig(v7);
    v9[1] = Config;
  }
  *a2 = v7;
  *a3 = Config;
  return 0LL;
}
