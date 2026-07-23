/*
 * XREFs of MmGetPageFileInformation @ 0x140B14EF4
 * Callers:
 *     MmManagePartitionQueryPageFileInformation @ 0x140883898 (MmManagePartitionQueryPageFileInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall MmGetPageFileInformation(ULONG **a1, int *a2, unsigned int a3, char a4, int a5, unsigned int *a6)
{
  int v7; // r15d
  unsigned int v8; // r14d
  unsigned int *v9; // r12
  int *v10; // rdi
  ULONG *v11; // rax
  ULONG *v12; // rsi
  unsigned int v13; // edx
  int *v14; // rcx
  __int64 v15; // rax
  unsigned int *v16; // r10
  unsigned int v17; // r15d
  unsigned __int16 v18; // r14
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  size_t v24; // r8
  unsigned int v25; // eax
  int v26; // r12d
  unsigned __int16 v27; // r15
  void *v28; // rdx
  _WORD *v29; // rcx
  unsigned int v30; // edi
  char v32[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v33; // [rsp+22h] [rbp-96h]
  unsigned int v34; // [rsp+24h] [rbp-94h]
  unsigned int v35; // [rsp+28h] [rbp-90h]
  int v36; // [rsp+2Ch] [rbp-8Ch]
  ULONG *v37; // [rsp+30h] [rbp-88h]
  void *v38; // [rsp+38h] [rbp-80h]
  __int128 v39; // [rsp+40h] [rbp-78h]
  __int128 Src; // [rsp+50h] [rbp-68h] BYREF
  __int128 v41; // [rsp+60h] [rbp-58h]
  unsigned __int64 v42; // [rsp+70h] [rbp-48h]
  unsigned int *v43; // [rsp+78h] [rbp-40h]

  v39 = 0LL;
  Src = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v32[0] = 0;
  v7 = a5 != 0 ? 40 : 32;
  v34 = v7;
  v8 = 0;
  v9 = a6;
  *a6 = 0;
  v10 = a2;
  v11 = MiPartitionObjectToPartition(a1, 0, v32);
  v12 = v11;
  v37 = v11;
  if ( !v11 )
    return 3221226656LL;
  v13 = v11[5574];
  v35 = v13;
  v14 = a2;
  if ( a4 )
  {
    RtlWriteULongToUser(a2 + 1, 0);
    v14 = a2;
    v13 = v35;
  }
  else
  {
    a2[1] = 0;
  }
  v15 = 0LL;
  while ( 1 )
  {
    v36 = v15;
    if ( (unsigned int)v15 >= v13 )
      break;
    v16 = *(unsigned int **)&v12[2 * v15 + 5576];
    v43 = v16;
    if ( (v16[43] & 0x50) == 0 )
    {
      v10 = (int *)((char *)v14 + v8);
      v17 = v8 + v7;
      if ( v17 <= v8 || v17 > a3 )
      {
        *v9 = v17;
LABEL_39:
        v30 = -1073741820;
        goto LABEL_34;
      }
      v39 = 0LL;
      v33 = *((_WORD *)v16 + 32);
      LOWORD(v39) = v33;
      v18 = v33 + 2;
      WORD1(v39) = v33 + 2;
      v38 = (char *)v10 + v34;
      *((_QWORD *)&v39 + 1) = v38;
      do
      {
        v19 = *v16;
        v20 = v16[3];
        v21 = v16[4];
        v22 = v16[2];
        v23 = v16[1];
      }
      while ( v20 >= *v16 );
      LODWORD(Src) = 0;
      DWORD1(Src) = v19;
      DWORD2(Src) = v19 - v20 - 2;
      HIDWORD(Src) = v21;
      v42 = __PAIR64__(v23, v22);
      v41 = v39;
      v24 = 40LL;
      if ( !a5 )
        v24 = 32LL;
      if ( a4 )
        RtlCopyToUser(v10, &Src, v24);
      else
        RtlCopyVolatileMemory(v10, &Src, v24);
      v25 = (v18 + 7) & 0xFFFFFFF8;
      v8 = v25 + v17;
      if ( v25 + v17 <= v17 || v8 > a3 )
      {
        *v9 = v8;
        goto LABEL_39;
      }
      v26 = v25 + v34;
      v27 = v33 >> 1;
      v28 = (void *)*((_QWORD *)v43 + 9);
      if ( a4 )
        RtlCopyToUser(v38, v28, v33);
      else
        RtlCopyVolatileMemory(v38, v28, v33);
      v29 = (char *)v38 + 2 * v27;
      if ( a4 )
        RtlWriteUShortToUser(v29, 0);
      else
        *v29 = 0;
      if ( a4 )
        RtlWriteULongToUser(v10, v26);
      else
        *v10 = v26;
      v9 = a6;
      v7 = v34;
      v13 = v35;
    }
    v15 = (unsigned int)(v36 + 1);
    v14 = a2;
  }
  if ( a4 )
    RtlWriteULongToUser(v10, 0);
  else
    *v10 = 0;
  *v9 = v8;
  v30 = 0;
LABEL_34:
  if ( v32[0] )
    PsDereferencePartition(*((_QWORD *)v12 + 32));
  return v30;
}
