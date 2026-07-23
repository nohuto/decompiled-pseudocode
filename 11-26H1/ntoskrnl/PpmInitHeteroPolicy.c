/*
 * XREFs of PpmInitHeteroPolicy @ 0x140CDAA34
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline @ 0x14060F418 (Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  __int64 v1; // r9
  unsigned int v2; // r8d
  char v3; // cl
  char v4; // cl
  char v5; // cl
  __int64 result; // rax

  v0 = (char *)&unk_140F0B958;
  v1 = 3LL;
  do
  {
    v2 = 0;
    do
    {
      v3 = v2 != 0 ? 80 : 90;
      *(v0 - 712) = v3;
      *v0 = v3;
      v4 = -(v2++ != 0);
      v5 = (v4 & 0x14) + 30;
      *(v0 - 904) = v5;
      *(v0 - 192) = v5;
      ++v0;
    }
    while ( v2 < 0x40 );
    --v1;
  }
  while ( v1 );
  byte_140F0B5CE = 3;
  dword_140F0B75C = 5;
  dword_140F0BA24 = 5;
  dword_140F0B758 = 5;
  dword_140F0BA20 = 5;
  dword_140F0B768 = 4;
  dword_140F0BA30 = 4;
  byte_140F0B896 = 3;
  word_140F0B750 = 12850;
  word_140F0BA18 = 12850;
  word_140F0B762 = -1;
  word_140F0BA2A = -1;
  dword_140F0B780 = 0;
  dword_140F0BA48 = 0;
  dword_140F0B76C = 3;
  dword_140F0BA34 = 3;
  qword_140F0B770 = 3LL;
  qword_140F0BA38 = 3LL;
  dword_140F0B778 = 0;
  dword_140F0BA40 = 0;
  result = Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    PpmHeteroContainmentPolicy = 0;
    dword_140F0B77C = 0;
    dword_140F0BA44 = 0;
  }
  else
  {
    dword_140F0B77C = 1;
    dword_140F0BA44 = 1;
  }
  qword_140F0B784 = 0LL;
  qword_140F0BA4C = 0LL;
  return result;
}
