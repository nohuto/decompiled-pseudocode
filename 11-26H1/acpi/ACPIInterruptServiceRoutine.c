/*
 * XREFs of ACPIInterruptServiceRoutine @ 0x140030040
 * Callers:
 *     <none>
 * Callees:
 *     CLEAR_PM1_STATUS_BITS @ 0x140030490 (CLEAR_PM1_STATUS_BITS.c)
 *     AcpiPccIsInterruptIssued @ 0x140065440 (AcpiPccIsInterruptIssued.c)
 *     AcpiPccIsrIsPlatformNotificationIssued @ 0x1400654A4 (AcpiPccIsrIsPlatformNotificationIssued.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

bool __fastcall ACPIInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  __int16 v3; // bx
  int v4; // edi
  unsigned int i; // ebx
  int (__fastcall *v6)(__int64); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // al
  int v10; // ecx
  int v11; // esi
  bool v12; // di
  int v13; // ebx
  int v14; // esi
  int v15; // edi
  unsigned __int16 *v16; // rcx
  unsigned int v17; // ebx
  int (__fastcall *v18)(__int64); // rax
  __int64 v19; // rcx
  int v20; // edx
  signed __int32 v21; // eax
  unsigned int v22; // edi
  signed __int32 v23; // edx
  unsigned int j; // ebx
  __int64 v26; // rbp
  __int16 v27; // [rsp+68h] [rbp+10h] BYREF
  __int16 v28; // [rsp+70h] [rbp+18h] BYREF

  v28 = 0;
  v3 = 0;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      0LL,
      0LL,
      &v28,
      2LL,
      0LL);
    v3 = v28;
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      3LL,
      0LL,
      &v28,
      2LL,
      0LL);
    v3 |= v28;
  }
  v4 = v3 & (*((_WORD *)AcpiInformation + 56) | 0x8401);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((unsigned __int16 *)AcpiInformation + 51) )
    {
      v9 = 0;
      goto LABEL_16;
    }
    LOBYTE(v27) = 0;
    v6 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
    if ( i < *((unsigned __int16 *)AcpiInformation + 43) )
    {
      if ( v6(6LL) < 0 )
        goto LABEL_11;
      v7 = i;
      v8 = 6LL;
      goto LABEL_10;
    }
    if ( v6(7LL) >= 0 )
    {
      v7 = i - *((unsigned __int16 *)AcpiInformation + 43);
      v8 = 7LL;
LABEL_10:
      (*(void (__fastcall **)(__int64, __int64, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
        v8,
        v7,
        &v27,
        1LL,
        0LL);
    }
LABEL_11:
    if ( (*((_BYTE *)GpeCurEnable + i) & (unsigned __int8)v27) != 0 )
      break;
  }
  v9 = 1;
LABEL_16:
  v10 = v4 | 0x10000;
  if ( !v9 )
    v10 = v4;
  v11 = v10;
  if ( (AcpiOverrideAttributes & 0x200) != 0 && !v10 )
    v11 = 0x10000;
  v12 = 0;
  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace && *(_DWORD *)(AcpiPccLegacySubspace + 560) )
      v12 = (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccLegacySubspace) != 0;
    if ( AcpiPccSubspaces )
    {
      for ( j = 0; j < AcpiPccSubspaceCount; ++j )
      {
        v26 = AcpiPccSubspaces + 824LL * j;
        if ( *(_DWORD *)(v26 + 12) == 1
          && (*(_DWORD *)(v26 + 560) && (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccSubspaces + 824LL * j)
           || (unsigned __int8)AcpiPccIsrIsPlatformNotificationIssued(v26)) )
        {
          v12 = 1;
        }
      }
    }
  }
  v13 = v11 | 0x20000;
  if ( !v12 )
    v13 = v11;
  v14 = v13 & 0x11;
  if ( (v13 & 0x11) != 0 )
  {
    CLEAR_PM1_STATUS_BITS(v13 & 0x11);
    if ( (v13 & 1) != 0 )
      (*(void (**)(void))(PmHalDispatchTable + 8))();
    v13 &= ~v14;
  }
  if ( v13 )
  {
    v15 = v13 | 0x10000;
    if ( (~*(_DWORD *)(a2 + 88) & v13) != 0 )
      v15 = v13;
    if ( (v15 & 0x10000) != 0 )
    {
      v16 = (unsigned __int16 *)AcpiInformation;
      v17 = 0;
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        while ( 1 )
        {
          LOBYTE(v27) = 0;
          v18 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
          if ( v17 >= v16[43] )
            break;
          if ( v18(6LL) >= 0 )
          {
            v19 = 6LL;
            v20 = *((unsigned __int16 *)AcpiInformation + 43);
LABEL_31:
            (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
              v19,
              v17 + v20,
              &v27,
              1LL,
              0LL);
          }
LABEL_32:
          v16 = (unsigned __int16 *)AcpiInformation;
          if ( ++v17 >= *((unsigned __int16 *)AcpiInformation + 51) )
            goto LABEL_33;
        }
        if ( v18(7LL) < 0 )
          goto LABEL_32;
        v19 = 7LL;
        v20 = *((unsigned __int16 *)AcpiInformation + 49) - *((unsigned __int16 *)AcpiInformation + 43);
        goto LABEL_31;
      }
    }
LABEL_33:
    v27 = v15;
    if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        0LL,
        0LL,
        &v27,
        2LL,
        0LL);
    if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        3LL,
        0LL,
        &v27,
        2LL,
        0LL);
    v21 = *(_DWORD *)(a2 + 88);
    v22 = v15 | 0x80000000;
    do
    {
      v23 = v21;
      v21 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), v22 | v21, v21);
    }
    while ( v23 != v21 );
    v14 |= v22 & ~v21;
    if ( v14 < 0 )
      KeInsertQueueDpc((PRKDPC)(a2 + 96), 0LL, 0LL);
  }
  return v14 != 0;
}
