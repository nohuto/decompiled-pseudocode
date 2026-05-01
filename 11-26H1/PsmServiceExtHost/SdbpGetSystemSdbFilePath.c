/*
 * XREFs of SdbpGetSystemSdbFilePath @ 0x180091F84
 * Callers:
 *     SdbGetPathCustomSdb @ 0x180091150 (SdbGetPathCustomSdb.c)
 *     SdbGetPathResourceDll @ 0x180091220 (SdbGetPathResourceDll.c)
 *     SdbGetPathSystemSdb @ 0x180091254 (SdbGetPathSystemSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 i; // rax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(_WORD *, __int64, __int64, __int64); // rax
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // eax

  *a1 = 0;
  if ( a3 && a3 < 13 )
  {
    v7 = 1LL;
    for ( i = 32LL; ; i += 32LL )
    {
      if ( i >= 0x1A0 )
        goto LABEL_15;
      if ( *(_DWORD *)((char *)&unk_1800B5150 + i) == a3 )
        break;
      ++v7;
    }
    v9 = 32 * v7;
    if ( !(_UNKNOWN *)((char *)&unk_1800B5150 + v9) )
    {
LABEL_15:
      AslLogCallPrintf(
        1LL,
        "SdbpGetSystemSdbFilePath",
        1373LL,
        "SdbFileDetails missing array item for SdbFileType: %d",
        a3);
      return (unsigned int)-1073741275;
    }
    v10 = *(__int64 (__fastcall **)(_WORD *, __int64, __int64, __int64))((char *)&unk_1800B5150 + v9 + 16);
    if ( v10 )
    {
      v12 = a5;
      if ( !a5 )
        v12 = *(_QWORD *)((char *)&unk_1800B5150 + v9 + 8);
      v13 = v10(a1, 260LL, v12, a6);
      v11 = v13;
      if ( v13 >= 0 )
        return 0;
      else
        AslLogCallPrintf(
          1LL,
          "SdbpGetSystemSdbFilePath",
          1397LL,
          "GetPathFunction (for SdbFileType %d, IsLtRs3: %d) failed [%x]",
          a3,
          0,
          v13);
    }
    else
    {
      AslLogCallPrintf(1LL, "SdbpGetSystemSdbFilePath", 1387LL, "SdbFileDetails missing function pointer for path.");
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return v11;
}
