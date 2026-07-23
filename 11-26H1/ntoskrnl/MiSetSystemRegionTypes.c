/*
 * XREFs of MiSetSystemRegionTypes @ 0x140CFFD84
 * Callers:
 *     MiInitializeSystemVa @ 0x140D10EF8 (MiInitializeSystemVa.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiConvertAssignedRegionToVaType @ 0x140CFF7D4 (MiConvertAssignedRegionToVaType.c)
 */

unsigned __int64 MiSetSystemRegionTypes()
{
  unsigned int v0; // edi
  __int64 *v1; // rbx
  char v2; // al
  unsigned int v3; // edx
  size_t v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned __int64 result; // rax

  v0 = 0;
  v1 = qword_140E37CF8;
  do
  {
    if ( *(v1 - 1) )
    {
      v2 = MiConvertAssignedRegionToVaType(v0);
      v4 = (unsigned __int64)*v1 >> 39;
      if ( v4 )
      {
        v5 = v3;
        v6 = byte_140E37BF0;
        LOBYTE(v6) = v2;
        memset_0(&byte_140E37BF0[v5], (int)v6, v4);
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 0x12 );
  result = (((unsigned __int64)&MiState >> 39) & 0x1FF) - 256;
  *((_BYTE *)&MiState + (unsigned int)result + 46320) = 11;
  byte_140E37CEF = 9;
  return result;
}
