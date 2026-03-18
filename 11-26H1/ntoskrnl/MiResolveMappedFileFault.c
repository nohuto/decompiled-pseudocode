/*
 * XREFs of MiResolveMappedFileFault @ 0x14036F5D0
 * Callers:
 *     MiIssueFlowThroughFault @ 0x14038B1F8 (MiIssueFlowThroughFault.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x14036EBF0 (MiBuildMdlForMappedFileFault.c)
 *     MiResolveMappedFileFaultGetClusterInfo @ 0x14036F7FC (MiResolveMappedFileFaultGetClusterInfo.c)
 *     MiResolveMappedFileFaultInitialize @ 0x14036F9B8 (MiResolveMappedFileFaultInitialize.c)
 *     MiPickClusterForMappedFileFault @ 0x14036FB98 (MiPickClusterForMappedFileFault.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiResolveMappedFileFaultGetCopyExtents @ 0x1406F7854 (MiResolveMappedFileFaultGetCopyExtents.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiResolveMappedFileFault(__int64 a1, _SLIST_ENTRY *a2, __int64 a3, struct _SLIST_ENTRY **a4)
{
  __int64 result; // rax
  __int64 v9; // r14
  struct _SLIST_ENTRY *v10; // rsi
  PSLIST_ENTRY v11; // rdx
  _BYTE *v12; // rbx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rbx
  unsigned __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // [rsp+28h] [rbp-D8h]
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  _SLIST_ENTRY *v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  struct _SLIST_ENTRY **v27; // [rsp+68h] [rbp-98h]
  _QWORD v28[3]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+A0h] [rbp-60h]
  unsigned int v32; // [rsp+A4h] [rbp-5Ch]
  _SLIST_ENTRY *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  unsigned int v39; // [rsp+DCh] [rbp-24h]
  char v40; // [rsp+E0h] [rbp-20h]
  char v41[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v43; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v44; // [rsp+158h] [rbp+58h] BYREF
  __int64 v45; // [rsp+160h] [rbp+60h]

  v44 = 0LL;
  v43 = 0LL;
  memset_0(v28, 0, 0x98uLL);
  v24 = a1;
  v25 = a2;
  v27 = a4;
  v26 = a3;
  *a4 = 0LL;
  result = MiResolveMappedFileFaultInitialize(&v24);
  if ( (_DWORD)result != -1073741802 )
    return result;
  v31 = 0;
  v29 = 0;
  if ( (*(_DWORD *)(v30 + 56) & 0x30000000) != 0x10000000 || (MiResolveMappedFileFaultGetCopyExtents(&v24), v29 != 2) )
    MiResolveMappedFileFaultGetClusterInfo(&v24);
  result = MiResolveMappedFileFaultGetInPageSupport(&v24);
  if ( (int)result >= 0 )
  {
    v9 = -1LL;
    v42 = -1LL;
    if ( !v40 )
    {
LABEL_6:
      v10 = ListEntry;
      v11 = ListEntry;
      v12 = (_BYTE *)v28[0];
      v13 = v34;
      v14 = v28[0];
      *((_QWORD *)&ListEntry[10].Next + 1) = v35;
      v11[15].Next = v25;
      v11[12].Next = v33;
      *((_DWORD *)&v11[11].Next + 2) = v38;
      v15 = v36;
      v11[10].Next = (_SLIST_ENTRY *)a3;
      v45 = v15;
      v16 = MiPickClusterForMappedFileFault(v15, (_DWORD)v11, v14, v13, v9, (__int64)&v44, (__int64)&v43);
      v23 = v9;
      v17 = v45;
      v18 = MiBuildMdlForMappedFileFault((__int64)v10, v44, v43, v45, v16, v23, v32, v12, a1, (__int64)v41);
      v19 = v18;
      if ( v18 != v16 )
      {
        v20 = v16 - v18;
        MiReturnResident(v17, v20);
        MiReturnCommit(v17, v20, 0);
      }
      if ( v19 )
      {
        v21 = v39;
        v22 = v28[1];
        *a4 = v10;
        MiFinishMdlForMappedFileFault((__int64)v10, *(_QWORD *)(a1 + 16), v19, v22, v21);
        return 3221435187LL;
      }
      else
      {
        MiUnlockProtoPoolPage(a3, 0x11u);
        MiFreeInPageSupportBlock(v10);
        return 3221225495LL;
      }
    }
    result = MiResolveMappedFileFaultByCopying(&v24);
    if ( (int)result >= 0 )
    {
      v9 = v42;
      goto LABEL_6;
    }
  }
  if ( (_DWORD)result == -1073532109 )
    *a4 = ListEntry;
  return result;
}
