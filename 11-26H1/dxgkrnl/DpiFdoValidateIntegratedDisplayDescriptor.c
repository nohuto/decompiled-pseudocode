/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x14024948C
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14006611C (DpiQueryIntegratedDescriptorWrapper.c)
 * Callees:
 *     DpiIsValidEdid @ 0x14006D9AC (DpiIsValidEdid.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1403DA2C4 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  __int64 v5; // rbx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  char v10; // al

  v3 = *(unsigned int **)(a2 + 104);
  v5 = *(unsigned int *)(a2 + 24);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 4032) + 3044LL);
  if ( *v3 < 0x10 )
  {
    v7 = v3[16];
    if ( v7 < 0x1000 )
    {
      if ( (v6 != 2300 || *(_DWORD *)(a1 + 1124) != 1297040209)
        && (int)DpiFdoValidateDxgkColorimetry(v3 + 17, (unsigned int)v5) < 0 )
      {
        return 3221225485LL;
      }
      v8 = *((_BYTE *)v3 + 120);
      if ( !v8 || v8 >= 5u )
      {
        WdLogSingleEntry3(2LL, *((unsigned __int8 *)v3 + 120), v5, 3LL);
        WdLogGlobalForLineNumber = 847;
        return 3221225485LL;
      }
      v9 = *((_BYTE *)v3 + 121);
      if ( !v9 || v9 >= 6u )
      {
        WdLogSingleEntry3(2LL, *((unsigned __int8 *)v3 + 121), v5, 4LL);
        WdLogGlobalForLineNumber = 857;
        return 3221225485LL;
      }
      if ( *((_BYTE *)v3 + 122) <= 0x10u )
      {
        v10 = *((_BYTE *)v3 + 123);
        if ( v10 == 1 )
        {
          if ( *(_WORD *)(a2 + 94) < 0x80u || !DpiIsValidEdid(*(const __m128i **)(a2 + 112)) )
          {
            WdLogSingleEntry2(2LL, v5, 8LL);
            WdLogGlobalForLineNumber = 889;
            return 3221225485LL;
          }
        }
        else if ( v10 != 2 )
        {
          WdLogSingleEntry3(2LL, *((unsigned __int8 *)v3 + 123), v5, 6LL);
          WdLogGlobalForLineNumber = 902;
          return 3221225485LL;
        }
        if ( (v3[16] & 0x200) == 0 || *(_BYTE *)(a1 + 2719) || *(_BYTE *)(a1 + 2716) )
          return 0LL;
        WdLogSingleEntry2(2LL, v5, 10LL);
        WdLogGlobalForLineNumber = 912;
      }
      else
      {
        WdLogSingleEntry4(2LL, *((unsigned __int8 *)v3 + 122), 16LL, v5, 5LL);
        WdLogGlobalForLineNumber = 872;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, (unsigned __int64)v7 >> 12, v5, 2LL);
      WdLogGlobalForLineNumber = 807;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, (unsigned __int64)*v3 >> 4, (unsigned int)v5, 1LL);
    WdLogGlobalForLineNumber = 798;
  }
  return 3221225485LL;
}
