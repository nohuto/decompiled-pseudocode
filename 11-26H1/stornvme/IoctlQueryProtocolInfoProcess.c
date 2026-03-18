/*
 * XREFs of IoctlQueryProtocolInfoProcess @ 0x14001BF38
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     QueryProtocolInfoFeatureData @ 0x140021090 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140021554 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 */

__int64 __fastcall IoctlQueryProtocolInfoProcess(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rdx
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // r11
  int v8; // eax
  unsigned __int64 v9; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _DWORD *v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v16);
  if ( *v16 >= 0x4Cu )
  {
    v5 = (unsigned int)SrbDataBuffer[13];
    v6 = (unsigned int)*v16;
    v7 = (unsigned int)SrbDataBuffer[14];
    if ( v6 >= v7 + v5 + 36 )
    {
      if ( (_DWORD)v5 && (((_BYTE)v5 + 36) & 7) != 0 || SrbDataBuffer[9] != 3 || (v8 = SrbDataBuffer[10]) == 0 )
      {
LABEL_24:
        *(_BYTE *)(v3 + 3) = 6;
        return 3238002694LL;
      }
      if ( v7 + 36 <= v6 )
      {
        v9 = v6 - (v7 + 36);
        if ( (!(_DWORD)v7 || v5 >= v9) && !(v8 == 4 || v8 == 5 ? v9 < 0x40 : v9 < 0x28) )
        {
          v11 = v8 - 1;
          if ( !v11 )
            return QueryProtocolInfoIdentifyData(v4, v3);
          v12 = v11 - 1;
          if ( !v12 )
            return QueryProtocolInfoLogPageData(v4, v3);
          v13 = v12 - 1;
          if ( !v13 )
            return QueryProtocolInfoFeatureData(v4, v3);
          v14 = v13 - 1;
          if ( !v14 )
            return QueryProtocolInfoLogPageData(v4, v3);
          if ( v14 == 1 )
            return QueryProtocolInfoFeatureData(v4, v3);
          goto LABEL_24;
        }
      }
    }
  }
  *(_BYTE *)(v3 + 3) = 21;
  return 3238002694LL;
}
