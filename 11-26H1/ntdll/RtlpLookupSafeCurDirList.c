/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x180106064
 * Callers:
 *     LdrpSearchPath @ 0x180098BBC (LdrpSearchPath.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18009C8A0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18009CAD0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18011D730 (RtlpEnsureTailingSlashAndAddToList.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18015F1A0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  _QWORD *Heap_0; // rax
  _QWORD *v2; // rbx
  signed __int64 v3; // rdi
  _QWORD *v4; // r8
  __int64 v5; // rax
  HANDLE v6; // rdi
  HANDLE v7; // rcx
  unsigned int v8; // edi
  __int64 i; // rdx
  __int64 *v10; // rdx
  int v11; // eax
  int v12; // edx
  signed __int64 v13; // rcx
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  char *v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  char *v19; // [rsp+60h] [rbp-A8h]
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  char *v21; // [rsp+70h] [rbp-98h]
  __int128 v22; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v23[4]; // [rsp+88h] [rbp-80h] BYREF
  int v24; // [rsp+8Ch] [rbp-7Ch]
  int v25; // [rsp+90h] [rbp-78h]
  char v26; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v27[4]; // [rsp+298h] [rbp+190h] BYREF
  int v28; // [rsp+29Ch] [rbp+194h]
  char v29; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v30; // [rsp+4B8h] [rbp+3B0h] BYREF

  v22 = 0LL;
  memset_thunk_772440563353939046(v27, 0, 0x214uLL);
  memset_thunk_772440563353939046(v23, 0, 0x20CuLL);
  v20 = 34078720LL;
  v21 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  result = qword_1801C67B8;
  Handle = 0LL;
  LODWORD(v14) = 0;
  v16 = 34078720LL;
  v18 = 0x2000000LL;
  if ( qword_1801C67B8 == -1 )
  {
    v19 = &v26;
    v17 = &v29;
    v21 = &v30;
    Heap_0 = (_QWORD *)RtlAllocateHeap_0();
    v2 = Heap_0;
    if ( Heap_0 )
    {
      Heap_0[1] = Heap_0;
      *Heap_0 = Heap_0;
      v6 = (HANDLE)qword_1801CB2F0;
      Handle = (HANDLE)qword_1801CB2F0;
      if ( !qword_1801CB2F0 )
      {
        v12 = NtOpenKey(&Handle, 1LL, &unk_180172CA0);
        if ( v12 >= 0 )
        {
          v13 = (signed __int64)Handle;
        }
        else
        {
          v13 = -1LL;
          Handle = (HANDLE)-1LL;
        }
        v6 = (HANDLE)_InterlockedCompareExchange64(&qword_1801CB2F0, v13, 0LL);
        if ( v6 )
        {
          if ( v12 >= 0 )
            NtClose(Handle);
          Handle = v6;
        }
        else
        {
          v6 = Handle;
        }
      }
      if ( v6 != (HANDLE)-1LL
        && (int)NtQueryValueKey(v6, L".0", 2LL, &v22, 16, &v14) >= 0
        && (_DWORD)v14 == 16
        && HIDWORD(v22) == 1
        || (int)RtlQueryEnvironmentVariable_U(0LL, word_180172C80, (__int64)&v16) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList(v2, &v16) >= 0 )
      {
        v7 = Handle;
        if ( Handle != (HANDLE)-1LL )
        {
          v8 = 0;
          for ( i = 0LL; ; i = v8 )
          {
            v11 = ZwEnumerateValueKey(v7, i, 0LL, v23, 524, &v14);
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -2147483643 )
            {
              if ( v11 < 0 )
                break;
              if ( v25 )
              {
                if ( (unsigned int)(v24 - 1) <= 1 )
                {
                  LOWORD(v18) = v25;
                  if ( (int)NtQueryValueKey(Handle, &v18, 2LL, v27, 532, &v14) >= 0 && (unsigned int)(v24 - 1) <= 1 )
                  {
                    v10 = &v16;
                    LOWORD(v16) = 2 * ((unsigned int)(v14 - 12) >> 1) - 2;
                    if ( v28 == 2 )
                    {
                      if ( (int)RtlExpandEnvironmentStrings_U(0LL, (unsigned __int16 *)&v16, (__int64)&v20, 0LL) < 0 )
                        goto LABEL_33;
                      v10 = &v20;
                    }
                    RtlpEnsureTailingSlashAndAddToList(v2, v10);
                  }
                }
              }
            }
LABEL_33:
            v7 = Handle;
            ++v8;
          }
        }
      }
    }
    v3 = _InterlockedCompareExchange64(&qword_1801C67B8, (signed __int64)v2, -1LL);
    if ( v3 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v4 = (_QWORD *)*v2;
          if ( (_QWORD *)*v2 == v2 )
            break;
          if ( (_QWORD *)v4[1] != v2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
            __fastfail(3u);
          *v2 = v5;
          *(_QWORD *)(v5 + 8) = v2;
          RtlFreeHeap_0();
        }
        RtlFreeHeap_0();
      }
      return v3;
    }
  }
  return result;
}
