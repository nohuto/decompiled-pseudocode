/*
 * XREFs of MiAttemptPageFileExtension @ 0x140B318D8
 * Callers:
 *     MiExtendPagingFiles @ 0x140B316B4 (MiExtendPagingFiles.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiFinishPageFileExtension @ 0x140508B3C (MiFinishPageFileExtension.c)
 *     MiLogPagefileExtension @ 0x1406FDA1C (MiLogPagefileExtension.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 */

__int64 __fastcall MiAttemptPageFileExtension(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  int v4; // ecx
  unsigned __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned int v7; // eax
  unsigned int i; // r15d
  unsigned __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v23; // [rsp+48h] [rbp-70h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v25; // [rsp+60h] [rbp-58h]
  __int128 FileInformation; // [rsp+68h] [rbp-50h] BYREF
  __int128 v27; // [rsp+78h] [rbp-40h]

  v3 = *((_QWORD *)a2 + 28);
  v4 = *a2;
  v5 = 0LL;
  v25 = 0LL;
  v6 = 0;
  v7 = a2[1];
  *(_OWORD *)v24 = 0LL;
  FileInformation = 0LL;
  v27 = 0LL;
  if ( v4 != v7 && (int)IopQueryXxxInformation(*((struct _FILE_OBJECT **)a2 + 3), 3, 24, 0, (__int64)v24, &v23, 0) >= 0 )
  {
    for ( i = 0x4000; ; i = 4096 )
    {
      if ( (*(_BYTE *)(a1 + 87) & 2) == 0 )
      {
        v11 = i;
        if ( a3 < i )
          goto LABEL_8;
        i = 4096;
      }
      v11 = a3;
LABEL_8:
      v12 = a2[1];
      v13 = *a2;
      v14 = a2[1] - v13;
      v15 = v14;
      v16 = v14;
      if ( v11 <= v14 )
        v16 = v11;
      if ( v14 > v16 )
        v15 = v16;
      if ( (*(_BYTE *)(a1 + 87) & 2) == 0 )
      {
        v5 = v24[1] * (unsigned int)(v25 * HIDWORD(v25));
        if ( v5 >> 12 <= 0x10000 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v3 + 23556));
          break;
        }
        v15 = (v5 >> 12) - 0x10000;
        if ( v15 > v16 )
          v15 = v16;
        if ( v15 < a3 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v3 + 23560));
          if ( (a2[43] & 0x10) != 0 )
            break;
        }
      }
      *(_QWORD *)&FileInformation = (v15 + v13) << 12;
      *((_QWORD *)&FileInformation + 1) = (unsigned int)((_DWORD)v13 << 12);
      v17 = (*(_BYTE *)(a1 + 87) & 0x20) == 0;
      *(_QWORD *)&v27 = v12 << 12;
      v18 = 1;
      if ( v17 )
        v18 = 5;
      DWORD2(v27) = v18;
      if ( !IoSetInformation(*((PFILE_OBJECT *)a2 + 3), FileEndOfFileInformation, 0x20u, &FileInformation) )
      {
        MiFinishPageFileExtension((struct _KEVENT *)v3, (__int64)a2, v15);
        v6 = v15;
        break;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 23564));
      if ( i == 4096 || (*(_BYTE *)(a1 + 87) & 2) != 0 )
        break;
    }
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 4096LL) )
  {
    MiLogPagefileExtension(v19, (int *)a2, (unsigned int)a3, v6, v5, v20);
  }
  return v6;
}
