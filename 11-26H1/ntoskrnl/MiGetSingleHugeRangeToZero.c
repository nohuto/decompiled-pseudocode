/*
 * XREFs of MiGetSingleHugeRangeToZero @ 0x1404EC414
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1404BBDD8 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 */

unsigned __int64 __fastcall MiGetSingleHugeRangeToZero(unsigned __int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  __int16 *v3; // rax
  __int16 v6; // cx
  __int128 v7; // rax
  int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // r15d
  int v12; // r12d
  unsigned int Cache; // eax
  __int64 v14; // r10
  unsigned __int64 v15; // rbx
  __int64 *v16; // rsi
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-58h]
  __int128 v20; // [rsp+28h] [rbp-50h] BYREF
  __int16 v22; // [rsp+88h] [rbp+10h]
  unsigned int v24; // [rsp+98h] [rbp+20h]

  v3 = *(__int16 **)(a2 + 13896);
  v6 = *v3;
  v7 = (a2 - *((_QWORD *)v3 + 2)) * (__int128)0x4A7904A7904A7905LL;
  v20 = 0LL;
  v22 = v6;
  MiInitializePageColorBase(0LL, 0, (*((__int64 *)&v7 + 1) >> 14) + (*((_QWORD *)&v7 + 1) >> 63) + 1, (__int64)&v20);
  v8 = 0;
  v19 = dword_140E2D900[0];
  v9 = DWORD2(v20) & 0xFFFFFF00;
  v24 = DWORD2(v20) & 0xFFFFFF00;
  v10 = v9 | (unsigned __int8)_InterlockedExchangeAdd(a3, 1u);
  v11 = 0;
  *(_QWORD *)&v20 = *(_QWORD *)(*(_QWORD *)(a2 + 13896) + 17040LL)
                  + 8
                  * ((unsigned int)dword_140E2D900[0]
                   + (unsigned __int64)(unsigned int)(2
                                                    * dword_140E2D900[0]
                                                    * (((int)a2 - *(_DWORD *)(*(_QWORD *)(a2 + 13896) + 16LL))
                                                     / 56320)));
  while ( v11 < 2 )
  {
    v12 = 0;
    do
    {
      Cache = MiColorGetCache(v10);
      v15 = (*(_QWORD *)(v14 + 8LL * Cache) >> 15) & 0x3FFFFFLL;
      if ( ((*(_QWORD *)(v14 + 8LL * Cache) >> 15) & 0x3FFFFF) == 0 )
        goto LABEL_9;
      if ( !_bittest64(*(const signed __int64 **)&stru_140E2ED08.WaitRegister.Flags, v15) )
        continue;
      v16 = (__int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v15);
      if ( !v11
        && ((*(int *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber + 4 * ((((__int64)(8 * v15) >> 3) & 0x3FFFFFuLL) >> 5)) >> (((__int64)(8 * v15) >> 3) & 0x1F)) & 1) != 0 )
      {
        v8 = 1;
LABEL_9:
        v10 = v24 | (unsigned __int8)_InterlockedExchangeAdd(a3, 1u);
        ++v12;
        continue;
      }
      MiLockHugePfnAtDpc(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v15);
      v17 = *v16;
      if ( (((unsigned __int64)*v16 >> 4) & 0x7FF) == v22 && (v17 & 7) == 2 )
      {
        if ( (v17 & 0x800000000000000LL) == 0 && (unsigned int)MiBeginPageAccessor(a1, 0, (__int64)v16, 1) )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                      + 4
                                      * (((((__int64)v16 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((__int64)v16 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
          return v15;
        }
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                    + 4
                                    * (((((__int64)v16 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((__int64)v16 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
        goto LABEL_9;
      }
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * (((((__int64)v16 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)v16 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    }
    while ( v12 != v19 );
    if ( !v8 )
      return 0LL;
    ++v11;
  }
  return 0LL;
}
