/*
 * XREFs of ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180040B0C
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026690 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x180040F34 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800412A0 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800428E0 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampActStart(struct _HAM_ACTIVITY *a1)
{
  struct _EVENT_DATA_DESCRIPTOR *v2; // rcx
  char v3; // r12
  struct _EVENT_DATA_DESCRIPTOR v4; // xmm1
  struct _EVENT_DATA_DESCRIPTOR v5; // xmm0
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned int v9; // eax
  struct _HAM_DEPENDENCY_GROUP *v10; // rbx
  __int64 v11; // rbx
  __int16 v12; // r15
  int v13; // esi
  ULONGLONG Ptr; // rbx
  unsigned __int64 v15; // rsi
  char *v16; // r9
  ULONG *p_Size; // r8
  __int64 v18; // r11
  ULONGLONG v19; // r10
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  char v24; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  ULONGLONG v31; // [rsp+90h] [rbp-70h]
  unsigned int v32; // [rsp+98h] [rbp-68h]
  char v33; // [rsp+9Ch] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D0h] [rbp-30h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]

  memset_0(v28, 0, 0x40uLL);
  v2 = (struct _EVENT_DATA_DESCRIPTOR *)*((_QWORD *)a1 + 66);
  v3 = *((_BYTE *)a1 + 562);
  v4 = v2[2];
  v27 = *v2;
  UserData = v27;
  v5 = v2[1];
  *((_BYTE *)a1 + 562) = 3;
  v36 = v4;
  v35 = v5;
  if ( v2 )
  {
    HampFreeHeap(v2);
    *((_QWORD *)a1 + 66) = 0LL;
  }
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_BYTE *)a1 + 563) = 6;
  HampHostUpdateActivityState(v6);
  v7 = *((_QWORD *)a1 + 10);
  v8 = *((_DWORD *)a1 + 97);
  *((_QWORD *)a1 + 64) = *(_QWORD *)(v7 + 808);
  v9 = *(_DWORD *)(v7 + 840);
  v10 = *(struct _HAM_DEPENDENCY_GROUP **)(v7 + 704);
  if ( v9 <= v8 )
    v9 = v8;
  *(_DWORD *)(v7 + 840) = v9;
  if ( v10 )
  {
    HampDepGroupAcquireLockExclusive(v10);
    HampDepGroupQueueWorker(v10);
    HampDepGroupReleaseLockExclusive(v10);
  }
  BitMapHeader = 0LL;
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *(_QWORD *)(v7 + 664) |= 0x400000000000000uLL;
  if ( *((_QWORD *)a1 + 8) )
  {
    v28[0] = *((_QWORD *)a1 + 5);
    v28[1] = 0LL;
    v29 = 0;
    if ( *(_DWORD *)(v7 + 560) == 2 )
    {
      v11 = *(_QWORD *)(v7 + 792);
      HampAppAcquireLockShared((struct _HAM_APPLICATION *)v11);
      v12 = *(_WORD *)(v11 + 616);
      v13 = (*(_DWORD *)(v11 + 620) >> 5) & 7;
      HampAppReleaseLockShared((struct _HAM_APPLICATION *)v11);
      if ( v13 == 4 )
      {
        v13 = 3;
      }
      else if ( v13 != 3 && (*(_QWORD *)(v7 + 664) & 0x2000000000000LL) == 0 )
      {
        v13 = 3;
      }
    }
    else
    {
      v13 = 4;
      v12 = 6912;
    }
    Ptr = v27.Ptr;
    LOWORD(v32) = v12;
    v31 = v27.Ptr;
    v32 = (v13 << 16) | v32 & 0xFFF8FFFF;
    v30 = *((_QWORD *)a1 + 64);
    v25 = 0LL;
    RtlQueryPerformanceFrequency(&v25);
    v15 = v25;
    v16 = &v33;
    p_Size = &UserData.Size;
    v18 = 5LL;
    do
    {
      v19 = *(_QWORD *)p_Size;
      if ( *(_QWORD *)p_Size )
      {
        v27.Ptr = 0LL;
        v20 = -1LL;
        if ( is_mul_ok(v19 - Ptr, 0x3E8uLL) )
          v20 = 1000 * (v19 - Ptr);
        v21 = v20 / v15;
        if ( v20 / v15 > 0xFFFFFFFF )
          LODWORD(v21) = -1;
      }
      else
      {
        LODWORD(v21) = -1;
      }
      *(_DWORD *)v16 = v21;
      p_Size += 2;
      v16 += 4;
      Ptr = v19;
      --v18;
    }
    while ( v18 );
    HampSystemIssueActivityCallback(
      *((struct _HAM_CLIENT_CONTEXT **)a1 + 8),
      (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v28,
      0);
    v22 = *(_QWORD *)(v7 + 664);
    if ( (v22 & 0x100000000000LL) != 0 && (v22 & 0x30000) != 0 )
      HampActRequestStopEx(a1, 2LL, 5LL, 0LL, *(unsigned __int16 *)(v7 + 664), 0, 0LL);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v27.Ptr = *((_QWORD *)a1 + 5);
    v23 = v3;
    v39 = &v23;
    v24 = 3;
    v37 = &v24;
    v40 = 1LL;
    v36.Ptr = (ULONGLONG)&v27;
    *(&BitMapHeader.SizeOfBitMap + 1) = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v38 = 1LL;
    *(_QWORD *)&v36.Size = 8LL;
    BitMapHeader.SizeOfBitMap = 184549376;
    BitMapHeader.Buffer = (PULONG)8;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v35.Ptr = (ULONGLONG)&unk_1800CFD85;
    UserData.Reserved = 2;
    *(_QWORD *)&v35.Size = 0x100000037LL;
    LODWORD(v25) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, (PCEVENT_DESCRIPTOR)&BitMapHeader, 0LL, 0LL, 5u, &UserData);
  }
}
