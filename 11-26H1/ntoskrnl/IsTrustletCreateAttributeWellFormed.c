/*
 * XREFs of IsTrustletCreateAttributeWellFormed @ 0x1405327B4
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsTrustletCreateAttributeWellFormed(_QWORD *a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r8
  unsigned int v4; // edx
  unsigned int v5; // r11d
  unsigned int v6; // eax
  char (**v7)[4]; // rdi
  unsigned int v8; // r10d

  v2 = 0;
  if ( a2 != 8 )
  {
    if ( (a2 & 7) != 0 || (unsigned __int64)(a2 - 24) > 0x70 )
      return 0;
    v3 = 0LL;
    v4 = (unsigned int)(a2 - 8) >> 3;
    v5 = 0;
    while ( (unsigned int)v3 < v4 )
    {
      v6 = HIDWORD(a1[v3 + 1]);
      if ( (_BYTE)v6 || v6 >= 0x100 || (a1[v3 + 1] & 0xF0000000LL) != 0 )
        return 0;
      v7 = `IsTrustletCreateAttributeWellFormed'::`2'::KnownAttributeTypes;
      v8 = 0;
      while ( 1 )
      {
        if ( BYTE2(a1[v3 + 1]) == 20 )
          v2 = 1;
        if ( LODWORD(a1[v3 + 1]) == *(_DWORD *)*v7 )
          break;
        ++v8;
        ++v7;
        if ( v8 >= 5 )
        {
          if ( v8 == 5 )
            return 0;
          break;
        }
      }
      ++v5;
      v3 = (unsigned int)BYTE1(a1[v3 + 1]) + (_DWORD)v3 + 1;
    }
    if ( v5 > 4 || (_DWORD)v3 != v4 )
      return 0;
    if ( !v2 )
      return *a1 != 0LL;
  }
  return 1;
}
