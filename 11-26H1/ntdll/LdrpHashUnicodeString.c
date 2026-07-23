/*
 * XREFs of LdrpHashUnicodeString @ 0x180079960
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpMapDllFullPath @ 0x18007BE20 (LdrpMapDllFullPath.c)
 *     LdrpInsertDataTableEntry @ 0x180117D60 (LdrpInsertDataTableEntry.c)
 *     LdrpAddRedirectedFunction @ 0x18015DDB0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  unsigned int v1; // r9d
  int v2; // r10d
  unsigned __int16 *i; // r11
  unsigned __int64 v4; // rax

  v1 = 0;
  if ( !a1 )
    return 0x80000000LL;
  v2 = *a1 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)a1 + 1); v2; v1 = (unsigned __int16)v4 + 65599 * v1 )
  {
    v4 = *i++;
    --v2;
    if ( (unsigned int)v4 >= 0x61 )
    {
      if ( (unsigned int)v4 > 0x7A )
      {
        if ( qword_1801C5038 )
        {
          if ( (unsigned __int16)v4 >= 0xC0u )
            LOWORD(v4) = *(_WORD *)(qword_1801C5038
                                  + 2
                                  * ((v4 & 0xF)
                                   + *(unsigned __int16 *)(qword_1801C5038
                                                         + 2LL
                                                         * (((unsigned __int8)v4 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                              + 2 * (v4 >> 8))))))
                       + v4;
        }
      }
      else
      {
        LOWORD(v4) = v4 - 32;
      }
    }
  }
  if ( v1 )
    return v1;
  else
    return 0x80000000LL;
}
