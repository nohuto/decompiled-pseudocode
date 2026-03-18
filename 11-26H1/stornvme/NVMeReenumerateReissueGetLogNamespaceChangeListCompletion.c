/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x140029670
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeReenumerateMergeNamespaceChangeList @ 0x140028398 (NVMeReenumerateMergeNamespaceChangeList.c)
 *     NVMeReenumerateNameSpaceStart @ 0x140029204 (NVMeReenumerateNameSpaceStart.c)
 */

char __fastcall NVMeReenumerateReissueGetLogNamespaceChangeListCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // r9d
  unsigned int i; // ecx
  __int64 v8; // rdx
  unsigned int j; // ecx
  unsigned int k; // ecx
  unsigned __int64 v11; // rdx
  __int64 SrbExtension; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // r14
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _DWORD *v21; // rdi
  __int16 v22; // r8
  __int64 v23; // r8

  v2 = a2;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    v4 = *(_QWORD *)(GetSrbExtension(a2) + 4200);
  }
  else if ( a2 == a1 + 1016 )
  {
    v4 = a1 + 1008;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 1392);
    if ( v5 )
    {
      v6 = *(unsigned __int16 *)(a1 + 1552);
      for ( i = 0; i < v6; ++i )
      {
        v4 = v5 + ((unsigned __int64)i << 7);
        if ( v2 == v4 + 8 )
          goto LABEL_21;
      }
    }
    v8 = *(_QWORD *)(a1 + 1400);
    if ( v8 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 1554); ++j )
      {
        v4 = v8 + ((unsigned __int64)j << 7);
        if ( v2 == v4 + 8 )
          goto LABEL_21;
      }
    }
    for ( k = 0; k < 2; ++k )
    {
      v11 = (unsigned __int64)k << 7;
      if ( v2 == v11 + a1 + 1144 )
      {
        v4 = v11 + a1 + 1136;
        goto LABEL_21;
      }
    }
    v4 = 0LL;
  }
LABEL_21:
  SrbExtension = GetSrbExtension(v2);
  v15 = SrbExtension;
  v16 = *(_QWORD *)(SrbExtension + 4200);
  if ( !v4
    || (LOBYTE(SrbExtension) = *(_BYTE *)(v13 + 3), (_BYTE)SrbExtension == 14)
    || (*(_DWORD *)(a1 + 24) & 0xE) != 0
    || (v17 = v4 + 96, v14 = *(_QWORD *)(v4 + 96), *(_BYTE *)(v14 + 4136) != 4) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
    v20 = (_QWORD *)(v15 + 4160);
    v19 = v4 + 96;
    goto LABEL_37;
  }
  v18 = (_QWORD *)(v15 + 4160);
  v19 = v4 + 96;
  v20 = (_QWORD *)(v15 + 4160);
  if ( !*(_QWORD *)(v15 + 4160) )
    goto LABEL_37;
  if ( (_BYTE)SrbExtension == 1 )
  {
    v21 = *(_DWORD **)(v14 + 4160);
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    LOBYTE(SrbExtension) = (unsigned __int8)NVMeReenumerateMergeNamespaceChangeList(v16, v21);
    if ( *v21 )
    {
      LOBYTE(SrbExtension) = NVMeReenumerateNameSpaceStart(a1);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
    }
    goto LABEL_38;
  }
  v22 = *(_WORD *)(v15 + 4218);
  LOBYTE(SrbExtension) = 0;
  if ( (v22 & 0xE00) != 0x200
    || (LOBYTE(SrbExtension) = -2, (v22 & 0x1FE) != 0x12)
    || (**(_DWORD **)(v14 + 4160) = -1,
        LOBYTE(SrbExtension) = NVMeReenumerateNameSpaceStart(a1),
        v20 = (_QWORD *)(v15 + 4160),
        v19 = v4 + 96,
        (*(_BYTE *)(a1 + 21) & 2) == 0) )
  {
LABEL_37:
    v17 = v19;
    v18 = v20;
    if ( !v4 )
      goto LABEL_40;
    goto LABEL_38;
  }
  LOBYTE(SrbExtension) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
LABEL_38:
  if ( *v18 )
  {
    LOBYTE(SrbExtension) = NVMeFreeDmaBufferEx(
                             a1,
                             0,
                             1,
                             *(unsigned int *)(*(_QWORD *)v17 + 4208LL),
                             (__int64 *)(*(_QWORD *)v17 + 4160LL),
                             *(_QWORD *)(*(_QWORD *)v17 + 4168LL));
    *(_DWORD *)(v15 + 4208) = 0;
  }
LABEL_40:
  v23 = *(_QWORD *)(v15 + 4200);
  if ( v23 )
  {
    LOBYTE(SrbExtension) = StorPortExtendedFunction(1LL, a1, v23, v14);
    *(_QWORD *)(v15 + 4200) = 0LL;
  }
  *(_BYTE *)(v15 + 4225) |= 8u;
  return SrbExtension;
}
