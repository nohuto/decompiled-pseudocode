/*
 * XREFs of PipGetPersistentMemory @ 0x1407A00BC
 * Callers:
 *     IoAcquireKsrPersistentMemoryEx @ 0x14079EFA0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoMapKsrPersistentMemoryEx @ 0x14079F2A0 (IoMapKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x14079F4B0 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14079F6D0 (IoReserveKsrPersistentMemoryEx.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PipUnpackMetadata @ 0x1405DB4AC (PipUnpackMetadata.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PipGetDriverKsrGuid @ 0x14079FF30 (PipGetDriverKsrGuid.c)
 *     PipMatchPersistentMemory @ 0x1407A07C4 (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x1407A08A4 (PipMatchPersistentMemoryV1.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetPersistentMemory(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        size_t *a6,
        void *a7,
        _QWORD *a8,
        char a9)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rbx
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r12
  size_t *v19; // r13
  struct _MDL *v20; // rdi
  unsigned __int64 *v21; // r14
  int DriverKsrGuid; // ebx
  unsigned int v23; // ebx
  __int64 v24; // rbx
  void *Pool2; // rax
  PVOID v26; // rcx
  char v27; // r9
  int v28; // r11d
  int matched; // eax
  int v30; // eax
  __int64 v31; // rax
  int v32; // edx
  unsigned __int64 *v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // r9
  int v38; // ecx
  unsigned int v39; // edx
  unsigned int i; // r8d
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  size_t *v45; // rax
  void *v46; // r9
  size_t v47; // rdx
  size_t *v48; // rcx
  size_t v49; // rax
  __int64 v50; // r8
  _QWORD *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  char v55; // [rsp+30h] [rbp-79h] BYREF
  char v56; // [rsp+31h] [rbp-78h]
  unsigned int v57; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-71h] BYREF
  int v59; // [rsp+3Ch] [rbp-6Dh]
  PVOID P; // [rsp+40h] [rbp-69h]
  size_t *v61; // [rsp+48h] [rbp-61h]
  __int64 v62; // [rsp+50h] [rbp-59h]
  PVOID v63[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v64; // [rsp+68h] [rbp-41h]
  __int64 v65; // [rsp+70h] [rbp-39h]
  _DWORD *v66; // [rsp+78h] [rbp-31h]
  void *v67; // [rsp+80h] [rbp-29h]
  _QWORD *v68; // [rsp+88h] [rbp-21h]
  __int128 v69; // [rsp+90h] [rbp-19h] BYREF

  v61 = a6;
  v66 = a5;
  v68 = a8;
  v64 = a4;
  v65 = a3;
  v67 = a7;
  v57 = 0;
  v69 = 0LL;
  if ( a2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v10 || (*(_DWORD *)(v10 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v11 = *(_QWORD *)(a2 + 8);
      if ( v11 )
      {
        IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
        v12 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v13 )
      {
        v14 = (unsigned __int16 *)(v13 + 40);
        IoAddTriageDumpDataBlock(v13, (PVOID)0x388);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
        }
        v15 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v16 )
        {
          if ( *(_WORD *)(v16 + 56) )
          {
            IoAddTriageDumpDataBlock(v16 + 56, (PVOID)2);
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  P = 0LL;
  v56 = 0;
  v18 = 0LL;
  v55 = 0;
  v58 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)v63 = 0LL;
  if ( a8 && (a9 & 1) != 0 )
  {
    DriverKsrGuid = -1073741811;
    goto LABEL_71;
  }
  DriverKsrGuid = PipGetDriverKsrGuid(a1, (__int64)&v69);
  if ( DriverKsrGuid >= 0 )
  {
    DriverKsrGuid = KsrEnumeratePersistedMemory(&v69, PipEnumeratePersistedMemory, v63);
    if ( DriverKsrGuid >= 0 )
    {
      if ( !LODWORD(v63[1]) )
      {
LABEL_22:
        DriverKsrGuid = -1073741772;
        goto LABEL_71;
      }
      v63[0] = (PVOID)ExAllocatePool2(0x40uLL);
      if ( !v63[0] )
      {
LABEL_24:
        DriverKsrGuid = -1073741670;
        goto LABEL_71;
      }
      DriverKsrGuid = KsrEnumeratePersistedMemory(&v69, PipEnumeratePersistedMemory, v63);
      if ( DriverKsrGuid >= 0 )
      {
        v23 = 0;
        v62 = 0LL;
        v59 = 0;
        while ( 1 )
        {
          P = 0LL;
          if ( v23 >= LODWORD(v63[1]) )
            goto LABEL_62;
          P = 0LL;
          if ( v56 )
            goto LABEL_67;
          v24 = *((_QWORD *)v63[0] + v23);
          v62 = v24;
          KsrQueryMetadata(&v69, v24, 0LL, 0LL, &v58);
          Pool2 = (void *)ExAllocatePool2(0x40uLL);
          P = Pool2;
          if ( !Pool2 )
            goto LABEL_24;
          DriverKsrGuid = KsrQueryMetadata(&v69, v24, Pool2, v58, &v58);
          if ( DriverKsrGuid < 0 )
            break;
          if ( v58 < 2 )
          {
LABEL_66:
            DriverKsrGuid = -1073741637;
            break;
          }
          if ( *(_WORD *)P == 2 )
          {
            DriverKsrGuid = PipMatchPersistentMemory(a2, v65, v64, (_DWORD)P, 0, (__int64)&v55);
            if ( DriverKsrGuid < 0 )
              break;
            v26 = P;
            v56 = v55;
            if ( !v55 )
              goto LABEL_40;
            PipUnpackMetadata((__int64)P, 0LL, v66);
          }
          else
          {
            if ( *(_WORD *)P != 1 )
              goto LABEL_66;
            matched = PipMatchPersistentMemoryV1(a2, P, 0LL, &v55);
            v28 = 0;
            DriverKsrGuid = matched;
            if ( matched < 0 )
              break;
            v27 = v55;
            v26 = P;
            v56 = v55;
          }
          if ( v27 )
          {
            v30 = KsrClaimPersistedMemory(&v69, v62, 0LL, 0LL, v28, &v57);
            DriverKsrGuid = 0;
            if ( v30 != -1073741789 )
              DriverKsrGuid = v30;
            if ( DriverKsrGuid < 0 )
              break;
            v31 = ExAllocatePool2(0x40uLL);
            v21 = (unsigned __int64 *)v31;
            if ( !v31 )
              goto LABEL_24;
            DriverKsrGuid = KsrClaimPersistedMemory(&v69, v62, v31, v57, 0, &v57);
            if ( DriverKsrGuid < 0 )
              break;
            v32 = 0;
            v59 = 0;
            if ( v57 )
            {
              v33 = v21;
              v34 = v57;
              do
              {
                v35 = *v33++;
                v32 += v35 >> 40;
                --v34;
              }
              while ( v34 );
              v59 = v32;
              v18 = 0LL;
            }
            v36 = ExAllocatePool2(0x40uLL);
            v20 = (struct _MDL *)v36;
            if ( !v36 )
              break;
            *(_QWORD *)v36 = 0LL;
            v37 = (_QWORD *)(v36 + 48);
            v38 = v59;
            *(_QWORD *)(v36 + 32) = 0LL;
            v39 = 0;
            *(_WORD *)(v36 + 8) = 8 * (v38 + 6);
            *(_QWORD *)(v36 + 40) = (unsigned int)(v38 << 12);
            *(_WORD *)(v36 + 10) = 2;
            for ( i = v57; v39 < i; ++v39 )
            {
              v41 = v21[v39];
              v42 = v41 >> 40;
              v43 = v41 & 0xFFFFFFFFFFLL;
              if ( (_DWORD)v42 )
              {
                v44 = (unsigned int)v42;
                do
                {
                  *v37++ = v43++;
                  --v44;
                }
                while ( v44 );
                i = v57;
              }
            }
            v45 = (size_t *)MmMapLockedPagesSpecifyCache(v20, 0, MmCached, 0LL, 0, 0x40000010u);
            v19 = v45;
            if ( !v45 )
              goto LABEL_24;
            v46 = v67;
            v47 = *v45;
            v48 = v61;
            if ( v67 )
            {
              v49 = *v61;
              *v61 = v47;
              if ( v49 < v47 )
                goto LABEL_63;
              memmove(v46, v19 + 1, *v19);
              if ( (a9 & 1) != 0 )
              {
                MmUnmapLockedPages(v19, v20);
                LOBYTE(v50) = 1;
                v19 = 0LL;
                KsrFreePersistedMemoryBlock(&v69, v62, v50);
              }
LABEL_62:
              v48 = v61;
              goto LABEL_63;
            }
            *v61 = v47;
LABEL_63:
            if ( !v56 )
            {
              *v48 = 0LL;
              goto LABEL_22;
            }
LABEL_67:
            v51 = v68;
            if ( v68 )
            {
              v52 = ExAllocatePool2(0x40uLL);
              v18 = (_QWORD *)v52;
              if ( !v52 )
                goto LABEL_24;
              *(_OWORD *)(v52 + 16) = v69;
              *(_DWORD *)v52 = (a2 != 0) + 1;
              *(_QWORD *)(v52 + 48) = P;
              v53 = v62;
              v18[5] = v19;
              v19 = 0LL;
              v18[1] = v20;
              v20 = 0LL;
              v18[4] = v53;
              *v51 = v18;
              P = 0LL;
            }
            DriverKsrGuid = 0;
            v18 = 0LL;
            break;
          }
LABEL_40:
          v23 = ++v59;
          ExFreePoolWithTag(v26, 0x61706E50u);
        }
      }
    }
  }
LABEL_71:
  if ( v63[0] )
  {
    ExFreePoolWithTag(v63[0], 0x61706E50u);
    v63[0] = 0LL;
  }
  if ( v20 )
  {
    if ( v19 )
      MmUnmapLockedPages(v19, v20);
    ExFreePoolWithTag(v20, 0x61706E50u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x61706E50u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x61706E50u);
  if ( v21 )
    ExFreePoolWithTag(v21, 0x61706E50u);
  return (unsigned int)DriverKsrGuid;
}
