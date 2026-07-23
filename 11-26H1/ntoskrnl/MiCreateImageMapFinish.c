/*
 * XREFs of MiCreateImageMapFinish @ 0x140A624DC
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiInitializeImageHeaderPage @ 0x14042A784 (MiInitializeImageHeaderPage.c)
 *     IoIsDeviceEjectable @ 0x1404C8944 (IoIsDeviceEjectable.c)
 *     MiEnableImageDirectMap @ 0x1406FE504 (MiEnableImageDirectMap.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiDeleteImageCreationMdls @ 0x140A63794 (MiDeleteImageCreationMdls.c)
 */

__int64 __fastcall MiCreateImageMapFinish(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rdi
  ULONG *v3; // r9
  __int64 v4; // r13
  unsigned int v5; // ebx
  __int16 v6; // r11
  __int64 v7; // r12
  bool v8; // r15
  __int64 v9; // rax
  __int16 v10; // r10
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int16 v14; // r10
  _DWORD *v15; // rdx
  unsigned __int64 v16; // r14
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 result; // rax
  int v21; // eax
  ULONG *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int16 v25; // dx
  unsigned int v26; // r8d
  __int16 v27; // r9
  __int16 v28; // [rsp+40h] [rbp-30h]
  ULONG *v29; // [rsp+48h] [rbp-28h] BYREF
  int v30; // [rsp+50h] [rbp-20h]
  __int16 v31; // [rsp+54h] [rbp-1Ch]
  __int16 v32; // [rsp+56h] [rbp-1Ah]
  _QWORD v33[2]; // [rsp+58h] [rbp-18h] BYREF

  v1 = *(__int64 **)(a1 + 56);
  v2 = a1;
  v29 = *(ULONG **)(a1 + 16);
  v3 = v29;
  v4 = *v1;
  *(_DWORD *)(*(_QWORD *)(*v1 + 56) + 64LL) = *(_DWORD *)(a1 + 172);
  *((_DWORD *)v1 + 15) ^= ((unsigned __int16)*((_DWORD *)v1 + 15) ^ *(_WORD *)v3) & 0x3FF;
  v5 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0x100) != 0 )
    *(_BYTE *)(*(_QWORD *)(v4 + 56) + 51LL) |= 0x10u;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 144);
  v8 = 0;
  if ( !**(_QWORD **)(a1 + 72) && !*(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 12) & 4) == 0 && (v5 & 0x4000) == 0 )
    v8 = *(_DWORD *)(v7 + 24) < 0x1000u;
  v9 = *(_QWORD *)a1;
  LOBYTE(a1) = *(_DWORD *)(a1 + 12);
  v10 = *(_WORD *)(v2 + 170);
  v33[0] = *(_QWORD *)v2;
  v28 = v10;
  if ( (a1 & 2) == 0 )
  {
    if ( IoIsDeviceEjectable(*(_QWORD *)(v9 + 8)) )
    {
LABEL_29:
      LOBYTE(a1) = v11 | v13;
      *(_DWORD *)(v2 + 12) = v11 | v13;
      goto LABEL_11;
    }
    v15 = (_DWORD *)(v12 + 52);
    if ( (v14 & 0x400) != 0 && (*v15 & 1) != 0 || (LOBYTE(a1) = v13, (v14 & 0x800) != 0) && (*v15 & 0x10) != 0 )
    {
      v11 = 2;
      goto LABEL_29;
    }
  }
LABEL_11:
  v16 = *(_QWORD *)(v4 + 16);
  if ( v16 )
  {
    v21 = MiChargeCommit(v3, *(_QWORD *)(v4 + 16), 0);
    v6 = 0;
    if ( !v21 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 57;
      return 3221225773LL;
    }
    v22 = v29;
    *(_QWORD *)(v2 + 96) = v16;
    _InterlockedAdd64((volatile signed __int64 *)v22 + 2935, v16);
    LODWORD(a1) = *(_DWORD *)(v2 + 12);
  }
  v17 = *((_DWORD *)v1 + 14);
  if ( (v17 & 0x20000) != 0 && (a1 & 4) == 0 && (*(_DWORD *)(v7 + 20) & 0x1000000) == 0 )
    *((_DWORD *)v1 + 14) = v17 | 8;
  v18 = *(_QWORD *)(v2 + 80);
  if ( v18 )
  {
    MiInitializeImageProtos((__int64)v1, v18);
    v6 = 0;
  }
  if ( v8 )
  {
    MiInitializeImageHeaderPage((__int64)v1, *(_QWORD *)(v2 + 88), *(unsigned int *)(v7 + 24));
    v6 = 0;
  }
  if ( *(_WORD *)(v7 + 48) == 267 )
    *(_WORD *)(v4 + 12) |= 0x8000u;
  if ( (*(_DWORD *)(v2 + 12) & 2) != 0 )
  {
    v23 = *((_DWORD *)v1 + 14) | 0x800;
    *((_DWORD *)v1 + 14) = v23;
    if ( (v5 & 0x80040) != 0 )
      *((_DWORD *)v1 + 14) = v23 | 0x40000;
    v19 = v33[0];
    if ( (PerfGlobalGroupMask[0] & 4) != 0 )
    {
      v24 = *(_QWORD *)(v33[0] + 8LL);
      v29 = *(ULONG **)(v33[0] + 24LL);
      v32 = v6;
      v31 = v28;
      v30 = *(_DWORD *)(v24 + 52);
      v32 = v6;
      if ( (v5 & 0x80000) != 0 )
        v32 = 1;
      if ( IoIsDeviceEjectable(v24) )
      {
        v25 |= v27;
        v32 = v25;
      }
      if ( (v5 & 0x40) != 0 )
        v32 = v26 | v25;
      v33[1] = 16LL;
      v33[0] = &v29;
      EtwTraceKernelEvent((int)v33, 1, v26, 617, 5249026);
    }
  }
  else
  {
    v19 = v33[0];
  }
  if ( (v5 & 0x4000) == 0 )
    return 0LL;
  result = MiEnableImageDirectMap(
             v19,
             v1,
             v7,
             *(void **)(v2 + 64),
             HIWORD(v5) & 1,
             (v5 >> 17) & 1,
             (*(_DWORD *)(v2 + 12) >> 1) & 1);
  if ( (int)result >= 0 )
  {
    if ( (v1[7] & 0x30000000) == 0x10000000 )
    {
      MiDeleteImageCreationMdls(*(PMDL *)(v2 + 72));
      *(_QWORD *)(v2 + 72) = 0LL;
    }
    *(_QWORD *)(v2 + 64) = 0LL;
    return 0LL;
  }
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 58;
  return result;
}
