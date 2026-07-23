/*
 * XREFs of HalpHsapInitializeReservedDomain @ 0x1405AA7A8
 * Callers:
 *     HsaProcessDeviceExceptions @ 0x1405ACB08 (HsaProcessDeviceExceptions.c)
 * Callees:
 *     HsaUpdateDeviceTableEntry @ 0x1405AD260 (HsaUpdateDeviceTableEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpHsapInitializeReservedDomain(__int64 a1, int *a2)
{
  _QWORD *v2; // r15
  unsigned int v3; // ebx
  int v5; // esi
  _DWORD *v6; // rdi
  int v7; // ecx
  int v8; // r9d
  _DWORD v10[10]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v11; // [rsp+78h] [rbp-60h]
  int v12; // [rsp+80h] [rbp-58h]
  int v13; // [rsp+E8h] [rbp+10h] BYREF
  int v14; // [rsp+ECh] [rbp+14h]

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  v3 = 0;
  v5 = a1;
  v6 = (_DWORD *)*v2;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *((unsigned __int16 *)v6 + 4) == *(_DWORD *)(a1 + 160) )
    {
      memset_0(v10, 0, 0x70uLL);
      v7 = *((unsigned __int16 *)v6 + 6);
      LOBYTE(v8) = 1;
      v12 = *a2;
      v11 = v2[2];
      v13 = v7;
      v10[0] = 1;
      v10[1] = 2;
      v14 = 0;
      HsaUpdateDeviceTableEntry(v5, (unsigned int)&v13, 0, v8, (__int64)v10, 0, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
