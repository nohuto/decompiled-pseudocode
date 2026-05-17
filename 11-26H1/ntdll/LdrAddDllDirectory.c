/*
 * XREFs of LdrAddDllDirectory @ 0x18009A310
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800989AC (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDetermineDosPathNameType_U @ 0x18009BB50 (RtlDetermineDosPathNameType_U.c)
 *     _local_unwind @ 0x180128210 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x18015F6E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrAddDllDirectory(unsigned __int16 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // edi
  __int64 Heap_0; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // edx
  _QWORD *v11; // rax
  _UNKNOWN **v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  _DWORD v17[18]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+48h] [rbp-90h] BYREF
  __int128 v19; // [rsp+58h] [rbp-80h] BYREF
  __int128 v20; // [rsp+68h] [rbp-70h]
  __int128 v21; // [rsp+78h] [rbp-60h]
  _DWORD *v22; // [rsp+88h] [rbp-50h]
  _BYTE v23[32]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-28h]

  v22 = v17;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(*((_QWORD *)a1 + 1));
  if ( v4 <= 5 )
  {
    v5 = 41;
    if ( _bittest(&v5, v4) )
      return 3221225485LL;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName(0, (__m128i *)a1, 0LL, (unsigned __int16 *)&v18, 0LL, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    LODWORD(v19) = 48;
    *((_QWORD *)&v19 + 1) = 0LL;
    DWORD2(v20) = 64;
    *(_QWORD *)&v20 = &v18;
    v21 = 0LL;
    v6 = ZwQueryAttributesFile(&v19, v23);
    RtlFreeHeap_0();
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  Heap_0 = RtlAllocateHeap_0();
  v8 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  memmove((void *)(Heap_0 + 18), *((const void **)a1 + 1), *a1);
  *(_WORD *)(v8 + 16) = *a1;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, v9);
  v10 = *a1 + (unsigned __int16)word_1801C5818 + 2;
  v17[16] = v10;
  if ( v10 > 0xFFFE )
  {
    v11 = (_QWORD *)local_unwind(v22, &loc_18009A4CE);
  }
  else
  {
    word_1801C5818 = v10;
    v11 = LdrpUserDllDirectories;
    v12 = &LdrpUserDllDirectories;
    if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
      __fastfail(3u);
  }
  *(_QWORD *)v8 = v11;
  *(_QWORD *)(v8 + 8) = v12;
  v11[1] = v8;
  LdrpUserDllDirectories = (_UNKNOWN *)v8;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v14);
  v15 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v15 )
  {
    if ( (*(_QWORD *)(v15 + 80))-- != 1LL )
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v15 )
    RtlFreeHeap_0();
  *a2 = v8;
  return 0LL;
}
