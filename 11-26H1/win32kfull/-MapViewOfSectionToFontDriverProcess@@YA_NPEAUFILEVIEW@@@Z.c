/*
 * XREFs of ?MapViewOfSectionToFontDriverProcess@@YA_NPEAUFILEVIEW@@@Z @ 0x1400CFDC8
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall MapViewOfSectionToFontDriverProcess(struct FILEVIEW *a1)
{
  __int64 v1; // rdx
  char v3; // di
  int v4; // edx
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v6 = 0LL;
  v10 = 6;
  v3 = Gre::MapViewOfSectionObj::Map(&v6, v1, 5LL, 0LL, &v11);
  if ( v3 )
  {
    v4 = 6;
    *((_QWORD *)a1 + 9) = v6;
    *((_QWORD *)a1 + 2) = v8;
    v8 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    v10 = 6;
  }
  else
  {
    v4 = v10;
  }
  if ( v4 != 6 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v6);
  return v3;
}
