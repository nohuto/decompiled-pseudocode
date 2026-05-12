/*
 * XREFs of RaFixupIds @ 0x1401BE268
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1400A7264 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetDeviceId @ 0x1400A7910 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetHardwareIds @ 0x1400A7A78 (RaidUnitGetHardwareIds.c)
 *     NvmeNamespaceGetCompatibleIds @ 0x1401061A8 (NvmeNamespaceGetCompatibleIds.c)
 *     NvmeNamespaceGetDeviceId @ 0x140106390 (NvmeNamespaceGetDeviceId.c)
 *     NvmeNamespaceGetDeviceIdEx @ 0x140106478 (NvmeNamespaceGetDeviceIdEx.c)
 *     NvmeNamespaceGetHardwareIds @ 0x140106680 (NvmeNamespaceGetHardwareIds.c)
 *     NvmeNamespaceGetHardwareIdsEx @ 0x140106AAC (NvmeNamespaceGetHardwareIdsEx.c)
 *     NvmeNamespaceGetInstanceId @ 0x140106D58 (NvmeNamespaceGetInstanceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaFixupIds(_WORD *a1, char a2, unsigned int a3)
{
  _WORD *v3; // r9
  unsigned int i; // ecx
  int v5; // edx
  __int64 result; // rax
  unsigned int v7; // r10d
  unsigned int v8; // edx
  _WORD *v9; // r8
  int v10; // ecx

  v3 = a1;
  if ( a2 )
  {
    v7 = a3 - 1;
    v8 = 0;
    if ( a3 != 1 )
    {
      v9 = a1;
      do
      {
        v10 = (unsigned __int16)*v9;
        if ( (_WORD)v10 )
        {
          result = (unsigned int)(v10 - 33);
          if ( (unsigned __int16)(v10 - 33) > 0x5Eu || (_WORD)v10 == 44 )
            *v9 = 95;
        }
        else
        {
          result = v8 + 1;
          if ( !v3[result] )
            return result;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < v7 );
    }
  }
  else
  {
    for ( i = 0; i < a3; ++v3 )
    {
      v5 = (unsigned __int16)*v3;
      if ( !(_WORD)v5 )
        break;
      result = (unsigned int)(v5 - 33);
      if ( (unsigned __int16)(v5 - 33) > 0x5Eu || (_WORD)v5 == 44 )
        *v3 = 95;
      ++i;
    }
  }
  return result;
}
