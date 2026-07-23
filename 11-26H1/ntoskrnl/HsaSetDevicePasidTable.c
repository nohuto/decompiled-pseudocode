/*
 * XREFs of HsaSetDevicePasidTable @ 0x1405AD020
 * Callers:
 *     <none>
 * Callees:
 *     HsaBuildDefaultDomain @ 0x1405AB92C (HsaBuildDefaultDomain.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AD260 (HsaUpdateDeviceTableEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HsaSetDevicePasidTable(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v5; // rbx
  int *v9; // rax
  __int64 result; // rax
  int v11[28]; // [rsp+50h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a2 + 64);
  memset_0(v11, 0, sizeof(v11));
  if ( a5 )
  {
    v9 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      LODWORD(v5) = 0;
      result = HsaBuildDefaultDomain(a1, v11, *(_BYTE *)(a2 + 48));
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v11[12] = *(_DWORD *)(v5 + 32);
    }
    v9 = v11;
  }
  return HsaUpdateDeviceTableEntry(a1, *(_QWORD *)(a2 + 56), v5, 0, (__int64)v9, 0, 0);
}
