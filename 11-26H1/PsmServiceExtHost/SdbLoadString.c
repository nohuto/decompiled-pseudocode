/*
 * XREFs of SdbLoadString @ 0x18009062C
 * Callers:
 *     SdbpGetRCIDStringCopy @ 0x180090DB0 (SdbpGetRCIDStringCopy.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbLoadString(HMODULE hModule, unsigned __int16 a2, unsigned __int16 **a3)
{
  __int64 v3; // rbx
  char v5; // di
  HRSRC ResourceW; // rax
  HGLOBAL Resource; // rax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rcx
  int i; // edi
  unsigned __int16 *v13; // rcx

  LODWORD(v3) = 0;
  v5 = a2;
  if ( a3 )
  {
    ResourceW = FindResourceW(hModule, (LPCWSTR)((a2 >> 4) + 1), (LPCWSTR)6);
    if ( ResourceW )
    {
      Resource = LoadResource(hModule, ResourceW);
      if ( Resource )
      {
        v10 = (unsigned __int16 *)LockResource(Resource);
        if ( v10 )
        {
          v3 = *v10;
          v11 = v10 + 1;
          for ( i = v5 & 0xF; i; --i )
          {
            v13 = &v11[v3];
            v3 = *v13;
            v11 = v13 + 1;
          }
          *a3 = v11;
        }
      }
    }
    return (unsigned int)v3;
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbLoadString", 144LL, "LoadStringOrError: lpBuffer == NULL");
    return 0LL;
  }
}
