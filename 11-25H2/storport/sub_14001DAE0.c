/*
 * XREFs of sub_14001DAE0 @ 0x14001DAE0
 * Callers:
 *     sub_14001B960 @ 0x14001B960 (sub_14001B960.c)
 *     sub_14001C020 @ 0x14001C020 (sub_14001C020.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_14001EC90 @ 0x14001EC90 (sub_14001EC90.c)
 *     sub_140068DC0 @ 0x140068DC0 (sub_140068DC0.c)
 *     sub_140068E6C @ 0x140068E6C (sub_140068E6C.c)
 *     sub_140068F10 @ 0x140068F10 (sub_140068F10.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401AA8A0 @ 0x1401AA8A0 (sub_1401AA8A0.c)
 *     sub_1401AC250 @ 0x1401AC250 (sub_1401AC250.c)
 */

__int64 __fastcall sub_14001DAE0(__int64 *a1, int a2)
{
  __int64 result; // rax
  PIRP *v5; // rsi
  void *v6; // rcx
  char v7; // r12
  __int64 v8; // r15
  int v9; // r8d
  int v10; // r9d
  void *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  unsigned int v15; // r12d
  _DWORD *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rcx
  KIRQL v25; // r12
  __int64 (__fastcall *v26)(_QWORD *); // r13
  unsigned __int64 v27; // r14
  _QWORD **v28; // rsi
  _QWORD *i; // rdi
  __int64 v30; // rax
  int v31; // eax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rsi
  unsigned int v35; // edi
  struct _KINTERRUPT *v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  PKINTERRUPT *v39; // r14
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // r14
  __int64 Pool2; // rax
  __int64 v45; // rax
  PMDL Mdl; // rax
  PVOID MappedSystemVa; // rcx
  struct _MDL *v48; // rdx
  PIRP Irp; // rax
  __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  char v53; // [rsp+20h] [rbp-89h]
  unsigned int v54; // [rsp+40h] [rbp-69h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-61h] BYREF
  _BYTE Dst[8]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v57; // [rsp+68h] [rbp-41h]
  char v58; // [rsp+BCh] [rbp+13h]
  char v59; // [rsp+BDh] [rbp+14h]
  __int64 (__fastcall *v60)(__int64, unsigned __int64); // [rsp+110h] [rbp+67h] BYREF
  int v61; // [rsp+118h] [rbp+6Fh]
  char v62; // [rsp+120h] [rbp+77h]
  char v63; // [rsp+128h] [rbp+7Fh]

  v61 = a2;
  memset_0(Dst, 0, 0x60uLL);
  result = sub_14001D220(a1, a2, (__int64)Dst);
  if ( (int)result < 0 )
    return result;
  v54 = 0;
  v5 = (PIRP *)(a1 + 1);
  LOBYTE(v60) = 0;
  v62 = 0;
  v63 = 0;
  while ( 1 )
  {
    v6 = (void *)a1[3];
    v7 = 1;
    v8 = *a1;
    if ( v6 )
    {
      sub_1401AA8A0(v6);
      goto LABEL_5;
    }
    if ( *(_DWORD *)v8 == 1314275652 )
    {
      v40 = v8 + 274;
    }
    else
    {
      v40 = v8 + 482;
      if ( *(_DWORD *)v8 != 1094997074 )
        v40 = 98LL;
    }
    v41 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)v40 == 1 )
    {
      Pool2 = ExAllocatePool2(64LL, 184LL, 1918067026LL);
      v42 = Pool2;
      if ( !Pool2 && v41 )
      {
        sub_14008D9B8(v41, 64, 184, 1918067026, 0x80000000);
        a1[3] = 0LL;
        goto LABEL_25;
      }
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 20) = 0;
        *(_DWORD *)(Pool2 + 12) = 1;
        *(_DWORD *)(Pool2 + 56) = 1;
        *(_WORD *)Pool2 = 8;
        *(_BYTE *)(Pool2 + 2) = 40;
        *(_DWORD *)(Pool2 + 8) = 1397899864;
        *(_DWORD *)(Pool2 + 16) = 184;
        *(_WORD *)(Pool2 + 36) = 2;
        *(_DWORD *)(Pool2 + 52) = 128;
        *(_WORD *)(Pool2 + 128) = 1;
        *(_DWORD *)(Pool2 + 132) = 4;
        *(_DWORD *)(Pool2 + 120) = 144;
        a1[3] = Pool2;
        goto LABEL_5;
      }
    }
    else
    {
      v42 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
      if ( !v42 && v41 )
        sub_14008D9B8(v41, 64, 88, 1918067026, 0x80000000);
    }
    a1[3] = v42;
    if ( !v42 )
      goto LABEL_25;
