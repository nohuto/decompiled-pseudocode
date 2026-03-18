/*
 * XREFs of AcpiDiagEnumCoolingDevices @ 0x14002C0DC
 * Callers:
 *     AcpiDiagTraceThermalZoneRundown @ 0x14002BCA4 (AcpiDiagTraceThermalZoneRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiDiagEnumCoolingDevices(__int64 a1, char a2, int a3, __int64 a4, unsigned int *a5)
{
  __int64 *v5; // r11
  unsigned int v6; // ebx
  __int64 *v7; // r10
  __int64 *v10; // rax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx

  v5 = (__int64 *)(a1 + 176);
  v6 = 0;
  v7 = *(__int64 **)(a1 + 176);
  if ( v7 != (__int64 *)(a1 + 176) )
  {
    do
    {
      if ( *((_BYTE *)v7 + 52) == a2 && *((unsigned __int8 *)v7 + 54) == a3 )
      {
        v10 = v7 + 7;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v10 + v11) );
        v12 = *a5;
        v13 = 2LL * *a5;
        ++v6;
        *(_DWORD *)(a4 + 8 * v13 + 8) = v11 + 1;
        *a5 = v12 + 1;
        *(_QWORD *)(a4 + 8 * v13) = v10;
        *(_DWORD *)(a4 + 8 * v13 + 12) = 0;
      }
      v7 = (__int64 *)*v7;
    }
    while ( v7 != v5 );
  }
  return v6;
}
