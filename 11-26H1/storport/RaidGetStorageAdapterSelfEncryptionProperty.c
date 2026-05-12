/*
 * XREFs of RaidGetStorageAdapterSelfEncryptionProperty @ 0x14006CC88
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401B69C8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidGetStorageAdapterSelfEncryptionProperty(__int64 a1, _DWORD *a2, size_t *a3)
{
  size_t v6; // r8
  unsigned __int64 v7; // rax
  char v9; // r14
  int TcgProperties; // eax
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *a3;
  memset(v11, 0, sizeof(v11));
  memset_0(a2, 0, v6);
  v7 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return 3221225507LL;
  }
  if ( v7 >= 0xC )
  {
    if ( v7 >= 0x10 )
    {
      v9 = 1;
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
        return 2147483665LL;
      TcgProperties = RaidGetTcgProperties(a1, v11);
      *a2 = 16;
      a2[1] = 16;
      if ( TcgProperties >= 0 && **(_DWORD **)(a1 + 6128) == 512 )
        a2[3] = 2;
      else
        v9 = 0;
      *((_BYTE *)a2 + 8) = v9;
      *a3 = 16LL;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
    }
    else
    {
      *a2 = 12;
      a2[1] = 12;
      *((_BYTE *)a2 + 8) = 0;
      *a3 = 12LL;
    }
  }
  else
  {
    *a2 = 16;
    a2[1] = 16;
    *a3 = 8LL;
  }
  return 0LL;
}