LABEL_5:
    if ( !a1[4] )
    {
      v45 = sub_1400143E0(64LL, 18LL, 1314087250LL, *(_QWORD *)(v8 + 8));
      a1[4] = v45;
      if ( !v45 )
        goto LABEL_25;
      v7 = 0;
    }
    if ( *v5 )
    {
      IoReuseIrp(*v5, -1073741823);
    }
    else
    {
      Irp = IoAllocateIrp(1, 0);
      *v5 = Irp;
      if ( !Irp )
        goto LABEL_25;
    }
    v11 = (void *)a1[5];
    if ( v11 )
    {
      if ( *((_DWORD *)a1 + 12) >= 0x24u )
        goto LABEL_10;
      ExFreePoolWithTag((PVOID)a1[5], 0x32316152u);
    }
    *((_DWORD *)a1 + 12) = 512;
    v43 = *(_QWORD *)(v8 + 8);
    v11 = (void *)ExAllocatePool2(64LL, 512LL, 842096978LL);
    if ( !v11 && v43 )
      sub_14008D9B8(v43, 64, 512, 842096978, 0x80000000);
    a1[5] = (__int64)v11;
    if ( !v11 )
      break;
LABEL_10:
    v12 = a1[2];
    if ( v12 )
    {
      if ( (*(_BYTE *)(v12 + 10) & 0x20) != 0 )
      {
        v48 = (struct _MDL *)a1[2];
        MappedSystemVa = *(PVOID *)(v12 + 24);
        goto LABEL_90;
      }
    }
    else
    {
      Mdl = IoAllocateMdl(v11, *((_DWORD *)a1 + 12), 0, 0, 0LL);
      a1[2] = (__int64)Mdl;
      if ( !Mdl )
        goto LABEL_25;
      if ( (Mdl->MdlFlags & 0x20) != 0 )
      {
        MappedSystemVa = Mdl->MappedSystemVa;
        v48 = Mdl;
LABEL_90:
        MmUnmapLockedPages(MappedSystemVa, v48);
      }
    }
    v13 = a1[4];
    if ( v13 && v7 )
    {
      *(_OWORD *)v13 = 0LL;
      *(_WORD *)(v13 + 16) = 0;
    }
    v14 = (void *)a1[5];
    if ( v14 )
      memset_0(v14, 0, *((unsigned int *)a1 + 12));
    v15 = v54;
    v16 = (_DWORD *)*a1;
    v17 = a1[3];
    if ( v54 < 0x24 )
      v15 = 36;
    v18 = a1[5];
    v19 = 0LL;
    if ( *v16 == 1314275652 )
    {
      v20 = (__int64)v16 + 274;
    }
    else if ( *v16 == 1094997074 )
    {
      v20 = (__int64)v16 + 482;
    }
    else
    {
      v20 = 98LL;
    }
    LOBYTE(v10) = BYTE2(v61);
    LOBYTE(v9) = BYTE1(v61);
    LOBYTE(v18) = a2;
    sub_1401AC250(v17, v18, v9, v10, a1[5], v15, *(_BYTE *)v20);
    if ( *(_BYTE *)v20 == 1 )
    {
      *(_QWORD *)(v17 + 104) = 0LL;
      v50 = 0LL;
      *(_DWORD *)(v17 + 24) |= 0x80110u;
      *(_QWORD *)(v17 + 64) = a1[5];
      *(_DWORD *)(v17 + 60) = v15;
      if ( *(_DWORD *)(v17 + 56) )
      {
        while ( 1 )
        {
          v51 = *(unsigned int *)(v17 + 4 * v50 + 120);
          v19 = 0LL;
          if ( (unsigned int)v51 >= 0x80 )
          {
            v52 = *(unsigned int *)(v17 + 16);
            if ( (unsigned int)v51 <= (unsigned int)v52 && *(_DWORD *)(v51 + v17) == 64 && v51 + 40 <= v52 )
              break;
          }
          v50 = (unsigned int)(v50 + 1);
          if ( (unsigned int)v50 >= *(_DWORD *)(v17 + 56) )
            goto LABEL_24;
        }
        v19 = (unsigned int)v51 + v17 + 24;
        *(_QWORD *)((unsigned int)v51 + v17 + 16) = a1[4];
        *(_BYTE *)((unsigned int)v51 + v17 + 9) = 18;
      }
    }
    else
    {
      *(_QWORD *)(v17 + 56) = 0LL;
      v19 = v17 + 72;
      *(_QWORD *)(v17 + 32) = a1[4];
      *(_BYTE *)(v17 + 11) = 18;
      v21 = a1[5];
      *(_DWORD *)(v17 + 12) |= 0x80110u;
      *(_QWORD *)(v17 + 24) = v21;
      *(_DWORD *)(v17 + 16) = v15;
    }
