/*
 * XREFs of CmpGetMappingHiveForString @ 0x1408D77A4
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407764E0 (CmpVirtualPathPresent.c)
 *     CmpGetVirtualStoreRoot @ 0x140860160 (CmpGetVirtualStoreRoot.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B7C80 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r12d
  int v4; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // bp
  WCHAR *v7; // r15
  WCHAR *v8; // r13
  __int16 v9; // bp
  __int16 i; // r14
  WCHAR v11; // si
  WCHAR v12; // di
  unsigned int j; // edi
  __int64 v14; // rax
  unsigned __int16 v15; // r14
  WCHAR *v16; // r13
  WCHAR *v17; // rax
  __int16 v18; // r14
  __int16 k; // r15
  WCHAR v20; // bp
  WCHAR v21; // si
  WCHAR *v25; // [rsp+70h] [rbp+18h]

  v2 = a1;
  v3 = 0;
  v4 = CmpHashUnicodeComponent(a1);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < SHIDWORD(WheapPfaLock.Teb)
    && (v5 = 4LL * CmSIDMappingCacheHit, LODWORD((&WheapPfaLock.Queue->WaitListHead.Blink)[v5]) == v4)
    && (v6 = *(_WORD *)((char *)&WheapPfaLock.Queue->Lock + v5 * 8), v6 == *(_WORD *)v2) )
  {
    v7 = (WCHAR *)(&WheapPfaLock.Queue->WaitListHead.Flink)[v5];
    v8 = *(WCHAR **)(v2 + 8);
    v9 = v6 >> 1;
    for ( i = *(_WORD *)v2 >> 1; v9 && i; --i )
    {
      v11 = *v7++;
      v12 = *v8++;
      if ( v11 != v12 )
      {
        if ( v11 >= 0x61u )
        {
          if ( v11 > 0x7Au )
            v11 = RtlUpcaseUnicodeChar(v11);
          else
            v11 -= 32;
        }
        if ( v12 >= 0x61u )
        {
          if ( v12 <= 0x7Au )
            v12 -= 32;
          else
            v12 = RtlUpcaseUnicodeChar(v12);
        }
        if ( v11 != v12 )
          goto LABEL_17;
      }
      --v9;
    }
    if ( v9 != i )
    {
LABEL_17:
      v2 = a1;
      goto LABEL_18;
    }
    *a2 = *((_QWORD *)&WheapPfaLock.Queue[1].Lock + 4 * CmSIDMappingCacheHit);
  }
  else
  {
LABEL_18:
    for ( j = 0; ; ++j )
    {
      if ( j >= HIDWORD(WheapPfaLock.Teb) )
      {
        v3 = -1073741275;
        goto LABEL_31;
      }
      v14 = 4LL * j;
      if ( LODWORD((&WheapPfaLock.Queue->WaitListHead.Blink)[v14]) == v4 )
      {
        v15 = *(_WORD *)((char *)&WheapPfaLock.Queue->Lock + v14 * 8);
        if ( v15 == *(_WORD *)v2 )
        {
          v16 = (WCHAR *)(&WheapPfaLock.Queue->WaitListHead.Flink)[v14];
          v17 = *(WCHAR **)(v2 + 8);
          v18 = v15 >> 1;
          for ( k = *(_WORD *)v2 >> 1; v18 && k; --k )
          {
            v20 = *v16++;
            v21 = *v17++;
            v25 = v17;
            if ( v20 != v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                  v20 = RtlUpcaseUnicodeChar(v20);
                else
                  v20 -= 32;
              }
              if ( v21 >= 0x61u )
              {
                if ( v21 <= 0x7Au )
                  v21 -= 32;
                else
                  v21 = RtlUpcaseUnicodeChar(v21);
              }
              if ( v20 != v21 )
                goto LABEL_33;
              v17 = v25;
            }
            --v18;
          }
          if ( v18 == k )
            break;
        }
      }
LABEL_33:
      v2 = a1;
    }
    CmSIDMappingCacheHit = j;
    *a2 = *((_QWORD *)&WheapPfaLock.Queue[1].Lock + 4 * j);
  }
LABEL_31:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
  return v3;
}
