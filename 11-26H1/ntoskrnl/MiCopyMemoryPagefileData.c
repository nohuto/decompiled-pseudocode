/*
 * XREFs of MiCopyMemoryPagefileData @ 0x140711550
 * Callers:
 *     MiTransferMemoryPagefileData @ 0x1404FC9E8 (MiTransferMemoryPagefileData.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiGetPteMappingSet @ 0x140448100 (MiGetPteMappingSet.c)
 *     MiReturnPteMappingSet @ 0x14044E8C0 (MiReturnPteMappingSet.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

struct _KPRCB *__fastcall MiCopyMemoryPagefileData(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 *v12; // r9
  unsigned __int64 *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  struct _KPRCB *result; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // ebx
  int ProtectionPfnCompatible; // eax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rdx
  struct _KPRCB *v28; // [rsp+20h] [rbp-48h]
  __int128 v29; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-30h]

  v30 = 0LL;
  v6 = a3;
  v7 = a2;
  v29 = 0LL;
  if ( a2 && (v9 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, a4, a3, a4), (v10 = v9) != 0) )
  {
    ValidPte = MiMakeValidPte(v9, -1LL, (a5 != 0 ? 1 : 4) | 0xA0000000);
    v12 = (unsigned __int64 *)(v10 + 8 * a4);
    v13 = (unsigned __int64 *)v10;
    if ( v10 < (unsigned __int64)v12 )
    {
      do
      {
        v14 = v6++ << 12;
        ValidPte = v14 ^ (v14 ^ ValidPte) & 0xFFF0000000000FFFuLL;
        *v13++ = ValidPte;
      }
      while ( v13 < v12 );
    }
    if ( a5 )
    {
      v15 = (__int64)(v10 << 25) >> 16;
    }
    else
    {
      v15 = v7;
      v7 = (__int64)(v10 << 25) >> 16;
    }
    memmove((void *)v7, (const void *)v15, a4 << 12);
    return (struct _KPRCB *)MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v10, a4);
  }
  else
  {
    result = (struct _KPRCB *)((char *)a1 + 8 * a4);
    v28 = result;
    if ( a1 < result )
    {
      v17 = 48 * v6 - 0x220000000000LL;
      do
      {
        MiGetPteMappingSet(0, 2LL, (__int64)&v29);
        v18 = (unsigned __int64)v30;
        v19 = 48LL * *(_QWORD *)&a1->MxCsr - 0x220000000000LL;
        v20 = *(_DWORD *)(v19 + 32);
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a5 != 0 ? 4 : 1, v19);
        *(_QWORD *)v18 = MiMakeValidPte(v18, v22, ProtectionPfnCompatible | 0xA0000000);
        v18 += 8LL;
        v23 = MiMakeProtectionPfnCompatible(a5 != 0 ? 1 : 4, v17);
        *(_QWORD *)v18 = MiMakeValidPte(v18, v6, v23 | 0xA0000000);
        v24 = (__int64)((v18 - 8) << 25) >> 16;
        v25 = 1LL;
        v26 = (__int64)(v18 << 25) >> 16;
        v27 = v26;
        if ( (v20 & 0xC00000) != 0x400000 )
          v25 = 0xFFFFFFFFLL;
        if ( !a5 )
        {
          v27 = v24;
          v24 = v26;
        }
        KeCopyPageNoOverride(v24, v27, v25);
        *v30 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v30[1] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        result = MiReturnPteMappingSet((__int64)&v29);
        a1 = (struct _KPRCB *)((char *)a1 + 8);
        ++v6;
        v17 += 48LL;
      }
      while ( a1 < v28 );
    }
  }
  return result;
}
