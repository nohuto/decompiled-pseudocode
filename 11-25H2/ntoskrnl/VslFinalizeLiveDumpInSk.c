/*
 * XREFs of VslFinalizeLiveDumpInSk @ 0x14058975C
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405968CC (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     VslAbortLiveDump @ 0x140589450 (VslAbortLiveDump.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  v10 = VslpEnterIumSecureMode(2u, 0x3Eu, 0, (__int64)v12);
  if ( v10 < 0 )
    goto LABEL_10;
  *a1 = v14[0];
  *a2 = v14[1];
  *(_DWORD *)(a3 + 40) = v15;
  return (unsigned int)v10;
}
