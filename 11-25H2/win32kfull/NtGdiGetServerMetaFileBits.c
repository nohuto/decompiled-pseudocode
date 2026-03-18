/*
 * XREFs of NtGdiGetServerMetaFileBits @ 0x140311120
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x140310F34 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x140310F80 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetServerMetaFileBits(__int64 a1, __int64 a2, void *a3, void *a4, void *a5, void *a6, void *a7)
{
  int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  _QWORD v16[6]; // [rsp+30h] [rbp-38h] BYREF

  v9 = a2;
  v10 = 0;
  LOBYTE(a2) = 21;
  v11 = HmgLock(a1, a2);
  HmgLockResult<META>::HmgLockResult<META>((__int64)v16, v11, v12, v13);
  if ( v16[0] )
  {
    v14 = *(_DWORD *)(v16[0] + 24LL);
    if ( v14 == 1599096397 || v14 == 1480934989 )
    {
      v10 = *(_DWORD *)(v16[0] + 40LL);
      if ( v9 )
      {
        if ( v9 == v10 )
        {
          GreProbeAndWriteToUntrustedVa(a6, 4uLL, (const void *)(v16[0] + 32LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a7, 4uLL, (const void *)(v16[0] + 36LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a4, 4uLL, (const void *)(v16[0] + 24LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a5, 4uLL, (const void *)(v16[0] + 28LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(
            a3,
            *(unsigned int *)(v16[0] + 40LL),
            (const void *)(v16[0] + 44LL),
            *(unsigned int *)(v16[0] + 40LL),
            1uLL);
        }
        else
        {
          v10 = 0;
        }
      }
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v16);
  return v10;
}
