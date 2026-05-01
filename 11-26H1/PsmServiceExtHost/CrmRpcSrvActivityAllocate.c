/*
 * XREFs of CrmRpcSrvActivityAllocate @ 0x180034760
 * Callers:
 *     <none>
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x18001CCD0 (_tlgCreate1Sz_wchar_t.c)
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 *     CrmLogSrvActivityAllocateStart @ 0x180034B7C (CrmLogSrvActivityAllocateStart.c)
 *     CrmRegistrationAddActivity @ 0x180034C10 (CrmRegistrationAddActivity.c)
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     CrmActivityStart @ 0x180034D80 (CrmActivityStart.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvActivityAllocate(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        const wchar_t *a5,
        _QWORD *a6)
{
  const wchar_t *v7; // rdi
  __int64 v11; // r14
  int v12; // ebx
  unsigned __int64 *v13; // rax
  __int64 v14; // rbx
  PVOID Heap; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  int v18; // ebx
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  __int64 v21; // rax
  int v23; // eax
  int v24; // ecx
  unsigned int i; // edx
  const wchar_t *v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  _DWORD Key[6]; // [rsp+68h] [rbp-98h] BYREF
  char v33[32]; // [rsp+80h] [rbp-80h] BYREF
  UUID *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  _QWORD *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  char v45[16]; // [rsp+F0h] [rbp-10h] BYREF
  const wchar_t **v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]

  v7 = a5;
  v26 = a5;
  v30 = a6;
  v11 = -1LL;
  CrmLogSrvActivityAllocateStart();
  v12 = *(_DWORD *)(a2 + 24);
  if ( v12 >= 309 || a3 > 0x640 || (v12 == 307) != (a3 == 1301) )
    goto LABEL_29;
  Key[2] = 0;
  v27 = 0LL;
  v28 = 0;
  Key[0] = v12;
  Key[1] = a3;
  v13 = (unsigned __int64 *)bsearch(Key, &CrmActivityToPolicyTable, 0x5DuLL, 0xCuLL, CrmActivityPolicyTableCompare);
  if ( !v13 )
  {
    if ( (unsigned int)(v12 - 9) > 0x7C || a3 - 301 > 0x7C )
      goto LABEL_27;
    v27 = __PAIR64__(a3, v12);
    v13 = &v27;
    v28 = 17;
  }
  v31 = *v13;
  if ( (_DWORD)v31 != v12 )
  {
LABEL_27:
    v18 = -1073741811;
    goto LABEL_20;
  }
  v14 = 3LL;
  if ( a3 == 1301 )
  {
    if ( a4 )
    {
      v24 = 0;
      for ( i = 0; i < 8; ++i )
      {
        if ( *(_DWORD *)(a4 + 4LL * i) >= 3u )
          goto LABEL_29;
        if ( *(_DWORD *)(a4 + 4LL * i) != 2 )
          v24 = 1;
      }
      if ( v24 )
        goto LABEL_11;
    }
LABEL_29:
    v18 = -1073741811;
    goto LABEL_20;
  }
  if ( a4 )
    goto LABEL_27;
LABEL_11:
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x178uLL);
  v16 = (__int64)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x178uLL);
    *(_QWORD *)(v16 + 40) = -1LL;
    CempLockInitialize(v16 + 80);
    v17 = (_QWORD *)(v16 + 272);
    *(_QWORD *)(v16 + 16) = 1LL;
    *(_QWORD *)(v16 + 48) = a2;
    *(_DWORD *)(v16 + 124) = 4;
    *(_QWORD *)(v16 + 168) = -1LL;
    *(_QWORD *)(v16 + 176) = -1LL;
    *(_DWORD *)(v16 + 184) = 3;
    *(_QWORD *)(v16 + 216) = -1LL;
    do
    {
      *(v17 - 3) = -1LL;
      *v17++ = -1LL;
      --v14;
    }
    while ( v14 );
    v18 = CrmActivityStart(v16, a2, a3, a4, (void *)(a2 + 72));
    if ( v18 < 0 )
    {
      CrmActivityDereference((volatile signed __int64 *)v16);
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 16)) <= 1 )
        __fastfail(0xEu);
      CrmRegistrationAddActivity(a2, v16);
      v19 = *(_QWORD *)(v16 + 56);
      v20 = v30;
      v18 = 0;
      *a1 = v19;
      *v20 = *(_QWORD *)(v16 + 144);
      v21 = _InterlockedDecrement64((volatile signed __int64 *)(v16 + 16));
      v11 = v19;
      if ( v21 <= 0 )
      {
        if ( v21 )
          __fastfail(0xEu);
        CrmActivityCleanup(v16);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v16);
      }
    }
  }
  else
  {
    v18 = -1073741801;
  }
  v7 = v26;
LABEL_20:
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 && (qword_1800E1300 & 1) == qword_1800E1300 )
  {
    v35 = 16LL;
    v34 = &Uuid;
    v29 = *(_DWORD *)(a2 + 24);
    v36 = &v29;
    v38 = a2 + 72;
    v23 = *(unsigned __int8 *)(a2 + 73);
    v37 = 4LL;
    v40 = 0;
    LODWORD(v30) = a3;
    v42 = 4LL;
    v39 = 4 * v23 + 8;
    v41 = &v30;
    v43 = &v27;
    v27 = v11;
    v44 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v45, v7);
    LODWORD(v26) = v18;
    v46 = &v26;
    v47 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBE54, 0LL, 0LL, 9, v33);
  }
  if ( v18 >= 0 )
    return 0;
  return (unsigned int)v18;
}
