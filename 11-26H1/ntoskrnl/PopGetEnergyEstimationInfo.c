/*
 * XREFs of PopGetEnergyEstimationInfo @ 0x140603BC4
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetEnergyEstimationInfo(_DWORD *a1)
{
  _DWORD *IptSaveArea; // r8
  unsigned int v2; // edx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  char *v6; // r10
  _DWORD *v7; // r8
  __int64 v8; // rcx

  IptSaveArea = stru_140F12EA0.IptSaveArea;
  v2 = 0;
  if ( stru_140F12EA0.IptSaveArea )
  {
    if ( (unsigned int)(16 * *(_DWORD *)stru_140F12EA0.IptSaveArea + 4) <= 0x24 )
    {
      *a1 = *(_DWORD *)stru_140F12EA0.IptSaveArea;
      v4 = 0;
      if ( *IptSaveArea )
      {
        do
        {
          v5 = (__int64)&IptSaveArea[14 * v4 + 2];
          v6 = (char *)a1 + 16LL * v4 - v5;
          v7 = (_DWORD *)(v5 + 40);
          v8 = 4LL;
          do
          {
            *(_DWORD *)((char *)v7 + (_QWORD)v6 - 36) = *v7;
            ++v7;
            --v8;
          }
          while ( v8 );
          IptSaveArea = stru_140F12EA0.IptSaveArea;
          ++v4;
        }
        while ( v4 < *(_DWORD *)stru_140F12EA0.IptSaveArea );
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
