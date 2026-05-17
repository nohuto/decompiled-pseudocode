/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800D2DD0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 */

void __fastcall LdrpQueryIllegalCWDDevices(__int64 a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1
    || (int)RtlQueryImageFileKeyOption(a1, L"CWDIllegalInDLLSearch", 4LL, &v3, 4, 0LL) < 0
    || (v1 = v3, (unsigned int)(v3 + 1) > 3) )
  {
    v1 = (MEMORY[0x7FFE02D5] >> 4) & 3;
    if ( v1 == 3 )
      v1 = -1;
  }
  if ( v1 == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( v1 == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    v2 = 16;
    if ( v1 != 2 )
      v2 = 0;
    LdrpIllegalCWDDevices = v2;
  }
}
