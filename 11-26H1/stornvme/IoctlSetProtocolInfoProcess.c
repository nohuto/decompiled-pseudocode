/*
 * XREFs of IoctlSetProtocolInfoProcess @ 0x14001C474
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     SetProtocolInfoFeatureData @ 0x140022C1C (SetProtocolInfoFeatureData.c)
 */

__int64 __fastcall IoctlSetProtocolInfoProcess(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  int v8; // eax
  unsigned __int64 v9; // rcx
  _DWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v11);
  if ( *v11 >= 0x64u )
  {
    v5 = (unsigned int)SrbDataBuffer[13];
    v6 = (unsigned int)*v11;
    v7 = (unsigned int)SrbDataBuffer[14];
    if ( v6 >= v7 + v5 + 36 )
    {
      if ( (_DWORD)v5 && (((_BYTE)v5 + 36) & 7) != 0 )
        goto LABEL_15;
      if ( SrbDataBuffer[9] != 3 )
        goto LABEL_15;
      v8 = SrbDataBuffer[10];
      if ( !v8 )
        goto LABEL_15;
      if ( v7 + 36 <= v6 )
      {
        v9 = v6 - (v7 + 36);
        if ( !(_DWORD)v7 || v5 >= v9 )
        {
          if ( v8 == 3 || v8 == 5 )
          {
            if ( v9 >= 0x40 )
              return SetProtocolInfoFeatureData(a1, v4);
            goto LABEL_2;
          }
LABEL_15:
          *(_BYTE *)(v4 + 3) = 6;
          return 3238002694LL;
        }
      }
    }
  }
LABEL_2:
  *(_BYTE *)(v4 + 3) = 21;
  return 3238002694LL;
}
