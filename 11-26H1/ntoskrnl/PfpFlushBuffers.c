/*
 * XREFs of PfpFlushBuffers @ 0x1409F13D0
 * Callers:
 *     PfTLoggingWorker @ 0x1409F1030 (PfTLoggingWorker.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14049D998 (MmFreeAccessPfnBuffer.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     PfpReturnAccessBuffer @ 0x1404D2BC0 (PfpReturnAccessBuffer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PfpFlushEventBuffers @ 0x1409F12C0 (PfpFlushEventBuffers.c)
 *     PfpLogPageAccess @ 0x1409F1770 (PfpLogPageAccess.c)
 *     PfpCopyEvent @ 0x1409F1E30 (PfpCopyEvent.c)
 *     PfTReplaceCurrentBuffer @ 0x1409F2068 (PfTReplaceCurrentBuffer.c)
 */

char __fastcall PfpFlushBuffers(_SLIST_HEADER *a1)
{
  _QWORD *v2; // rbx
  char *v3; // rdi
  int v4; // r12d
  PSLIST_ENTRY i; // rax
  _QWORD *p_Next; // rdx
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 **v12; // rsi
  __int64 v13; // rax
  __int64 *v15; // r15
  __int64 v16; // r12
  unsigned __int64 Alignment; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  void *v26; // [rsp+30h] [rbp-88h]
  __int128 v27; // [rsp+38h] [rbp-80h] BYREF
  __int128 v28; // [rsp+48h] [rbp-70h] BYREF
  __int64 v29; // [rsp+58h] [rbp-60h] BYREF
  int v30; // [rsp+60h] [rbp-58h]
  int v31; // [rsp+64h] [rbp-54h]
  __int64 v32; // [rsp+68h] [rbp-50h] BYREF
  int v33; // [rsp+70h] [rbp-48h]
  __int64 v34; // [rsp+74h] [rbp-44h]
  _BYTE v35[12]; // [rsp+7Ch] [rbp-3Ch]

  v27 = 0LL;
  DWORD2(v27) = 1;
  v28 = 0LL;
  v2 = 0LL;
  v26 = 0LL;
  v3 = 0LL;
  v4 = PfpFlushEventBuffers(a1);
  if ( v4 < 0 )
    return 0;
  for ( i = RtlpInterlockedFlushSList(a1 + 48); i; v2 = p_Next )
  {
    p_Next = &i->Next;
    i = i->Next;
    *p_Next = v2;
  }
  while ( v2 )
  {
    v7 = (__int64)v2;
    v34 = 0LL;
    v2 = (_QWORD *)*v2;
    *(_QWORD *)&v35[4] = 0LL;
    v8 = MEMORY[0xFFFFF78000000004] * HIDWORD(*(_QWORD *)(v7 + 24));
    v9 = (MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 24)) >> 24;
    HIDWORD(v34) = HIDWORD(stru_140E66D40.WriteOperationCount)
                 + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(*(_QWORD *)(v7 + 16))) << 8)
                   + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 16)) >> 24)) >> 10);
    v33 = HIDWORD(v34);
    *(_QWORD *)v35 = HIDWORD(stru_140E66D40.WriteOperationCount) + (unsigned int)(((v8 << 8) + v9) >> 10);
    v32 = 163851LL;
    PfpCopyEvent(a1, &v32);
    if ( *(int *)(v7 + 8) > 1
      || (*((_QWORD *)&v28 + 1) = *(unsigned int *)(v7 + 12),
          *(_QWORD *)&v28 = 94215LL,
          PfpCopyEvent(a1, &v28),
          *(int *)(v7 + 8) > 1) )
    {
      v15 = *(__int64 **)(v7 + 32);
      v12 = (__int64 **)(v7 + 32);
LABEL_23:
      if ( (unsigned __int64)v15 <= *(_QWORD *)(v7 + 40) )
      {
        v16 = *v15;
        do
        {
          Alignment = a1[7].Alignment;
          v18 = *(unsigned int *)(Alignment + 16);
          if ( (unsigned int)(v18 + 1) <= *(_DWORD *)(Alignment + 20) )
          {
            *(_DWORD *)(Alignment + 16) = v18 + 1;
            v19 = 2 * v18;
            v20 = (Alignment + 31) & 0xFFFFFFFFFFFFFFF8uLL;
            v21 = *(_QWORD *)(v20 + 8 * v19) & 0xFFFFFFFFFFFC6007uLL;
            *(_QWORD *)(v20 + 8 * v19 + 8) = v16;
            v4 = 0;
            *(_QWORD *)(v20 + 8 * v19) = v21 | 0x6007;
            ++v15;
            goto LABEL_23;
          }
        }
        while ( (unsigned int)PfTReplaceCurrentBuffer(a1, (char *)&a1[5].HeaderX64 + 8) != -1073741823 );
        v4 = -1073741670;
        *v12 = v15;
LABEL_16:
        if ( *(int *)(v7 + 8) <= 1 )
        {
          memmove(v26, v3, ((char *)*v12 - v3) & 0xFFFFFFFFFFFFFFF8uLL);
          *v12 -= (v3 - (_BYTE *)v26) >> 3;
        }
        v13 = PfpPartitionToParent((__int64)a1);
        PfpReturnAccessBuffer(v13, v7);
        break;
      }
LABEL_27:
      v22 = (unsigned int)*(_QWORD *)(v7 + 24);
      v23 = HIDWORD(*(_QWORD *)(v7 + 24));
      v31 = 0;
      v29 = 147463LL;
      v30 = HIDWORD(stru_140E66D40.WriteOperationCount)
          + ((((MEMORY[0xFFFFF78000000004] * v23) << 8) + (((unsigned __int64)MEMORY[0xFFFFF78000000004] * v22) >> 24)) >> 10);
      PfpCopyEvent(a1, &v29);
      MmFreeAccessPfnBuffer((_QWORD *)v7, 0);
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 56);
      v11 = *(_QWORD *)(v7 + 48);
      if ( !v10 || *(_QWORD *)(v10 + 464) && *(_QWORD *)(v10 + 504) )
      {
        v3 = (char *)(v7 + 64);
        v26 = (void *)(v7 + 64);
        v12 = (__int64 **)(v7 + 32);
        while ( v3 < (char *)*v12 )
        {
          if ( !PfpLogPageAccess((_DWORD)a1, v10, (_DWORD)v3, (unsigned int)&v27, v11, 0) )
          {
            v4 = -1073741432;
            goto LABEL_16;
          }
          v3 += 8;
        }
        goto LABEL_27;
      }
      MmFreeAccessPfnBuffer((_QWORD *)v7, 0);
    }
  }
  if ( v4 >= 0 )
    return 1;
  if ( !v2 )
    return 0;
  do
  {
    v2 = (_QWORD *)*v2;
    v24 = PfpPartitionToParent((__int64)a1);
    PfpReturnAccessBuffer(v24, v25);
  }
  while ( v2 );
  return 0;
}
