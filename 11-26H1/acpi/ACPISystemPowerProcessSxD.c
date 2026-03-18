/*
 * XREFs of ACPISystemPowerProcessSxD @ 0x1400BA8F4
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x14004EBB0 (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerGetSxD @ 0x1400CD800 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerProcessSxD(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  signed int v5; // edi
  _DWORD *v6; // rbx
  int v7; // eax
  int SxD; // eax
  char v9; // r10
  const char *v10; // r8
  const char *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  *a3 = 0;
  v5 = 1;
  v6 = (_DWORD *)(a2 + 4);
  do
  {
    v7 = AcpiSupportedSystemStates;
    if ( _bittest(&v7, v5) )
    {
      SxD = ACPISystemPowerGetSxD(a1, (unsigned int)v5, &v15);
      if ( SxD != -1073741772 )
      {
        if ( SxD >= 0 )
        {
          v13 = v15;
          *a3 = 1;
          if ( v13 > *v6 )
            *v6 = v13;
        }
        else
        {
          v9 = 0;
          v10 = byte_140075A82;
          v11 = byte_140075A82;
          if ( a1 )
          {
            v12 = a1[1];
            v9 = (char)a1;
            if ( (v12 & 0x200000000000LL) != 0 )
            {
              v10 = (const char *)a1[76];
              if ( (v12 & 0x400000000000LL) != 0 )
                v11 = (const char *)a1[77];
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x11u,
              (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
              SxD,
              v9,
              v10,
              v11);
        }
      }
    }
    else
    {
      *v6 = 0;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 7 );
  return 0LL;
}
