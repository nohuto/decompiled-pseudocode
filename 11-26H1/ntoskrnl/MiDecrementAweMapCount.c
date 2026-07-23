/*
 * XREFs of MiDecrementAweMapCount @ 0x1404799BC
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140707250 (MiReferenceIncomingPhysicalPages.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiValidateAndLockAweMapCountPage @ 0x140479C7C (MiValidateAndLockAweMapCountPage.c)
 *     MiSetPteTimeStamp @ 0x140479E5C (MiSetPteTimeStamp.c)
 */

__int64 __fastcall MiDecrementAweMapCount(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 **a4)
{
  unsigned __int64 v4; // r12
  char v5; // bl
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // r8
  int v11; // ebx
  unsigned __int64 *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  signed __int32 v22[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int128 v24; // [rsp+28h] [rbp-50h] BYREF
  int v26; // [rsp+90h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v7 = a2 / v4;
  v23 = *(_QWORD *)(a1 + 32);
  v8 = 0LL;
  v24 = 0LL;
  v9 = MiValidateAndLockAweMapCountPage(a1, a2, ((a3 >> 1) & 1) == 0, &v24);
  v10 = 0LL;
  if ( !v9 )
    return -1LL;
  v11 = v5 & 1;
  if ( !DWORD2(v24) )
  {
    v12 = (unsigned __int64 *)v24;
LABEL_24:
    v16 = *v12;
    if ( v11 && (v16 & 0x8000) != 0 )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * (((((__int64)v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
      return -1LL;
    }
    v19 = ((v16 & 0xFFFFFFFFFFFE0000uLL) - 0x20000) ^ (v16 ^ ((v16 & 0xFFFFFFFFFFFE0000uLL) - 0x20000)) & 0xFFFFFF800001FFFFuLL;
    *v12 = v19;
    v13 = (v19 >> 17) & 0x3FFFFF;
LABEL_6:
    if ( v11 )
    {
      if ( v8 )
      {
        *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
        if ( v13 )
          goto LABEL_17;
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          v17 = *(_QWORD *)(v8 + 16);
          if ( qword_140E2D8C0 && (v17 & 0x10) == 0 )
            v17 &= qword_140E2D8C8;
          v20 = v17 >> 31;
          if ( (_DWORD)v20 )
          {
            while ( 1 )
            {
              _InterlockedOr(v22, 0);
              if ( (unsigned int)(KiTbFlushTimeStamp - v20) > 2
                || (v20 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v20) >= 2 )
              {
                break;
              }
              if ( (KiTbFlushTimeStamp & 1) == 0 )
              {
                *((_BYTE *)a4 + 20) = 1;
                goto LABEL_34;
              }
              v26 = 0;
              _InterlockedOr(v22, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(&v26);
              if ( (v20 & 1) == 0 )
                goto LABEL_34;
            }
          }
        }
        goto LABEL_34;
      }
      *v12 |= 0x8000uLL;
    }
    else if ( v8 && (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      if ( v13 )
      {
        if ( v13 == 1 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
        {
          v14 = *((unsigned int *)a4 + 4);
          while ( !(_DWORD)v14 )
          {
            MiIssueFlushTbEntire((_KPROCESS *)2, (volatile _KAFFINITY_EX *)1, v10);
            _InterlockedOr(v22, 0);
            v14 = (unsigned int)KiTbFlushTimeStamp;
            *((_DWORD *)a4 + 4) = KiTbFlushTimeStamp;
          }
          *(_QWORD *)(v8 + 16) = MiSetPteTimeStamp(*(_QWORD *)&CLFS_LSN_NULL_EXT, v14);
        }
        goto LABEL_17;
      }
      *((_BYTE *)a4 + 20) = 1;
LABEL_34:
      _InterlockedAnd((volatile signed __int32 *)(v23 + 4 * (v7 >> 5)), ~(1 << v7));
      if ( (*(_DWORD *)(a1 + 8) & 4) != 0 )
      {
        if ( *a4 )
        {
          v18 = ((__int64)*a4 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3;
        }
        else
        {
          v18 = 0LL;
          a4[1] = v12;
        }
        *v12 = (v18 << 17) ^ (*v12 ^ (v18 << 17)) & 0xFFFFFF800001FFFFuLL;
        *a4 = v12;
      }
      else
      {
        if ( v4 != 1 )
          *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x50000;
        v21 = (unsigned __int64)*a4;
        if ( !*a4 )
          a4[1] = (unsigned __int64 *)v8;
        *(_QWORD *)v8 = (v21 >> 3) ^ (*(_QWORD *)v8 ^ (v21 >> 3)) & 0xFFFFF00000000001uLL;
        *a4 = (unsigned __int64 *)v8;
      }
LABEL_16:
      if ( !v8 )
      {
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                    + 4
                                    * (((((__int64)v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((__int64)v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
        return v13;
      }
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v13;
    }
    if ( v13 )
      goto LABEL_16;
    goto LABEL_34;
  }
  v8 = v24;
  v12 = 0LL;
  if ( !(_QWORD)v24 )
    goto LABEL_24;
  if ( !v11 || (*(_QWORD *)(v24 + 24) & 0x4000000000000000LL) == 0 )
  {
    v13 = (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v24 + 24) = v13 ^ (*(_QWORD *)(v24 + 24) ^ v13) & 0xC000000000000000uLL;
    goto LABEL_6;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return -1LL;
}
