/*
 * XREFs of MiResolveMappedFileFault @ 0x140371380
 * Callers:
 *     MiIssueFlowThroughFault @ 0x14038CFA8 (MiIssueFlowThroughFault.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 *     MiResolveMappedFileFaultGetClusterInfo @ 0x1403715AC (MiResolveMappedFileFaultGetClusterInfo.c)
 *     MiResolveMappedFileFaultInitialize @ 0x140371768 (MiResolveMappedFileFaultInitialize.c)
 *     MiPickClusterForMappedFileFault @ 0x140371948 (MiPickClusterForMappedFileFault.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 *     MiResolveMappedFileFaultGetCopyExtents @ 0x1406FC4C4 (MiResolveMappedFileFaultGetCopyExtents.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiResolveMappedFileFault(__int64 a1, _SLIST_ENTRY *a2, __int64 a3, _SLIST_ENTRY **a4)
{
  __int64 result; // rax
  __int64 v9; // r14
  _SLIST_ENTRY *v10; // rsi
  PSLIST_ENTRY v11; // rdx
  _BYTE *v12; // rbx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  unsigned __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // r9
  __int64 v25; // [rsp+28h] [rbp-D8h]
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  _SLIST_ENTRY *v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  _SLIST_ENTRY **v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[3]; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+A0h] [rbp-60h]
  unsigned int v34; // [rsp+A4h] [rbp-5Ch]
  _SLIST_ENTRY *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  unsigned int v41; // [rsp+DCh] [rbp-24h]
  char v42; // [rsp+E0h] [rbp-20h]
  char v43[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v45; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v46; // [rsp+158h] [rbp+58h] BYREF
  __int64 v47; // [rsp+160h] [rbp+60h]

  v46 = 0LL;
  v45 = 0LL;
  memset_0(v30, 0, 0x98uLL);
  v26 = a1;
  v27 = a2;
  v29 = a4;
  v28 = a3;
  *a4 = 0LL;
  result = MiResolveMappedFileFaultInitialize(&v26);
  if ( (_DWORD)result != -1073741802 )
    return result;
  v33 = 0;
  v31 = 0;
  if ( (*(_DWORD *)(v32 + 56) & 0x30000000) != 0x10000000 || (MiResolveMappedFileFaultGetCopyExtents(&v26), v31 != 2) )
    MiResolveMappedFileFaultGetClusterInfo(&v26);
  result = MiResolveMappedFileFaultGetInPageSupport(&v26);
  if ( (int)result >= 0 )
  {
    v9 = -1LL;
    v44 = -1LL;
    if ( !v42 )
    {
LABEL_6:
      v10 = ListEntry;
      v11 = ListEntry;
      v12 = (_BYTE *)v30[0];
      v13 = v36;
      v14 = v30[0];
      *((_QWORD *)&ListEntry[10].Next + 1) = v37;
      v11[15].Next = v27;
      v11[12].Next = v35;
      *((_DWORD *)&v11[11].Next + 2) = v40;
      v15 = v38;
      v11[10].Next = (_SLIST_ENTRY *)a3;
      v47 = v15;
      v16 = MiPickClusterForMappedFileFault(v15, (_DWORD)v11, v14, v13, v9, (__int64)&v46, (__int64)&v45);
      v25 = v9;
      v17 = v47;
      v18 = MiBuildMdlForMappedFileFault((__int64)v10, v46, v45, v47, v16, v25, v34, v12, a1, (__int64)v43);
      v21 = v18;
      if ( v18 != v16 )
      {
        v22 = v16 - v18;
        MiReturnResident(v17, v22);
        MiReturnCommit(v17, v22, 0);
      }
      if ( v21 )
      {
        v23 = v41;
        v24 = v30[1];
        *a4 = v10;
        MiFinishMdlForMappedFileFault((__int64)v10, *(_QWORD *)(a1 + 16), v21, v24, v23);
        return 3221435187LL;
      }
      else
      {
        LOBYTE(v19) = 17;
        MiUnlockProtoPoolPage(a3, v19, v20);
        MiFreeInPageSupportBlock(v10);
        return 3221225495LL;
      }
    }
    result = MiResolveMappedFileFaultByCopying(&v26);
    if ( (int)result >= 0 )
    {
      v9 = v44;
      goto LABEL_6;
    }
  }
  if ( (_DWORD)result == -1073532109 )
    *a4 = ListEntry;
  return result;
}
