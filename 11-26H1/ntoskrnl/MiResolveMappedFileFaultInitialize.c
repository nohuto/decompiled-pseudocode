/*
 * XREFs of MiResolveMappedFileFaultInitialize @ 0x140371768
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 *     MiGetSessionIdForVa @ 0x14038FF58 (MiGetSessionIdForVa.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiCheckAndSkipVirtualizationFaultIo @ 0x1407041B8 (MiCheckAndSkipVirtualizationFaultIo.c)
 */

__int64 __fastcall MiResolveMappedFileFaultInitialize(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  unsigned int v7; // edi
  unsigned __int64 v8; // r15
  int v9; // ebp
  unsigned __int64 v10; // rcx
  __int64 SubsectionFromPte; // rax
  __int64 v12; // r10
  unsigned __int8 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 result; // rax
  unsigned __int64 v17; // rax
  char v18; // al
  __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 *v23; // [rsp+70h] [rbp+18h]

  v4 = *a1;
  v23 = (unsigned __int64 *)a1[1];
  v5 = *v23;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v7 = -1073741663;
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(v4 + 16);
  v7 = 0;
  v8 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = 2;
  v10 = 0LL;
  if ( (v6 & 1) != 0 )
  {
    v18 = *(_BYTE *)v8;
    if ( *(_BYTE *)v8 == 5 )
    {
      if ( (unsigned int)MiCheckAndSkipVirtualizationFaultIo(
                           v6 & 0xFFFFFFFFFFFFFFFEuLL,
                           *(_QWORD *)v4,
                           0LL,
                           *(_QWORD *)&CLFS_LSN_NULL_EXT) )
      {
        v7 = -1073741801;
        goto LABEL_11;
      }
      v10 = 0LL;
    }
    else if ( v18 == 1 )
    {
      v10 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_DWORD *)(v8 + 80) & 0x100) != 0 )
        goto LABEL_11;
      v9 = 0;
      a1[22] = *(_QWORD *)(v8 + 112);
    }
    else if ( v18 == 2 )
    {
      v10 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  a1[4] = v10;
  *((_DWORD *)a1 + 22) = v9;
  if ( (*(_BYTE *)(v4 + 69) & 0x10) != 0 )
  {
    v7 = -1073740748;
    goto LABEL_11;
  }
  if ( (v5 & 0x400) != 0 )
  {
    SubsectionFromPte = MiGetSubsectionFromPte(v5);
  }
  else
  {
    v17 = v5;
    if ( qword_140E2D8C0 )
    {
      if ( (v5 & 0x10) != 0 )
        v17 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v17 = v5 & qword_140E2D8C8;
    }
    SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16));
    a1[5] = a3;
  }
  v14 = *(_QWORD *)SubsectionFromPte;
  v15 = SubsectionFromPte;
  if ( ((unsigned __int8)*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & v13) == 0 )
  {
    a1[8] = v14;
    *((_DWORD *)a1 + 35) = -1;
    a2 = *(_QWORD *)(SubsectionFromPte + 8);
    if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x20000) == 0
      || (*(_DWORD *)(v14 + 56) & 8) == 0
      || (*(_DWORD *)(v14 + 56) & 0x20) == 0 )
    {
LABEL_8:
      if ( (unsigned __int64)v23 < a2
                                 + 8 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v15 + 44) - *(_DWORD *)(v15 + 52)) )
      {
        a1[12] = v15;
        a1[13] = a2;
        a1[14] = v5;
        result = 3221225494LL;
        a1[15] = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v14 + 60) & 0x3FF));
        return result;
      }
      goto LABEL_16;
    }
    *((_DWORD *)a1 + 35) = MiGetSessionIdForVa(v12);
    if ( v20 >= 0xFFFF800000000000uLL )
    {
      if ( v19 )
      {
        if ( *(_BYTE *)v8 == 1 || *(_BYTE *)v8 == 3 || *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
        {
LABEL_39:
          v21 = *(_QWORD *)(v4 + 16);
          if ( (v21 & 1) == 0 || *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
          {
LABEL_16:
            v7 = -1073741819;
            goto LABEL_11;
          }
        }
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v6, 0LL) )
      {
        goto LABEL_39;
      }
    }
    SharedProtos = MiGetSharedProtos(v14, *((unsigned int *)a1 + 35), v15);
    a2 = *(_QWORD *)(SharedProtos + 72);
    a1[6] = SharedProtos;
    goto LABEL_8;
  }
  v7 = -1073741818;
LABEL_11:
  LOBYTE(a2) = 17;
  MiUnlockProtoPoolPage(a1[2], a2, a3);
  return v7;
}
