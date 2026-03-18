/*
 * XREFs of MiResolveMappedFileFaultInitialize @ 0x14036F9B8
 * Callers:
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedProtos @ 0x140372BD8 (MiGetSharedProtos.c)
 *     MiGetSessionIdForVa @ 0x14038E1A8 (MiGetSessionIdForVa.c)
 *     KeInvalidAccessAllowed @ 0x1403A6D10 (KeInvalidAccessAllowed.c)
 *     MiCheckAndSkipVirtualizationFaultIo @ 0x1406FF4E8 (MiCheckAndSkipVirtualizationFaultIo.c)
 */

__int64 __fastcall MiResolveMappedFileFaultInitialize(__int64 *a1)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // edi
  unsigned __int64 v6; // r15
  int v7; // ebp
  unsigned __int64 v8; // rcx
  __int64 SubsectionFromPte; // rax
  __int64 v10; // r10
  unsigned __int8 v11; // r11
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 *v23; // [rsp+70h] [rbp+18h]

  v2 = *a1;
  v23 = (unsigned __int64 *)a1[1];
  v3 = *v23;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v5 = -1073741663;
    goto LABEL_11;
  }
  v4 = *(_QWORD *)(v2 + 16);
  v5 = 0;
  v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = 2;
  v8 = 0LL;
  if ( (v4 & 1) != 0 )
  {
    v18 = *(_BYTE *)v6;
    if ( *(_BYTE *)v6 == 5 )
    {
      if ( (unsigned int)MiCheckAndSkipVirtualizationFaultIo(
                           v4 & 0xFFFFFFFFFFFFFFFEuLL,
                           *(_QWORD *)v2,
                           0LL,
                           *(_QWORD *)&CLFS_LSN_NULL_EXT) )
      {
        v5 = -1073741801;
        goto LABEL_11;
      }
      v8 = 0LL;
    }
    else if ( v18 == 1 )
    {
      v8 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_DWORD *)(v6 + 80) & 0x100) != 0 )
        goto LABEL_11;
      v7 = 0;
      a1[22] = *(_QWORD *)(v6 + 112);
    }
    else if ( v18 == 2 )
    {
      v8 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  a1[4] = v8;
  *((_DWORD *)a1 + 22) = v7;
  if ( (*(_BYTE *)(v2 + 69) & 0x10) != 0 )
  {
    v5 = -1073740748;
    goto LABEL_11;
  }
  if ( (v3 & 0x400) != 0 )
  {
    SubsectionFromPte = MiGetSubsectionFromPte(v3);
  }
  else
  {
    v16 = v3;
    if ( qword_140E2D740 )
    {
      if ( (v3 & 0x10) != 0 )
        v16 = v3 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v16 = v3 & qword_140E2D748;
    }
    SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16));
    a1[5] = v17;
  }
  v12 = *(_QWORD *)SubsectionFromPte;
  v13 = SubsectionFromPte;
  if ( ((unsigned __int8)*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & v11) == 0 )
  {
    a1[8] = v12;
    *((_DWORD *)a1 + 35) = -1;
    v14 = *(_QWORD *)(SubsectionFromPte + 8);
    if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x20000) == 0
      || (*(_DWORD *)(v12 + 56) & 8) == 0
      || (*(_DWORD *)(v12 + 56) & 0x20) == 0 )
    {
LABEL_8:
      if ( (unsigned __int64)v23 < v14
                                 + 8 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v13 + 44) - *(_DWORD *)(v13 + 52)) )
      {
        a1[12] = v13;
        a1[13] = v14;
        a1[14] = v3;
        result = 3221225494LL;
        a1[15] = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v12 + 60) & 0x3FF));
        return result;
      }
      goto LABEL_16;
    }
    *((_DWORD *)a1 + 35) = MiGetSessionIdForVa(v10);
    if ( v20 >= 0xFFFF800000000000uLL )
    {
      if ( v19 )
      {
        if ( *(_BYTE *)v6 == 1 || *(_BYTE *)v6 == 3 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
        {
LABEL_39:
          v21 = *(_QWORD *)(v2 + 16);
          if ( (v21 & 1) == 0 || *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
          {
LABEL_16:
            v5 = -1073741819;
            goto LABEL_11;
          }
        }
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v4, 0LL) )
      {
        goto LABEL_39;
      }
    }
    SharedProtos = MiGetSharedProtos(v12, *((unsigned int *)a1 + 35), v13);
    v14 = *(_QWORD *)(SharedProtos + 72);
    a1[6] = SharedProtos;
    goto LABEL_8;
  }
  v5 = -1073741818;
LABEL_11:
  MiUnlockProtoPoolPage(a1[2], 0x11u);
  return v5;
}
