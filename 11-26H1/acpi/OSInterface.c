/*
 * XREFs of OSInterface @ 0x140016870
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     _stricmp_0 @ 0x140055DF7 (_stricmp_0.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OSInterface(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // esi
  __int64 v6; // rbx
  const char *v7; // r14
  bool v9; // al
  bool v10; // cf
  char *Str1[24]; // [rsp+28h] [rbp-89h]

  v3 = *(_QWORD *)(a2 + 80);
  Str1[0] = "Windows 2000";
  Str1[1] = "Windows 2001";
  Str1[2] = "Windows 2001 SP1";
  Str1[3] = "Windows 2001.1";
  Str1[4] = "Windows 2001 SP2";
  Str1[5] = "Windows 2001.1 SP1";
  Str1[6] = "Windows 2006";
  Str1[7] = "Windows 2006 SP1";
  Str1[8] = "Windows 2006.1";
  Str1[9] = "Windows 2009";
  Str1[10] = "Windows 2012";
  Str1[11] = "Windows 2013";
  Str1[12] = "Windows 2015";
  Str1[13] = "Windows 2016";
  Str1[14] = "Windows 2017";
  Str1[15] = "Windows 2017.2";
  Str1[16] = "Windows 2018";
  Str1[17] = "Windows 2018.2";
  Str1[18] = "Windows 2019";
  Str1[19] = "Windows 2020";
  Str1[20] = "Windows 2021";
  Str1[21] = "Windows 2022";
  Str1[22] = "Windows 2025H2";
  Str1[23] = "Windows 2026H1";
  v5 = ValidateArgTypes(a1, v3, 0, "A");
  if ( !v5 )
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, "Z");
    if ( !v5 )
    {
      v6 = 0LL;
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      v7 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) + 32LL);
      while ( (unsigned int)v6 < 0x18 )
      {
        if ( !stricmp_0(Str1[v6], v7) )
        {
          v9 = IsCompatableDSDTRevision();
          v5 = 0;
          v10 = gdwHighestOSVerQueried < (unsigned int)v6;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v9 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
          if ( v10 )
            gdwHighestOSVerQueried = v6;
          break;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      if ( ghCheckOsiString && (int)ghCheckOsiString(v7) >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                                 + 0xFFFFFFFF;
        return 0;
      }
    }
  }
  return v5;
}
