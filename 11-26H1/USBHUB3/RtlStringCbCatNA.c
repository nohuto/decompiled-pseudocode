/*
 * XREFs of RtlStringCbCatNA @ 0x140040E24
 * Callers:
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008DA78 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E290 (HUBACPI_EvaluateDsmMethod.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNA(NTSTRSAFE_PSTR pszDest, size_t cbDest, STRSAFE_PCNZCH pszSrc, size_t cbToAppend)
{
  __int64 v5; // r10
  NTSTRSAFE_PSTR v6; // rax
  __int64 v7; // r8
  NTSTATUS result; // eax
  char *v9; // rcx
  __int64 v10; // rdx
  const char *v11; // r11
  char v12; // al
  char *v13; // rax

  v5 = 256LL;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = (256 - v5) & -(__int64)(v5 != 0);
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    if ( cbToAppend <= 0x7FFFFFFE )
    {
      v9 = &pszDest[v7];
      v10 = 256 - v7;
      if ( 256 != v7 )
      {
        v11 = (const char *)(pszSrc - v9);
        do
        {
          if ( !cbToAppend )
            break;
          v12 = v9[(_QWORD)v11];
          if ( !v12 )
            break;
          *v9 = v12;
          --cbToAppend;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      v13 = v9 - 1;
      if ( v10 )
        v13 = v9;
      *v13 = 0;
      return v10 == 0 ? 0x80000005 : 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
