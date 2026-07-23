/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x1409DE86C
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140413470 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObFastReplaceObject @ 0x14047B348 (ObFastReplaceObject.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     ObpLockDirectoryShared @ 0x1409DEF00 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x1409DF250 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x1409DF360 (ObpLookupDirectoryEntry.c)
 *     ObpLockChildDirectory @ 0x1409DF640 (ObpLockChildDirectory.c)
 */

__int16 __fastcall ObpCreateSymbolicLinkName(ULONG_PTR a1)
{
  __int64 v1; // rax
  int v3; // r12d
  __int64 *v4; // rdx
  WCHAR *v5; // rcx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __m128i v7; // xmm6
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r13
  _QWORD *v9; // xmm0_8
  __int16 v10; // bx
  _WORD *v11; // rdi
  __int16 epi16; // r14
  bool v13; // zf
  __int64 v14; // rax
  ULONG_PTR v15; // rsi
  struct _OBJECT_TYPE *v16; // rax
  char v17; // di
  __int64 v18; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v20; // r9
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // r14
  void *v24; // rsi
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __m128i v34; // [rsp+20h] [rbp-50h]
  __m128i v35; // [rsp+30h] [rbp-40h] BYREF
  __int128 v36; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+50h] [rbp-20h]
  __int64 v38; // [rsp+B0h] [rbp+40h]
  PVOID Object; // [rsp+B8h] [rbp+48h]

  LOWORD(v1) = *(unsigned __int8 *)(a1 - 48 + 26);
  v3 = 64;
  if ( (v1 & 2) != 0 )
  {
    v1 = ObpInfoMaskToOffset[v1 & 3];
    v4 = (__int64 *)(a1 - 48 - v1);
    if ( v4 )
    {
      v1 = *v4;
      if ( *(_QWORD *)(*v4 + 304) )
      {
        LOWORD(v1) = 4;
        if ( *((_WORD *)v4 + 4) == 4 )
        {
          v5 = (WCHAR *)v4[2];
          if ( v5[1] == 58 )
          {
            LOWORD(v1) = RtlUpcaseUnicodeChar(*v5);
            if ( (unsigned __int16)(v1 - 65) <= 0x19u )
            {
              *(_DWORD *)(a1 + 24) = (unsigned __int16)v1 - 64;
              v37 = 0LL;
              v36 = 0LL;
              CurrentSilo = PsGetCurrentSilo();
              Object = (PVOID)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
              PsReferenceSiloContext(Object);
              v7 = *(__m128i *)(a1 + 8);
              v34 = v7;
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
LABEL_9:
              v9 = (_QWORD *)_mm_srli_si128(v7, 8).m128i_u64[0];
              v10 = _mm_cvtsi128_si32(v7);
              v11 = v9;
              if ( *(_QWORD *)((unsigned __int64)CurrentServerSiloGlobals->Flink & 0xFFFFFFFFFFFFFFF0uLL)
                && (unsigned __int16)v10 >= 8u
                && *v9 == 0x5C003F003F005CLL )
              {
                v11 = v9 + 1;
                v10 -= 8;
                v34.m128i_i64[1] = (__int64)(v9 + 1);
                v34.m128i_i16[0] = v10;
                v7 = v34;
              }
              ObpLockDirectoryShared(&v36);
              epi16 = _mm_extract_epi16(v7, 1);
              while ( 1 )
              {
                if ( v10 && *v11 == 92 )
                {
                  ++v11;
                  v10 -= 2;
                  epi16 -= 2;
                  v34.m128i_i64[1] = (__int64)v11;
                  v34.m128i_i16[1] = epi16;
                  v34.m128i_i16[0] = v10;
                  v7 = v34;
                }
                v35 = v7;
                if ( v10 )
                {
                  do
                  {
                    if ( *v11 == 92 )
                      break;
                    ++v11;
                    v13 = v10 == 2;
                    v10 -= 2;
                    v34.m128i_i64[1] = (__int64)v11;
                    v34.m128i_i16[0] = v10;
                  }
                  while ( !v13 );
                }
                epi16 -= v35.m128i_i16[0] - v10;
                v35.m128i_i16[0] -= v10;
                v34.m128i_i16[1] = epi16;
                if ( !v35.m128i_i16[0] )
                  break;
                v14 = ObpLookupDirectoryEntry(&v35, 0LL, &v36);
                v15 = v14;
                if ( !v14 )
                  goto LABEL_27;
                v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
                if ( v16 != ObpDirectoryObjectType )
                {
                  if ( v16 == ObpSymbolicLinkObjectType && !*(_DWORD *)(v15 + 24) )
                  {
                    if ( v3 )
                    {
                      --v3;
                      ObpUnlockDirectory(&v36);
                      if ( v10 || (*(_DWORD *)(a1 + 28) & 0xE) != 0 )
                        *(_DWORD *)(a1 + 28) &= ~0x20u;
                      v7 = *(__m128i *)(v15 + 8);
                      v34 = v7;
                      goto LABEL_9;
                    }
                    v15 = 0LL;
                  }
LABEL_27:
                  v17 = 1;
                  v38 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
                  if ( !v15 )
                  {
LABEL_28:
                    v18 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
                    if ( !v15 || (*(_DWORD *)(a1 + 28) & 0x20) == 0 )
                      v15 = a1;
                    PsReferenceSiloContext((void *)v15);
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->SpecialApcDisable;
                    v21 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL, 0LL, v20);
                    v23 = v21;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[7].Blink, 0LL) )
                      ExfAcquirePushLockExclusiveEx(
                        (unsigned __int64 *)&CurrentServerSiloGlobals[7].Blink,
                        v21,
                        (__int64)&CurrentServerSiloGlobals[7].Blink);
                    if ( v23 )
                    {
                      if ( (KiAbpGlobalState & 1) != 0 )
                        AutoBoost::KiAbpPostAcquire(v23, v22);
                      else
                        *((_BYTE *)v23 + 10) = 1;
                    }
                    *(_BYTE *)(v18 + v38 + 260) = v17;
                    *(_DWORD *)(v38 + 256) |= 1 << v18;
                    v24 = (void *)ObFastReplaceObject((volatile __int64 *)(v38 + 32 + 8 * v18), v15);
                    if ( v38 == ((unsigned __int64)CurrentServerSiloGlobals->Flink & 0xFFFFFFFFFFFFFFF0uLL) )
                      LODWORD(CurrentServerSiloGlobals->Blink) |= 1 << v18;
                    else
                      ++*((_DWORD *)&CurrentServerSiloGlobals->Blink + v18 + 1);
                    if ( (_InterlockedExchangeAdd64(
                            (volatile signed __int64 *)&CurrentServerSiloGlobals[7].Blink,
                            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&CurrentServerSiloGlobals[7].Blink);
                    KeAbPostRelease((unsigned __int64)&CurrentServerSiloGlobals[7].Blink);
                    KeLeaveGuardedRegion();
                    if ( v24 )
                      ObDereferenceObjectDeferDelete(v24);
                    break;
                  }
                  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(_BYTE *)(v15 - 24) ^ ((unsigned __int16)(v15 - 48) >> 8))) != *(_BYTE *)(IoDeviceObjectType + 40) )
                  {
                    v15 = 0LL;
                    goto LABEL_28;
                  }
                  v25 = *(_DWORD *)(v15 + 72);
                  if ( v25 > 0x10 )
                  {
                    v29 = v25 - 18;
                    if ( v29 )
                    {
                      v30 = v29 - 1;
                      if ( v30 )
                      {
                        v31 = v30 - 1;
                        if ( v31 )
                        {
                          v32 = v31 - 16;
                          if ( !v32 )
                          {
                            v17 = 6;
                            goto LABEL_28;
                          }
                          if ( v32 != 4 )
                          {
LABEL_66:
                            v17 = 0;
                            goto LABEL_28;
                          }
                        }
                      }
                    }
                  }
                  else if ( v25 != 16 )
                  {
                    v26 = v25 - 2;
                    if ( !v26 || (v27 = v26 - 1) == 0 )
                    {
                      v17 = 5;
                      goto LABEL_28;
                    }
                    v28 = v27 - 4;
                    if ( !v28 || v28 - 1 <= 1 )
                    {
                      v17 = ((*(_DWORD *)(v15 + 52) & 1) == 0) + 2;
                      goto LABEL_28;
                    }
                    goto LABEL_66;
                  }
                  v17 = 4;
                  goto LABEL_28;
                }
                ObpLockChildDirectory(&v36, v15, 0LL);
                v7 = v34;
              }
              ObpReleaseLookupContext((__int64)&v36);
              LOWORD(v1) = ObfDereferenceObject(Object);
            }
          }
        }
      }
    }
  }
  return v1;
}
