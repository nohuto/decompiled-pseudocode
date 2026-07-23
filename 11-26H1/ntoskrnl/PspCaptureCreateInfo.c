/*
 * XREFs of PspCaptureCreateInfo @ 0x140B04308
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall PspCaptureCreateInfo(char a1, volatile void *a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int8 v7; // dl
  __int64 v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+38h] [rbp-60h]
  unsigned __int8 v11; // [rsp+40h] [rbp-58h]
  __int16 v12; // [rsp+42h] [rbp-56h]
  int v13; // [rsp+44h] [rbp-54h]

  memset_0(&v9, 0, 0x58uLL);
  v6 = 0;
  if ( a1 )
  {
    ProbeForWrite(a2, 0x58uLL, 4u);
    RtlCopyFromUser(&v9, (void *)a2, 0x58uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v9, (const void *)a2, 0x58uLL);
  }
  if ( v10 || v9 != 88 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = v11;
    *(_BYTE *)(a3 + 17) ^= (*(_BYTE *)(a3 + 17) ^ (v11 >> 3)) & 1;
    *(_DWORD *)(a3 + 172) = v13;
    *(_BYTE *)(a3 + 16) = *(_BYTE *)(a3 + 16) & 0x6D | (2 * (v7 & 1 | (4 * (v7 & 2 | (4 * (v7 & 0xFC))))));
    *(_WORD *)(a3 + 18) = v12;
    *(_QWORD *)(a3 + 48) = a2;
  }
  return v6;
}
