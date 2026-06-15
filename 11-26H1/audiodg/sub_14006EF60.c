/*
 * XREFs of sub_14006EF60 @ 0x14006EF60
 * Callers:
 *     sub_14006ED80 @ 0x14006ED80 (sub_14006ED80.c)
 *     sub_14006EE30 @ 0x14006EE30 (sub_14006EE30.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14006EF60(HMODULE hModule, HRSRC hResInfo, char a3)
{
  HGLOBAL Resource; // rax
  unsigned __int64 v7; // rbx
  char *v8; // rcx
  int v9; // edi

  Resource = LoadResource(hModule, hResInfo);
  if ( Resource )
  {
    v7 = (unsigned __int64)LockResource(Resource);
    if ( v7 )
    {
      v8 = (char *)(v7 + SizeofResource(hModule, hResInfo));
      v9 = a3 & 0xF;
      if ( v9 )
      {
        while ( v7 < (unsigned __int64)v8 )
        {
          v7 += 2LL * *(unsigned __int16 *)v7 + 2;
          if ( !--v9 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        if ( v7 < (unsigned __int64)v8 )
          return v7 & -(__int64)(*(_WORD *)v7 != 0);
      }
    }
  }
  return 0LL;
}
