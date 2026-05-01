/*
 * XREFs of ?GetBlockedItemInfo@StartupApproval@StartupDB@@QEAAJPEBGPEAUBLOCKEDITEMINFO@2@@Z @ 0x180560680
 * Callers:
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805608A0 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StartupDB::StartupApproval::GetBlockedItemInfo(
        HKEY *this,
        const unsigned __int16 *a2,
        struct StartupDB::BLOCKEDITEMINFO *pvData)
{
  HKEY v6; // rcx
  unsigned int ValueW; // ebx
  _DWORD *v8; // rsi
  DWORD pcbData; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)pvData = 0LL;
  *((_DWORD *)pvData + 2) = 0;
  v6 = *this;
  if ( !v6 )
  {
    *(_DWORD *)pvData = 2;
    return 21;
  }
  if ( v6 == (HKEY)1 )
  {
    if ( *((_DWORD *)this + 2) != 1 )
      return 2;
    *(_DWORD *)pvData = 2;
    return 0;
  }
  if ( v6 == (HKEY)2 )
  {
    *(_DWORD *)pvData = 3;
    return 0;
  }
  pcbData = 12;
  ValueW = RegGetValueW(v6, 0LL, a2, 0x20000008u, 0LL, pvData, &pcbData);
  if ( ValueW == 234 )
  {
    v8 = LocalAlloc(0, pcbData);
    if ( !v8 )
    {
      ValueW = 14;
LABEL_18:
      *(_DWORD *)pvData = 2;
      return ValueW;
    }
    ValueW = RegGetValueW(*this, 0LL, a2, 0x20000008u, 0LL, v8, &pcbData);
    if ( !ValueW )
    {
      *(_QWORD *)pvData = *(_QWORD *)v8;
      *((_DWORD *)pvData + 2) = v8[2];
    }
    LocalFree(v8);
  }
  if ( ValueW && ValueW != 2 && ValueW != 1630 )
    goto LABEL_18;
  return ValueW;
}
