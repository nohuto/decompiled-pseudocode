/*
 * XREFs of EtwpUpdateEnableInfoAndCallback @ 0x180058090
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x180052AB0 (EtwpProcessNotification.c)
 *     EtwpSetProviderTraits @ 0x1800577F0 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     EtwpDisableTraceProviders @ 0x1800E8BDC (EtwpDisableTraceProviders.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x180012B44 (EtwpGetUmProcessImageInfo.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpFindGuidEntry @ 0x180057C30 (EtwpFindGuidEntry.c)
 *     EtwpEventApiCallback @ 0x180058350 (EtwpEventApiCallback.c)
 *     EtwpReferenceUmGuidEntry @ 0x18005863C (EtwpReferenceUmGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180059160 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18006D3C8 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x1800F8674 (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpIsPrivateLoggerOn @ 0x1801003A8 (EtwpIsPrivateLoggerOn.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180102F40 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x180102F6C (EtwpAllocateUmGuidEntry.c)
 */

void __fastcall EtwpUpdateEnableInfoAndCallback(__int64 a1, __int64 a2)
{
  int v2; // r14d
  char v3; // bp
  _QWORD *GuidEntry; // r15
  char v5; // si
  __int64 i; // r12
  __int64 v9; // r8
  char v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int16 v14; // cx
  __int64 j; // rdx
  __int64 v16; // r8

  v2 = *(_DWORD *)(a2 + 72);
  v3 = 0;
  GuidEntry = *(_QWORD **)(a1 + 240);
  v5 = 0;
  LODWORD(i) = 4;
  if ( v2 == 2 )
  {
LABEL_6:
    if ( *(_DWORD *)(a2 + 72) || v3 )
    {
      if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 )
        EtwpRegisterGuidsApiCallback(a2, a1, 0LL);
      else
        EtwpEventApiCallback(a2, a1);
    }
    return;
  }
  if ( *(__int16 *)(a2 + 78) >= 0 )
  {
    v9 = a1 + 96;
LABEL_4:
    v3 = *(_BYTE *)(v9 + 20);
    *(_QWORD *)v9 = *(_QWORD *)(a2 + 96);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a2 + 88);
    *(_BYTE *)(v9 + 21) = *(_BYTE *)(a2 + 76);
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(a2 + 80);
    *(_BYTE *)(v9 + 20) = v2 != 0;
    if ( *(__int16 *)(a2 + 78) < 0 )
    {
      if ( (unsigned int)i < 4 )
      {
        v13 = 3 * ((unsigned int)i + 5LL);
        *(_OWORD *)(a1 + 8 * v13) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 8 * v13 + 16) = *(_QWORD *)(v9 + 16);
      }
      EtwpUpdatePrivateEnableInfo(a1);
      v14 = *(_WORD *)(a1 + 86);
      if ( (v14 & 0x3FFF) == 2 || v14 < 0 )
        EtwpGetUmProcessImageInfo(*(_WORD *)(a2 + 78), a1);
    }
    if ( v5 )
    {
      *((_DWORD *)GuidEntry + 12) = 0;
      RtlReleaseSRWLockExclusive(GuidEntry + 5);
      if ( (unsigned int)i < 4 && !v2 )
        EtwpDereferenceUmGuidEntry(GuidEntry);
    }
    goto LABEL_6;
  }
  if ( v2 != 1 || (unsigned __int8)EtwpIsPrivateLoggerOn(*(unsigned __int16 *)(a2 + 78)) )
  {
    if ( !GuidEntry )
    {
      if ( !v2 )
        return;
      GuidEntry = EtwpFindGuidEntry((_QWORD *)(a1 + 32), a2);
      if ( !GuidEntry )
      {
        GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(a1 + 32);
        if ( !GuidEntry )
          return;
      }
      *(_QWORD *)(a1 + 240) = GuidEntry;
    }
    EtwpAcquireGuidEntryExclusive(GuidEntry);
    v10 = *(_BYTE *)(a2 + 78);
    v11 = 0LL;
    v5 = 1;
    while ( (unsigned int)v11 < 4 )
    {
      v12 = &GuidEntry[3 * v11];
      if ( *((_BYTE *)v12 + 76) && *((_BYTE *)v12 + 78) == v10 )
      {
        LODWORD(i) = v11;
        v9 = (__int64)(v12 + 7);
        if ( v9 )
          goto LABEL_4;
        break;
      }
      v11 = (unsigned int)(v11 + 1);
    }
    if ( v2 )
    {
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        if ( !BYTE4(GuidEntry[3 * i + 9]) )
        {
          if ( &GuidEntry[3 * i] == (_QWORD *)-56LL )
            break;
          BYTE6(GuidEntry[3 * i + 9]) = v10;
          EtwpReferenceUmGuidEntry(GuidEntry);
          goto LABEL_4;
        }
      }
    }
    else
    {
      for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
      {
        v16 = a1 + 24 * j;
        if ( *(_BYTE *)(v16 + 140) && *(_BYTE *)(v16 + 142) == v10 )
        {
          v9 = v16 + 120;
          if ( v9 )
            goto LABEL_4;
          break;
        }
      }
    }
    *((_DWORD *)GuidEntry + 12) = 0;
    RtlReleaseSRWLockExclusive(GuidEntry + 5);
  }
}
