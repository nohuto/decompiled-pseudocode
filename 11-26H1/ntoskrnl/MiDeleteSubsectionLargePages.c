/*
 * XREFs of MiDeleteSubsectionLargePages @ 0x14050A96C
 * Callers:
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403CF990 (MiConvertSmallPageRangeToLarge.c)
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDeleteSubsectionLargePages(__int64 *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r14
  ULONG_PTR v8; // rdi
  _QWORD *v9; // r12
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  unsigned __int64 LeafPfnBuddy; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+18h]
  __int64 v27; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a3;
  v3 = a2;
  v27 = 0LL;
  v4 = a1;
  v21 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    do
    {
      v8 = (__int64)(v3 + 0x44000000000LL) / 48;
      LeafPfnBuddy = MiGetLeafPfnBuddy(v3);
      v9 = (_QWORD *)LeafPfnBuddy;
      if ( v10 )
      {
        MiUpdateLargePageBitMap(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((v3[5] >> 43) & 0x3FFLL)),
          (__int64)(v3 + 0x44000000000LL) / 48,
          0x200uLL,
          2);
        v13 = (unsigned __int64)(v3 + 3072);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v11) = 2;
          LOBYTE(v12) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v12, v11);
        }
        if ( (unsigned __int64)v3 < v13 )
        {
          v15 = (volatile signed __int32 *)(v3 + 3);
          v22 = v5 + 512;
          do
          {
            v25 = 0;
            while ( _interlockedbittestandset64(v15, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v25);
              while ( *(__int64 *)v15 < 0 );
            }
            *(_QWORD *)v15 &= 0xC000000000000000uLL;
            v16 = *((_DWORD *)v15 + 2);
            *((_DWORD *)v15 + 2) = v16 ^ (unsigned __int16)(v16 ^ (v16 - 2));
            if ( (_WORD)v16 == 2 )
            {
              _InterlockedOr(v20, 0);
              MiSetPfnTbFlushStamp((__int64)(v15 - 6), (unsigned int)KiTbFlushTimeStamp, 1);
              MiInsertPageInFreeOrZeroedList(v8);
              ++v7;
            }
            else
            {
              if ( (*(_QWORD *)v15 & 0x4000000000000000LL) == 0 )
                *(_QWORD *)v15 |= 0x4000000000000000uLL;
              *((_DWORD *)v15 + 2) |= 0x70000u;
            }
            _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
            if ( (++v8 & 0x3F) == 0 )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              v17 = KeGetCurrentIrql();
              if ( (_BYTE)v17 != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v11) = 2;
                KiRaiseIrqlProcessIrqlFlags(v17, v11);
              }
            }
            v15 += 12;
          }
          while ( (unsigned __int64)(v15 - 6) < v13 );
          v5 = v22;
          v9 = (_QWORD *)LeafPfnBuddy;
          v6 = v21;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      else
      {
        MiConvertSmallPageRangeToLarge((__int64)(v3 + 0x44000000000LL) / 48, 1u);
        v6 += MiFreeLargePages(
                *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((v3[5] >> 43) & 0x3FFLL)),
                (__int64)v3,
                &v27,
                &v27,
                3);
        v21 = v6;
        v5 += 512LL;
      }
      v3 = v9;
    }
    while ( v9 );
    v4 = a1;
  }
  v18 = *v4;
  if ( v7 )
    MiReleaseNonPagedResources(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*v4 + 60) & 0x3FF)), v7);
  *(_QWORD *)(v18 + 120) = (*(_QWORD *)(v18 + 120) - v5) ^ (*(_QWORD *)(v18 + 120) ^ (*(_QWORD *)(v18 + 120) - v5)) & 0xFFFFFFF000000000uLL;
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v18 + 60) & 0x3FF)) + 23480LL),
    -v5);
  return v6;
}
