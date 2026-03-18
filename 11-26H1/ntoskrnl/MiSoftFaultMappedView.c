/*
 * XREFs of MiSoftFaultMappedView @ 0x1403BB610
 * Callers:
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiImagePageOk @ 0x1402F7140 (MiImagePageOk.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     MiVadMapsLargeImage @ 0x1403BC004 (MiVadMapsLargeImage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall MiSoftFaultMappedView(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rbx
  ULONG_PTR v5; // r12
  struct _LIST_ENTRY **p_Blink; // r9
  __int64 v7; // r13
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rdx
  ULONG_PTR v11; // rdi
  _QWORD *v12; // r14
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 *v23; // rax
  __int64 v24; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v26; // rax
  int v27; // ebx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // ebx
  ULONG_PTR v32; // rcx
  unsigned int i; // r8d
  int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // rax
  bool v37; // zf
  unsigned __int8 v38[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v39; // [rsp+24h] [rbp-DCh] BYREF
  _QWORD *v40; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v41; // [rsp+30h] [rbp-D0h]
  __int128 v42; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY **v46; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+68h] [rbp-98h]
  _QWORD v48[16]; // [rsp+80h] [rbp-80h] BYREF

  v45 = a1;
  v41 = 0LL;
  v43 = 0LL;
  v1 = *(_DWORD *)(a1 + 48);
  v42 = 0LL;
  if ( (v1 & 0x3E0) == 0x20 || (v1 & 0x80000) == 0 && (v1 & 0x1C) == 8 && (v1 & 0x100000) != 0 )
    return;
  if ( (unsigned int)MiVadMapsLargeImage(a1) )
    return;
  v3 = **(_QWORD **)(v2 + 80);
  if ( (*(_DWORD *)(v3 + 56) & 8) != 0 && (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
    return;
  v4 = *(_QWORD *)(v3 + 32);
  v5 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v7 = 0LL;
  v8 = 0;
  v46 = p_Blink;
  v44 = v4;
  if ( !v4 )
    return;
  v9 = *(unsigned int *)(v2 + 24);
  v10 = *(unsigned __int8 *)(v2 + 32);
  v11 = *(_QWORD *)(v2 + 88);
  v12 = 0LL;
  v40 = 0LL;
  v38[0] = 17;
  v13 = 8 * ((v9 | (v10 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v42) |= 8u;
  v47 = 8 * v14 - 0x98000000000LL;
  *(_QWORD *)&v42 = p_Blink;
  BYTE12(v42) = MiLockWorkingSetShared((__int64)p_Blink, v14, v2);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_8:
      if ( v13 > v47 || v11 > *(_QWORD *)(v45 + 96) || !v4 )
        goto LABEL_94;
      if ( !v8 || (v8 & 7) != 0 )
      {
LABEL_13:
        if ( v41 && (v13 & 0xFFF) != 0 )
          goto LABEL_15;
        v27 = 2;
LABEL_69:
        v39 = v27;
        if ( !v12 )
          goto LABEL_55;
        goto LABEL_54;
      }
      v22 = (_DWORD)v46[23] & 0xF;
      if ( v22 == 5 || v22 <= 4u )
      {
        if ( ((_DWORD)v46[23] & 0xF) == 1 )
          v23 = &qword_140E37800;
        else
          v23 = (__int64 *)(v46 + 24);
        v24 = *v23;
        if ( (BYTE13(v42) & 1) != 0 )
        {
          for ( i = 0; i < 4; ++i )
          {
            if ( (*(_DWORD *)(((unsigned __int64)i << 6) + v24) & 0x40000000) != 0 )
              goto LABEL_68;
          }
        }
        else
        {
          MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
          if ( MmInternal )
            v26 = MmInternal[81];
          else
            v26 = 0LL;
          if ( (*(_DWORD *)((v26 << 6) + v24) & 0x40000000) != 0 )
          {
LABEL_68:
            v27 = 1;
            goto LABEL_69;
          }
        }
      }
      if ( KeShouldYieldProcessor() )
        goto LABEL_68;
      if ( !v12 || (*v12 & 0xFFFFFFFFFFELL) == 0 )
        goto LABEL_13;
      v39 = 1;
LABEL_54:
      MiUnlockProtoPoolPage((__int64)v12, v38[0]);
      v27 = v39;
      v12 = 0LL;
      v40 = 0LL;
LABEL_55:
      if ( (_DWORD)v7 )
      {
        v35 = MiCompleteRestrictedImageFault((__int64 *)&v42, v5, v48, v7);
        v7 = 0LL;
        if ( !v35 )
        {
LABEL_93:
          v41 = v43;
LABEL_94:
          if ( v12 )
            MiUnlockProtoPoolPage((__int64)v12, v38[0]);
          if ( (_DWORD)v7 )
          {
            MiCompleteRestrictedImageFault((__int64 *)&v42, v5, v48, v7);
            v36 = v43;
          }
          else
          {
            v36 = v41;
          }
          goto LABEL_98;
        }
        v28 = v43;
      }
      else
      {
        v28 = v41;
      }
      if ( v28 )
        MiUnlockPageTableInternal((__int64)v46, v28);
      if ( v27 == 1 )
      {
        if ( (BYTE13(v42) & 1) != 0 )
        {
          MiUnlockWorkingSetExclusive(v42, BYTE12(v42));
          BYTE13(v42) &= ~1u;
        }
        else
        {
          MiUnlockWorkingSetShared(v42, BYTE12(v42));
        }
        v31 = (*(_DWORD *)(v45 + 48) >> 10) & 0x7F;
        MiLockWorkingSetShared((__int64)v46, v29, v30);
      }
      else
      {
        v31 = (*(_DWORD *)(v45 + 48) >> 10) & 0x7F;
      }
      MiMakeSystemAddressValid(v13, v31, BYTE12(v42), 0);
      v4 = v44;
      v41 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v43 = v41;
LABEL_15:
      ++v8;
      if ( *(_QWORD *)v13 )
        goto LABEL_42;
      if ( (v11 & 0xFFF) != 0 )
      {
        if ( v12 )
          break;
      }
      else if ( v12 )
      {
        MiUnlockProtoPoolPage((__int64)v12, v38[0]);
        v12 = 0LL;
      }
      if ( (_DWORD)v7 )
      {
        v34 = MiCompleteRestrictedImageFault((__int64 *)&v42, v5, v48, v7);
        v7 = 0LL;
        if ( !v34 )
          goto LABEL_93;
        v41 = v43;
      }
      v40 = (_QWORD *)MiLockProtoPoolPage(v11, v38);
      v12 = v40;
      if ( v40 )
        break;
      v32 = (4096 - (v11 & 0xFFF)) & 0xFFFFFFF8;
      v11 += v32;
      v13 += v32;
      if ( v41 && v41 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        MiUnlockPageTableInternal((__int64)v46, v41);
        v41 = 0LL;
        v43 = 0LL;
      }
    }
    if ( (*(_QWORD *)v11 & 1) != 0 )
      break;
LABEL_42:
    v11 += 8LL;
    v13 += 8LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)v11;
      v17 = *(_QWORD *)v11;
      if ( (*(_QWORD *)v11 & 1) != 0 )
        goto LABEL_26;
      if ( (*(_QWORD *)v11 & 0xC00LL) != 0x800 )
        goto LABEL_41;
      if ( !v16 || !qword_140E2D740 || (qword_140E2D740 & v16) != 0 )
      {
        v17 = *(_QWORD *)v11;
        if ( qword_140E2D740 )
        {
          if ( (v16 & 0x10) != 0 )
            v17 = v16 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v17 = qword_140E2D748 & v16;
        }
LABEL_26:
        v18 = (v17 >> 12) & 0xFFFFFFFFFFLL;
        if ( v18 <= qword_140E2D7A0 && (*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v19 = 48 * v18 - 0x220000000000LL;
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    if ( *(_QWORD *)v11 == v16 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
    v19 = MiLockSpecialPurposeMemoryCachedPage(v19, 0);
  if ( !v19 )
    goto LABEL_41;
  if ( (*(_QWORD *)v11 & 1) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_41;
  }
  v20 = *(_DWORD *)(v19 + 16);
  v4 = --v44;
  if ( (v20 & 0x400) == 0
    || (*(_DWORD *)(v19 + 32) & 0x40000000) != 0
    || !MiImagePageOk((__int64)(v13 << 25) >> 16, v19, v15, v45) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = v40;
    v11 += 8LL;
    v13 += 8LL;
    goto LABEL_8;
  }
  v15 = 0xC000000000000000uLL;
  v21 = (v19 + 0x220000000000LL) / 48;
  *(_QWORD *)(v19 + 24) = (*(_QWORD *)(v19 + 24) + 1LL) ^ ((*(_QWORD *)(v19 + 24) + 1LL) ^ *(_QWORD *)(v19 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v21 == -1 )
  {
LABEL_41:
    v4 = v44;
    v11 += 8LL;
    v12 = v40;
    v13 += 8LL;
    goto LABEL_8;
  }
  v48[v7] = v21;
  if ( !(_DWORD)v7 )
  {
    v5 = v13;
    v7 = 1LL;
    goto LABEL_41;
  }
  v7 = (unsigned int)(v7 + 1);
  if ( (_DWORD)v7 != 16 )
    goto LABEL_41;
  MiUnlockProtoPoolPage((__int64)v40, v38[0]);
  v40 = 0LL;
  v37 = (unsigned int)MiCompleteRestrictedImageFault((__int64 *)&v42, v5, v48, 0x10u) == 0;
  v36 = v43;
  if ( !v37 )
  {
    v7 = 0LL;
    v41 = v43;
    goto LABEL_41;
  }
LABEL_98:
  if ( v36 )
    MiUnlockPageTableInternal((__int64)v46, v36);
  if ( (BYTE13(v42) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v42, BYTE12(v42));
  else
    MiUnlockWorkingSetShared(v42, BYTE12(v42));
}
