/*
 * XREFs of MiDispatchFault @ 0x1403A5BC0
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 *     MiPropagateFaultPacketFields @ 0x1403A76F0 (MiPropagateFaultPacketFields.c)
 *     MiComputeMaximumFaultCluster @ 0x1403A7780 (MiComputeMaximumFaultCluster.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiAccessCheck @ 0x1403A8730 (MiAccessCheck.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiCheckProtoAccess @ 0x14041EF60 (MiCheckProtoAccess.c)
 *     MiGetVirtualFaultPageInfo @ 0x140528228 (MiGetVirtualFaultPageInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDispatchFault(__int128 *a1, __int64 a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  char v18; // si
  unsigned int v19; // r12d
  __int64 v20; // rax
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 v22; // r13
  int v23; // eax
  int v24; // ecx
  char v25; // cl
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  int valid; // eax
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned int v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h]
  _SLIST_ENTRY *v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  _QWORD *SystemArgument1; // [rsp+70h] [rbp-90h]
  __int128 *v42; // [rsp+78h] [rbp-88h]
  _QWORD *v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+C0h] [rbp-40h]
  __int128 v48; // [rsp+D0h] [rbp-30h]
  __int128 v49; // [rsp+E0h] [rbp-20h]
  __int128 v50; // [rsp+F0h] [rbp-10h]
  __int128 v51; // [rsp+100h] [rbp+0h]
  __int128 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+20h]

  v43 = a3;
  v40 = a2;
  v42 = a1;
  if ( a3 )
    *a3 = 0LL;
  v3 = *a1;
  v4 = a1[1];
  v38 = 0LL;
  v44 = v3;
  v5 = a1[2];
  v45 = v4;
  v6 = a1[3];
  v46 = v5;
  v7 = a1[4];
  v47 = v6;
  v8 = a1[5];
  v48 = v7;
  v9 = a1[6];
  v49 = v8;
  v10 = a1[8];
  v50 = v9;
  v11 = *((_QWORD *)a1 + 18);
  v51 = a1[7];
  v52 = v10;
  v53 = v11;
  v12 = *((_QWORD *)&v47 + 1);
  v35 = BYTE8(v44) & 2;
  v39 = *((_QWORD *)&v47 + 1);
  v13 = (((unsigned __int64)v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = 0;
  if ( (v45 & 1) != 0
    && (*(_BYTE *)(v45 & 0xFFFFFFFFFFFFFFFEuLL) == 5
     || *(_BYTE *)(v45 & 0xFFFFFFFFFFFFFFFEuLL) == 2
     || *(_BYTE *)(v45 & 0xFFFFFFFFFFFFFFFEuLL) == 1) )
  {
    v14 = v45 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v14 = 0LL;
  }
  v37 = 0LL;
  SystemArgument1 = 0LL;
  if ( (unsigned __int64)v44 < 0x7FFFFFFF0000LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex != 1 )
      SystemArgument1 = CurrentThread[1].SchedulerApc.SystemArgument1;
  }
  v34 = MiComputeMaximumFaultCluster(&v44, 0LL);
  v16 = v34;
  if ( v34 > 1 )
    BYTE5(v48) |= 8u;
  v17 = v45;
  BYTE5(v48) &= ~4u;
  v18 = v45;
  v19 = v33;
  while ( 1 )
  {
    v20 = v40;
    if ( !v40 )
    {
      if ( (BYTE5(v48) & 0x10) != 0
        && (*(_DWORD *)(v12 + 188)
         || (*(_DWORD *)(v12 + 184) & 0x10) != 0
         && (unsigned __int64)(*(_QWORD *)(v12 + 136) + 1LL) >= *(_QWORD *)(v12 + 128)
         || (BYTE5(v48) & 1) != 0
         || MiWorkingSetIsContended(v12, 0)
         || (unsigned int)MiPageTableLockIsContended(v12, ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
         || KeShouldYieldProcessor()
         || SystemArgument1 && SystemArgument1[4]) )
      {
        break;
      }
      PteShadow = *(_QWORD *)v13;
      v22 = v13;
      v36 = v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v13, PteShadow);
      if ( !PteShadow )
      {
        v24 = -1073740748;
        goto LABEL_26;
      }
      if ( (PteShadow & 1) != 0 )
      {
        valid = MiValidFault(&v44, PteShadow);
        goto LABEL_54;
      }
      v33 = 256;
      if ( (PteShadow & 0x400) != 0 )
      {
        if ( *((_QWORD *)&v50 + 1) )
          goto LABEL_24;
        v31 = MiCheckProtoAccess(v13, &v33);
        if ( !v31 )
        {
          v17 = v45;
          v24 = -1073741819;
          v18 = v45;
          goto LABEL_27;
        }
        LODWORD(v32) = v33;
        *((_QWORD *)&v50 + 1) = v31;
      }
      else
      {
        if ( (BYTE5(v48) & 0x10) == 0 )
          goto LABEL_18;
        v32 = (PteShadow >> 5) & 0x1F;
      }
      if ( (_DWORD)v32 != 256 )
      {
        if ( (v32 & 0xFFFFFFF8) == 0x10 && (BYTE5(v48) & 0x10) != 0 )
        {
          v24 = -1073741819;
          goto LABEL_26;
        }
        v24 = MiAccessCheck(v13, v45, 0);
        if ( v24 )
          goto LABEL_26;
      }
      if ( (PteShadow & 0x400) == 0 )
      {
LABEL_18:
        if ( (PteShadow & 0x800) != 0 )
        {
          valid = MiResolveTransitionFault(&v44, v13, 0LL, v35, &v38);
        }
        else
        {
          if ( (PteShadow & 8) == 0 )
          {
            v18 = v45;
            if ( (v45 & 1) != 0 )
            {
              v17 = v45;
              if ( *(_BYTE *)(v45 & 0xFFFFFFFFFFFFFFFEuLL) != 1
                && *(_BYTE *)(v45 & 0xFFFFFFFFFFFFFFFEuLL) != 3
                && *(_BYTE *)(v45 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
              {
                goto LABEL_22;
              }
            }
            else
            {
              if ( !(unsigned __int8)KeInvalidAccessAllowed(v45, 0LL) )
              {
LABEL_22:
                v23 = MiResolveDemandZeroFault((unsigned __int64 *)&v44, v13, 0LL, v35, (__int64 *)&v36);
LABEL_25:
                v22 = v36;
                v24 = v23;
LABEL_26:
                v17 = v45;
                v18 = v45;
LABEL_27:
                v16 = v34;
                goto LABEL_28;
              }
              v17 = v45;
              v18 = v45;
            }
            if ( ((v18 & 1) == 0 || *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 6)
              && (unsigned __int64)v44 >= 0xFFFF800000000000uLL )
            {
              v33 = (PteShadow >> 5) & 0x1F;
              if ( ((PteShadow >> 5) & 0x18) == 0x10 )
              {
                v24 = -1073741819;
                goto LABEL_27;
              }
            }
            goto LABEL_22;
          }
          valid = MiResolvePageFileFault((__int64)&v44, (__int64 *)v13, 0LL, &v38);
        }
LABEL_54:
        v24 = valid;
        goto LABEL_26;
      }
LABEL_24:
      v23 = MiResolveProtoPteFault(&v44, v35, &v38, &v36);
      goto LABEL_25;
    }
    v40 = 0LL;
    v22 = v13 + 8 * (v20 - 1);
    v24 = 0;
LABEL_28:
    if ( (BYTE5(v48) & 0x10) == 0 )
      v19 = v24;
    if ( v24 < 0
      && ((v18 & 1) == 0
       || *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 5
       || (*(_DWORD *)(v14 + 56) & 0x100) == 0
       || v24 == -1073741802
       || v24 == -1073532109
       || (v49 & 0x40) != 0
       || (_QWORD)v52
       || *((_QWORD *)&v51 + 1)
       || *(_QWORD *)(v14 + 48)) )
    {
      break;
    }
    if ( (BYTE5(v48) & 0x10) == 0 )
    {
      v25 = BYTE5(v48) | 0x10;
      BYTE5(v48) |= 0x10u;
      if ( (v18 & 1) == 0
        || *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 2 && *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
      {
        BYTE5(v48) = v25 | 0x20;
      }
    }
    if ( v22 < v13 )
      v22 = v13;
    v26 = ((__int64)(v22 - v13) >> 3) + 1;
    v13 = v22 + 8;
    v27 = v26 + v37;
    *((_QWORD *)&v45 + 1) = v22 + 8;
    v37 = v27;
    v28 = v44 + (v26 << 12);
    *(_QWORD *)&v44 = v28;
    if ( v27 >= v16 )
      break;
    if ( (v18 & 1) != 0 && *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 5 && (*(_DWORD *)(v14 + 56) & 0x100) == 0 )
    {
      if ( !_bittest64((const signed __int64 *)MiGetVirtualFaultPageInfo(v14, v28 - 4096, 2LL), 0x34u) )
        break;
      v27 = v37;
    }
    if ( (BYTE5(v48) & 4) != 0 )
    {
      BYTE5(v48) &= ~4u;
      v34 = MiComputeMaximumFaultCluster(&v44, v16 - v27);
      v16 = v34;
      if ( v34 == 1 && (BYTE5(v48) & 8) != 0 )
        BYTE5(v48) &= ~8u;
      v17 = v45;
      v37 = 0LL;
      v18 = v45;
    }
    *((_QWORD *)&v50 + 1) = 0LL;
    if ( (v18 & 1) != 0 )
    {
      v12 = v39;
      if ( *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 2 || *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        continue;
    }
    *((_QWORD *)&v44 + 1) &= ~2uLL;
    v12 = v39;
    v35 = 0LL;
  }
  v33 = v19;
  MiPropagateFaultPacketFields(v42, &v44);
  if ( v19 == -1073532109 )
    *v43 = v38;
  return v33;
}
