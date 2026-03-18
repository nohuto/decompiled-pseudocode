/*
 * XREFs of MiFlushSubsection @ 0x1403C1390
 * Callers:
 *     MiFlushSection @ 0x1404ADA20 (MiFlushSection.c)
 * Callees:
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiFlushWaitForReadInProgress @ 0x140337838 (MiFlushWaitForReadInProgress.c)
 *     MiReadyFlushMdlToWrite @ 0x14036CDF4 (MiReadyFlushMdlToWrite.c)
 *     MiExpandFlushMdl @ 0x140396EAC (MiExpandFlushMdl.c)
 *     MiUnlockFlushMdl @ 0x1403C18C4 (MiUnlockFlushMdl.c)
 *     MiIssueAsynchronousFlush @ 0x1403C1974 (MiIssueAsynchronousFlush.c)
 *     MiGetAsynchronousFlushEntry @ 0x1403C1A94 (MiGetAsynchronousFlushEntry.c)
 *     MiWaitForPageWriteCompletion @ 0x1403C2610 (MiWaitForPageWriteCompletion.c)
 *     MiHandleSynchronousFlushError @ 0x14046D9FC (MiHandleSynchronousFlushError.c)
 *     MiFlushFileOnlyMdl @ 0x140507F90 (MiFlushFileOnlyMdl.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiFlushSubsection(__int64 a1)
{
  int v2; // edx
  char v3; // r14
  __int64 v4; // rax
  __int64 v5; // r12
  ULONG_PTR v6; // rdi
  unsigned int ByteOffset; // r15d
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  struct _MDL *v11; // rbx
  bool v12; // cf
  __int64 v13; // rcx
  __int64 v14; // r9
  char v15; // dl
  char v16; // al
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  ULONG v21; // eax
  char v22; // r8
  __int64 v23; // r8
  struct _MDL *Next; // rax
  unsigned __int64 v25; // r12
  __int64 AsynchronousFlushEntry; // rax
  __int64 v27; // r15
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  unsigned int v31; // ecx
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  char v33; // [rsp+41h] [rbp-BFh]
  char v34; // [rsp+42h] [rbp-BEh]
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h]
  __int64 v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  int v40; // [rsp+68h] [rbp-98h]
  __int128 v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  _BYTE P[192]; // [rsp+90h] [rbp-70h] BYREF

  memset_0(P, 0, 0xB8uLL);
  v2 = *(_DWORD *)(a1 + 80);
  v3 = 17;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 0LL;
  v6 = *(_QWORD *)a1;
  v42 = *(__int64 **)(a1 + 32);
  v39 = *v42;
  ByteOffset = 16;
  v35 = 16;
  v43 = v4;
  result = *(_QWORD *)(a1 + 8);
  v36 = result;
  v34 = 2 * (v2 & 2);
  v9 = *(_QWORD *)(a1 + 24);
  v38 = 0;
  v32 = 17;
  v33 = 0;
  v37 = 0LL;
  v40 = v2 & 8;
  if ( v9 )
  {
    AsynchronousFlushEntry = MiGetAsynchronousFlushEntry();
    v10 = AsynchronousFlushEntry;
    if ( !AsynchronousFlushEntry )
    {
      result = *(_DWORD *)(a1 + 80) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(a1 + 80) = result;
      return result;
    }
    v11 = *(struct _MDL **)(AsynchronousFlushEntry + 72);
    result = v36;
  }
  else
  {
    v10 = 0LL;
    v11 = (struct _MDL *)P;
  }
  v11->Next = 0LL;
  v11->MdlFlags = 0;
  v11->StartVa = 0LL;
  *(_QWORD *)&v11->ByteCount = 0LL;
LABEL_4:
  while ( 2 )
  {
    v12 = v6 < result;
    do
    {
      if ( !v12 )
        goto LABEL_28;
      if ( (v6 & 0xFFF) == 0 || v3 == 17 )
      {
        if ( v3 != 17 )
          MiUnlockProtoPoolPage(v5, v3);
        v18 = MiCheckProtoPtePageState(v39, v6, 0, &v32);
        v3 = v32;
        v37 = v18;
        v5 = v18;
        if ( !v18 )
        {
          v6 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          if ( v11->ByteCount )
            goto LABEL_44;
LABEL_40:
          result = v36;
          goto LABEL_4;
        }
      }
      v13 = MiLockLeafPage((unsigned __int64 *)v6, 0);
      if ( v13 )
      {
        v15 = *(_BYTE *)(v13 + 34);
        if ( (v15 & 8) != 0 )
        {
          if ( !v11->ByteCount )
          {
            if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
            {
              result = 0x7FFFFFFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v6 = v36;
              *(_DWORD *)(a1 + 80) |= 0x10u;
              goto LABEL_28;
            }
            LOBYTE(v14) = v3;
            MiWaitForPageWriteCompletion(v13, v39, v5, v14);
            goto LABEL_51;
          }
        }
        else
        {
          if ( (v15 & 0x10) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_12;
          }
          if ( (v15 & 0x20) == 0 )
          {
            v17 = MiAddPageToFlushMdl((__int64)v11, v13, v39, ByteOffset, *(_QWORD *)v6);
            if ( v17 >= 1 )
            {
              MiUnlockProtoPoolPage(v37, v3);
              v3 = 17;
              v32 = 17;
              if ( v17 == 3 )
                goto LABEL_32;
              if ( v17 == 2 || ByteOffset == 1 || v6 + 8 >= v36 )
              {
                v6 += 8LL;
                goto LABEL_32;
              }
              v27 = MiExpandFlushMdl((unsigned int *)v11, ByteOffset + ((__int64)(v36 - v6) >> 3) - 1);
              if ( !v27 )
              {
                ByteOffset = v11->ByteOffset;
                v6 += 8LL;
                v35 = ByteOffset;
                goto LABEL_32;
              }
              if ( v11 != (struct _MDL *)P && (!v10 || v11 != (struct _MDL *)(v10 + 80)) )
                ExFreePoolWithTag(v11, 0);
              v11 = (struct _MDL *)v27;
              if ( v10 )
                *(_QWORD *)(v10 + 72) = v27;
              ByteOffset = *(_DWORD *)(v27 + 44);
              v6 += 8LL;
              v35 = ByteOffset;
LABEL_39:
              v5 = v37;
              goto LABEL_40;
            }
            goto LABEL_20;
          }
          if ( !v11->ByteCount )
          {
            MiFlushWaitForReadInProgress(v13, v5, v3);
LABEL_51:
            v3 = 17;
            v32 = 17;
            goto LABEL_40;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_44;
      }
LABEL_12:
      if ( v11->ByteCount )
      {
        v16 = 1;
        v33 = 1;
        goto LABEL_14;
      }
LABEL_20:
      v16 = v33;
LABEL_14:
      v6 += 8LL;
      if ( v16 )
        goto LABEL_44;
      result = v36;
      v5 = v37;
      v12 = v6 < v36;
    }
    while ( v6 != v36 );
    if ( !v11->ByteCount )
      continue;
    break;
  }
LABEL_44:
  if ( v3 != 17 )
  {
    MiUnlockProtoPoolPage(v37, v3);
    v3 = 17;
    v32 = 17;
  }
LABEL_32:
  *(_QWORD *)(a1 + 64) += v11->ByteCount;
  v20 = (__int64)v42;
  v21 = v11->ByteCount << 12;
  v33 = 0;
  v22 = v40;
  v11->ByteCount = v21;
  v23 = MiReadyFlushMdlToWrite((__int64)v11, v20, v22);
  if ( v10 )
  {
    v19 = MiIssueAsynchronousFlush(
            *(_QWORD *)(a1 + 16),
            v10,
            *(_QWORD *)(a1 + 24),
            v43,
            v23,
            v34,
            *(_DWORD *)(a1 + 40),
            *(_QWORD *)(a1 + 48));
    v10 = v19;
    if ( !v19 )
    {
      v6 = v36;
      result = *(_DWORD *)(a1 + 80) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(a1 + 80) = result;
      goto LABEL_28;
    }
    v11 = *(struct _MDL **)(v19 + 72);
    ByteOffset = 16;
    v35 = 16;
LABEL_38:
    v11->ByteCount = 0;
    goto LABEL_39;
  }
  Next = v11[1].Next;
  v41 = 0LL;
  v25 = *(_QWORD *)(48LL * (_QWORD)Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( (*(_DWORD *)(v39 + 56) & 0x30000000) != 0 )
    MiFlushFileOnlyMdl(6LL * (_QWORD)Next, v11, v23);
  else
    MiIssueSynchronousFlush(
      *(struct _FILE_OBJECT **)(a1 + 16),
      (__int64)v11,
      v23,
      v34,
      *(_QWORD *)(a1 + 48),
      (int *)&v41);
  MiUnlockFlushMdl(v11);
  if ( (int)v41 >= 0 )
  {
    v38 = 0;
    if ( v11 != (struct _MDL *)P )
    {
      v35 = 16;
      ByteOffset = 16;
      ExFreePoolWithTag(v11, 0);
      v11 = (struct _MDL *)P;
    }
    goto LABEL_38;
  }
  v6 = v25;
  v28 = MiHandleSynchronousFlushError(
          (_DWORD)v11,
          (unsigned int)&v41,
          (*(_DWORD *)(a1 + 80) >> 2) & 1,
          (unsigned int)&v38,
          (__int64)&v35);
  v29 = *(_DWORD *)(a1 + 80);
  v30 = v29 | 0x40;
  v31 = v29 & 0xFFFFFFBF;
  if ( !v28 )
    v30 = v31;
  *(_DWORD *)(a1 + 80) = v30;
  ByteOffset = v35;
  if ( v11 != (struct _MDL *)P )
  {
    if ( v35 != 1 )
      ByteOffset = 16;
    v35 = ByteOffset;
    ExFreePoolWithTag(v11, 0);
    v11 = (struct _MDL *)P;
  }
  v11->ByteCount = 0;
  if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
    goto LABEL_39;
  result = (unsigned int)v41;
  **(_DWORD **)(a1 + 72) = v41;
LABEL_28:
  if ( v3 != 17 )
    result = MiUnlockProtoPoolPage(v37, v3);
  *(_QWORD *)a1 = v6;
  return result;
}
