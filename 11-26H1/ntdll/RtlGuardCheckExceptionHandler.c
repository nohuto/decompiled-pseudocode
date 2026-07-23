/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x180078420
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     RcFrameConsolidation @ 0x1801270C0 (RcFrameConsolidation.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     RtlFailFast2 @ 0x1801275C0 (RtlFailFast2.c)
 *     bsearch_s @ 0x180129E70 (bsearch_s.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(PVOID BaseAddress, char a2, char *a3)
{
  char v6; // si
  PVOID v7; // rbp
  PVOID v8; // rdx
  rsize_t v10; // r8
  int Key; // [rsp+30h] [rbp-48h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-40h] BYREF
  PVOID BaseOfImage[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  ULONG Size; // [rsp+98h] [rbp+20h] BYREF

  if ( !LdrSystemDllInitBlock.CfgBitMap || (LdrSystemDllInitBlock.Flags & 1) != 0 )
  {
    if ( a3 )
      *a3 = 1;
  }
  else
  {
    v6 = 0;
    v14 = 0LL;
    *(_OWORD *)BaseOfImage = 0LL;
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_1801DF450 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_1801DF450 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801DF460 )
    {
      RtlpxLookupFunctionTable(BaseAddress, (char **)BaseOfImage);
    }
    else
    {
      *(_OWORD *)BaseOfImage = xmmword_1801DF450;
    }
    v7 = BaseOfImage[1];
    if ( BaseOfImage[1]
      && (Size = 0,
          OutHeaders = 0LL,
          RtlImageNtHeaderEx(1u, BaseOfImage[1], 0LL, &OutHeaders),
          (v8 = RtlImageDirectoryEntryToData(v7, 1u, 0xAu, &Size)) != 0LL)
      && Size
      && Size == *(_DWORD *)v8
      && OutHeaders->FileHeader.Machine == 0x8664
      && *(_DWORD *)v8 >= 0x118u
      && (*((_DWORD *)v8 + 36) & 0x400000) != 0
      && *((_QWORD *)v8 + 33) > (unsigned __int64)v7
      && ((Key = (_DWORD)BaseAddress - (_DWORD)v7, (v10 = *((_QWORD *)v8 + 34)) == 0)
       || !bsearch_s(
             &Key,
             *((const void **)v8 + 33),
             v10,
             (unsigned int)((*((_DWORD *)v8 + 36) >> 28) + 4),
             RtlpTargetCompare,
             0LL)) )
    {
      if ( !a2 )
        RtlFailFast2(38LL, BaseAddress);
    }
    else
    {
      v6 = 1;
    }
    if ( a3 )
      *a3 = v6;
  }
  return 0LL;
}
