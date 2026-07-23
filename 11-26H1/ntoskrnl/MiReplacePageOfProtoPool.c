/*
 * XREFs of MiReplacePageOfProtoPool @ 0x140443530
 * Callers:
 *     MiTradeForLeafPage @ 0x140293044 (MiTradeForLeafPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     MiGetPrototypePteRanges @ 0x140443C58 (MiGetPrototypePteRanges.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 UltraMapping; // r13
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v13; // r9
  unsigned __int64 ValidPte; // rax
  _QWORD *v15; // r12
  _QWORD v17[2]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-69h] BYREF
  char v20; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-19h]
  int v22; // [rsp+A8h] [rbp-11h]
  int v23; // [rsp+ACh] [rbp-Dh]
  int v24; // [rsp+B0h] [rbp-9h]

  memset_0(v18, 0, 0x88uLL);
  v19[1] = &v20;
  v19[0] = 512LL;
  if ( !(unsigned int)MiGetPrototypePteRanges(a1, v19) )
    return 3221225632LL;
  v18[2] = a2;
  v18[3] = a3;
  v8 = 0LL;
  v22 = 2;
  v9 = 48 * a2 - 0x220000000000LL;
  v10 = 48 * a3 - 0x220000000000LL;
  UltraMapping = MiGetUltraMapping(a4 + 96, 3uLL, 1LL, 4);
  v17[0] = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v10);
  ValidPte = MiMakeValidPte(v13, a3, ProtectionPfnCompatible | 0xA0000000);
  v15 = (_QWORD *)v17[0];
  v18[0] = a1;
  v18[1] = UltraMapping;
  *(_QWORD *)v17[0] = ValidPte;
  v24 = MiWalkAllBitmapRanges(v19, MiCopyProtoPtes, v18);
  if ( v24 >= 0 )
  {
    if ( v21 != 512 )
      RtlCopyVolatileMemory((void *)(UltraMapping + 8 * v21), (const void *)(a1 + 8 * v21), 8 * (512 - v21));
    LODWORD(v17[0]) = 0;
    if ( v23 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v17);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
    }
    else
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v17);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
    }
    if ( (unsigned __int16)*(_DWORD *)(v9 + 32) == 2 )
    {
      v8 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int16)*(_QWORD *)(v9 + 24) != (unsigned __int64)(unsigned int)(v23 + 1)
        || (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      {
        _InterlockedIncrement(&dword_140EF9094);
        v24 = -1073741823;
      }
      if ( v24 >= 0 )
        goto LABEL_11;
    }
    else
    {
      _InterlockedIncrement(&dword_140EF9098);
      v24 = -1073741823;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_11:
  if ( v24 >= 0 )
  {
    LODWORD(v17[0]) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v17);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_QWORD *)(v10 + 24) = v8 | *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  MiWalkAllBitmapRanges(v19, MiUnlockProtoPtes, v18);
  return (unsigned int)v24;
}
