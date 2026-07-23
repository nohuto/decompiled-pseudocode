/*
 * XREFs of MiFlushSubsection @ 0x1403CB290
 * Callers:
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 * Callees:
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiAddPageToFlushMdl @ 0x1402D77E0 (MiAddPageToFlushMdl.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiFlushWaitForReadInProgress @ 0x1403398B8 (MiFlushWaitForReadInProgress.c)
 *     MiReadyFlushMdlToWrite @ 0x14036EB94 (MiReadyFlushMdlToWrite.c)
 *     MiExpandFlushMdl @ 0x140398C2C (MiExpandFlushMdl.c)
 *     MiUnlockFlushMdl @ 0x1403CB7C4 (MiUnlockFlushMdl.c)
 *     MiIssueAsynchronousFlush @ 0x1403CB874 (MiIssueAsynchronousFlush.c)
 *     MiGetAsynchronousFlushEntry @ 0x1403CB994 (MiGetAsynchronousFlushEntry.c)
 *     MiWaitForPageWriteCompletion @ 0x1403CC510 (MiWaitForPageWriteCompletion.c)
 *     MiHandleSynchronousFlushError @ 0x14046717C (MiHandleSynchronousFlushError.c)
 *     MiFlushFileOnlyMdl @ 0x140501964 (MiFlushFileOnlyMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiFlushSubsection(__int64 a1)
{
  __int64 v2; // r8
  int v3; // edx
  char v4; // r14
  __int64 v5; // rax
  __int64 v6; // r12
  ULONG_PTR v7; // rdi
  unsigned int ByteOffset; // r15d
  unsigned __int64 result; // rax
  char v10; // cl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  struct _MDL *v14; // rbx
  bool v15; // cf
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  char v19; // dl
  char v20; // al
  __int64 v21; // r8
  int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  ULONG v26; // eax
  char v27; // r8
  __int64 v28; // r8
  struct _MDL *Next; // rax
  unsigned __int64 v30; // r12
  __int64 AsynchronousFlushEntry; // rax
  __int64 v32; // rax
  __int64 v33; // r15
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // ecx
  char v37; // [rsp+40h] [rbp-C0h] BYREF
  char v38; // [rsp+41h] [rbp-BFh]
  char v39; // [rsp+42h] [rbp-BEh]
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h]
  __int128 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  _BYTE P[192]; // [rsp+90h] [rbp-70h] BYREF

  memset_0(P, 0, 0xB8uLL);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 80);
  v4 = 17;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0LL;
  v7 = *(_QWORD *)a1;
  v47 = *(__int64 **)(a1 + 32);
  v44 = *v47;
  ByteOffset = 16;
  v40 = 16;
  v48 = v5;
  result = *(_QWORD *)(a1 + 8);
  v10 = 2 * (v3 & 2);
  v41 = result;
  v11 = v3 & 8;
  v39 = v10;
  v12 = *(_QWORD *)(a1 + 24);
  v43 = 0;
  v37 = 17;
  v38 = 0;
  v42 = 0LL;
  v45 = v11;
  if ( v12 )
  {
    AsynchronousFlushEntry = MiGetAsynchronousFlushEntry();
    v2 = 0LL;
    v13 = AsynchronousFlushEntry;
    if ( !AsynchronousFlushEntry )
    {
      result = *(_DWORD *)(a1 + 80) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(a1 + 80) = result;
      return result;
    }
    v14 = *(struct _MDL **)(AsynchronousFlushEntry + 72);
    result = v41;
  }
  else
  {
    v13 = 0LL;
    v14 = (struct _MDL *)P;
  }
  v14->Next = 0LL;
  v14->MdlFlags = 0;
  v14->StartVa = 0LL;
  *(_QWORD *)&v14->ByteCount = 0LL;
LABEL_4:
  while ( 2 )
  {
    v15 = v7 < result;
    do
    {
      if ( !v15 )
        goto LABEL_29;
      if ( (v7 & 0xFFF) == 0 || v4 == 17 )
      {
        if ( v4 != 17 )
        {
          LOBYTE(v11) = v4;
          MiUnlockProtoPoolPage(v6, v11, v2);
        }
        v23 = MiCheckProtoPtePageState(v44, v7, 0LL, &v37);
        v4 = v37;
        v2 = 0LL;
        v42 = v23;
        v6 = v23;
        if ( !v23 )
        {
          v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          if ( v14->ByteCount )
            goto LABEL_45;
LABEL_41:
          result = v41;
          goto LABEL_4;
        }
      }
      v16 = MiLockLeafPage((unsigned __int64 *)v7, 0);
      v2 = 0LL;
      v18 = v16;
      if ( v16 )
      {
        v19 = *(_BYTE *)(v16 + 34);
        if ( (v19 & 8) != 0 )
        {
          if ( !v14->ByteCount )
          {
            if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
            {
              result = 0x7FFFFFFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v7 = v41;
              *(_DWORD *)(a1 + 80) |= 0x10u;
              goto LABEL_29;
            }
            LOBYTE(v17) = v4;
            MiWaitForPageWriteCompletion(v16, v44, v6, v17);
            goto LABEL_52;
          }
        }
        else
        {
          if ( (v19 & 0x10) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_12;
          }
          if ( (v19 & 0x20) == 0 )
          {
            v22 = MiAddPageToFlushMdl((__int64)v14, v16, v44, ByteOffset, *(_QWORD *)v7);
            if ( v22 >= 1 )
            {
              LOBYTE(v11) = v4;
              MiUnlockProtoPoolPage(v42, v11, v21);
              v4 = 17;
              v37 = 17;
              if ( v22 == 3 )
                goto LABEL_33;
              if ( v22 == 2 || ByteOffset == 1 || v7 + 8 >= v41 )
              {
                v7 += 8LL;
                goto LABEL_33;
              }
              v32 = MiExpandFlushMdl((unsigned int *)v14, ByteOffset + ((__int64)(v41 - v7) >> 3) - 1);
              v2 = 0LL;
              v33 = v32;
              if ( !v32 )
              {
                ByteOffset = v14->ByteOffset;
                v7 += 8LL;
                v40 = ByteOffset;
                goto LABEL_33;
              }
              if ( v14 != (struct _MDL *)P && (!v13 || v14 != (struct _MDL *)(v13 + 80)) )
                ExFreePoolWithTag(v14, 0);
              v14 = (struct _MDL *)v33;
              if ( v13 )
                *(_QWORD *)(v13 + 72) = v33;
              ByteOffset = *(_DWORD *)(v33 + 44);
              v7 += 8LL;
              v40 = ByteOffset;
LABEL_40:
              v6 = v42;
              goto LABEL_41;
            }
            v2 = 0LL;
            goto LABEL_21;
          }
          if ( !v14->ByteCount )
          {
            MiFlushWaitForReadInProgress(v16, v6, v4);
LABEL_52:
            v4 = 17;
            v37 = 17;
            goto LABEL_41;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_45;
      }
LABEL_12:
      if ( v14->ByteCount )
      {
        v20 = 1;
        v38 = 1;
        goto LABEL_14;
      }
LABEL_21:
      v20 = v38;
LABEL_14:
      v7 += 8LL;
      if ( v20 )
        goto LABEL_45;
      result = v41;
      v6 = v42;
      v15 = v7 < v41;
    }
    while ( v7 != v41 );
    if ( !v14->ByteCount )
      continue;
    break;
  }
LABEL_45:
  if ( v4 != 17 )
  {
    LOBYTE(v11) = v4;
    MiUnlockProtoPoolPage(v42, v11, 0LL);
    v4 = 17;
    v37 = 17;
  }
LABEL_33:
  *(_QWORD *)(a1 + 64) += v14->ByteCount;
  v25 = (__int64)v47;
  v26 = v14->ByteCount << 12;
  v38 = 0;
  v27 = v45;
  v14->ByteCount = v26;
  v28 = MiReadyFlushMdlToWrite((__int64)v14, v25, v27);
  if ( v13 )
  {
    v24 = MiIssueAsynchronousFlush(
            *(_QWORD *)(a1 + 16),
            v13,
            *(_QWORD *)(a1 + 24),
            v48,
            v28,
            v39,
            *(_DWORD *)(a1 + 40),
            *(_QWORD *)(a1 + 48));
    v2 = 0LL;
    v13 = v24;
    if ( !v24 )
    {
      v7 = v41;
      result = *(_DWORD *)(a1 + 80) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(a1 + 80) = result;
      goto LABEL_29;
    }
    v14 = *(struct _MDL **)(v24 + 72);
    ByteOffset = 16;
    v40 = 16;
LABEL_39:
    v14->ByteCount = 0;
    goto LABEL_40;
  }
  Next = v14[1].Next;
  v46 = 0LL;
  v30 = *(_QWORD *)(48LL * (_QWORD)Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( (*(_DWORD *)(v44 + 56) & 0x30000000) != 0 )
    MiFlushFileOnlyMdl(6LL * (_QWORD)Next, v14, v28);
  else
    MiIssueSynchronousFlush(
      *(struct _FILE_OBJECT **)(a1 + 16),
      (__int64)v14,
      v28,
      v39,
      *(_QWORD *)(a1 + 48),
      (int *)&v46);
  MiUnlockFlushMdl(v14);
  v2 = 0LL;
  if ( (int)v46 >= 0 )
  {
    v43 = 0;
    if ( v14 != (struct _MDL *)P )
    {
      v40 = 16;
      ByteOffset = 16;
      ExFreePoolWithTag(v14, 0);
      v2 = 0LL;
      v14 = (struct _MDL *)P;
    }
    goto LABEL_39;
  }
  v7 = v30;
  v34 = MiHandleSynchronousFlushError(
          (_DWORD)v14,
          (unsigned int)&v46,
          (*(_DWORD *)(a1 + 80) >> 2) & 1,
          (unsigned int)&v43,
          (__int64)&v40);
  v2 = 0LL;
  v35 = *(_DWORD *)(a1 + 80);
  v11 = v35 | 0x40u;
  v36 = v35 & 0xFFFFFFBF;
  if ( !v34 )
    v11 = v36;
  *(_DWORD *)(a1 + 80) = v11;
  ByteOffset = v40;
  if ( v14 != (struct _MDL *)P )
  {
    if ( v40 != 1 )
      ByteOffset = 16;
    v40 = ByteOffset;
    ExFreePoolWithTag(v14, 0);
    v2 = 0LL;
    v14 = (struct _MDL *)P;
  }
  v14->ByteCount = 0;
  if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
    goto LABEL_40;
  result = (unsigned int)v46;
  **(_DWORD **)(a1 + 72) = v46;
LABEL_29:
  if ( v4 != 17 )
  {
    LOBYTE(v11) = v4;
    result = MiUnlockProtoPoolPage(v42, v11, v2);
  }
  *(_QWORD *)a1 = v7;
  return result;
}