LABEL_24:
    *(_BYTE *)(v19 + 1) &= ~1u;
    *(_BYTE *)(v19 + 2) = 0;
    if ( (int)sub_14001EC90((_DWORD)a1, (unsigned int)Dst, (int)a1 + 8, v17, v53) < 0 )
      goto LABEL_25;
    sub_140068DC0(a1, v17, Dst, &v60, &v54);
    if ( !(_BYTE)v60 || v62 || (int)sub_140068E6C(a1, a1 + 1, v54) < 0 )
      goto LABEL_25;
    v63 = 1;
    v62 = 1;
  }
  *((_DWORD *)a1 + 12) = 0;
LABEL_25:
  if ( v63 )
    sub_140068F10(a1);
  v22 = v57;
  v23 = *a1;
  if ( v58 )
  {
    v24 = *a1;
    memset(&LockHandle, 0, sizeof(LockHandle));
    v25 = sub_14001E1F0(v24);
    v26 = *(__int64 (__fastcall **)(_QWORD *))(v23 + 192);
    v27 = (unsigned __int8)BYTE2(*(_DWORD *)(v22 + 104)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(v22 + 104) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(v22 + 104))) << 8);
    v60 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 200);
    v28 = (_QWORD **)(*(_QWORD *)(v23 + 184)
                    + 16LL
                    * ((*(unsigned int (__fastcall **)(unsigned __int64))(v23 + 208))(v27) % *(_DWORD *)(v23 + 172)));
    for ( i = *v28; ; i = (_QWORD *)*i )
    {
      if ( i == v28 )
        goto LABEL_34;
      v30 = v26(i);
      v31 = v60(v30, v27);
      if ( !v31 )
        break;
      if ( v31 < 0 )
        goto LABEL_34;
    }
    v32 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
      goto LABEL_75;
    v33 = (_QWORD *)i[1];
    if ( (_QWORD *)*v33 != i )
      goto LABEL_75;
    *v33 = v32;
    v32[1] = v33;
    --*(_DWORD *)(v23 + 168);
LABEL_34:
    if ( *(_BYTE *)(v23 + 4369) )
    {
      v34 = *(_QWORD *)(v23 + 4352);
      if ( *(_DWORD *)(v23 + 4336) == 2 )
      {
        v35 = *(_DWORD *)(v34 + 4) - 1;
        if ( *(_DWORD *)(v34 + 4) != 1 )
        {
          v39 = (PKINTERRUPT *)(v34 + 48LL * v35 + 24);
          do
          {
            KeReleaseInterruptSpinLock(*v39, *(_BYTE *)v34);
            v39 -= 6;
            --v35;
          }
          while ( v35 );
        }
      }
      v36 = *(struct _KINTERRUPT **)(v34 + 24);
LABEL_38:
      KeReleaseInterruptSpinLock(v36, v25);
    }
    else
    {
      v36 = *(struct _KINTERRUPT **)(v23 + 848);
      if ( v36 )
        goto LABEL_38;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 136), &LockHandle);
    v37 = *(_QWORD *)(v22 + 64);
    if ( *(_QWORD *)(v37 + 8) != v22 + 64 || (v38 = *(_QWORD **)(v22 + 72), *v38 != v22 + 64) )
LABEL_75:
      __fastfail(3u);
    *v38 = v37;
    *(_QWORD *)(v37 + 8) = v38;
    --*(_DWORD *)(v23 + 160);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeCancelTimer((PKTIMER)(v22 + 1184));
    *(_DWORD *)(v57 + 744) = 0;
  }
  return v59 == 0 ? 0xC000000E : 0;
}
