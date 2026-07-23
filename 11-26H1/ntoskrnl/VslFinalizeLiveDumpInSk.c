/*
 * XREFs of VslFinalizeLiveDumpInSk @ 0x1405C54FC
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405D0EE0 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslAbortLiveDump @ 0x1405C5204 (VslAbortLiveDump.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslFinalizeLiveDumpInSk(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char *v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v10; // ebx
  char v12[8]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-A0h]
  _QWORD v14[2]; // [rsp+30h] [rbp-98h]
  int v15; // [rsp+40h] [rbp-88h]

  memset_0(v12, 0, 0x68uLL);
  v6 = *(char **)(a3 + 32);
  v7 = *(_DWORD *)(a3 + 8) >> 12;
  v13 = v7;
  if ( ((unsigned __int16)v6 & 0xFFF) != 0 || v6 != *(char **)a3 || (*(_DWORD *)(a3 + 40) & 0xFFF) != 0 || v7 > 0xB )
  {
    v10 = -1073741811;
LABEL_10:
    VslAbortLiveDump();
    return (unsigned int)v10;
  }
  v8 = 0LL;
  if ( v7 )
  {
    do
    {
      PhysicalAddress = MmGetPhysicalAddress(v6);
      v6 += 4096;
      v14[v8] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < v13 );
  }
  v10 = VslpEnterIumSecureMode(2u, 0x3Fu, 0, (__int64)v12);
  if ( v10 < 0 )
    goto LABEL_10;
  *a1 = v14[0];
  *a2 = v14[1];
  *(_DWORD *)(a3 + 40) = v15;
  return (unsigned int)v10;
}
