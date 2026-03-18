/*
 * XREFs of ACPIGetConvertToHardwareID @ 0x140061164
 * Callers:
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIWideStringToAnsiHelper @ 0x14003AE10 (ACPIWideStringToAnsiHelper.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004CE50 (ACPIGetConvertToHardwareIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareID(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, unsigned int *a6)
{
  int v6; // edi
  unsigned int v7; // ebx
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = ACPIGetConvertToHardwareIDWide(a1, a2, a3, a4, a5, (int *)v9);
  if ( v6 >= 0 )
  {
    v7 = v9[0];
    ACPIWideStringToAnsiHelper(*a5, v9[0]);
    if ( a6 )
      *a6 = v7 >> 1;
  }
  return (unsigned int)v6;
}
