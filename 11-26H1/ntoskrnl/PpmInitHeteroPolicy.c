/*
 * XREFs of PpmInitHeteroPolicy @ 0x140CD46B4
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline @ 0x14060C2B8 (Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline.c)
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

  v0 = (char *)&unk_140F0B598;
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
  byte_140F0B20E = 3;
  dword_140F0B39C = 5;
  dword_140F0B664 = 5;
  dword_140F0B398 = 5;
  dword_140F0B660 = 5;
  dword_140F0B3A8 = 4;
  dword_140F0B670 = 4;
  byte_140F0B4D6 = 3;
  word_140F0B390 = 12850;
  word_140F0B658 = 12850;
  word_140F0B3A2 = -1;
  word_140F0B66A = -1;
  dword_140F0B3C0 = 0;
  dword_140F0B688 = 0;
  dword_140F0B3AC = 3;
  dword_140F0B674 = 3;
  qword_140F0B3B0 = 3LL;
  qword_140F0B678 = 3LL;
  dword_140F0B3B8 = 0;
  dword_140F0B680 = 0;
  result = Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    PpmHeteroContainmentPolicy = 0;
    dword_140F0B3BC = 0;
    dword_140F0B684 = 0;
  }
  else
  {
    dword_140F0B3BC = 1;
    dword_140F0B684 = 1;
  }
  qword_140F0B3C4 = 0LL;
  qword_140F0B68C = 0LL;
  return result;
}
