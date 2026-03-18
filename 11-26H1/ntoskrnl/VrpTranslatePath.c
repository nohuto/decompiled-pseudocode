/*
 * XREFs of VrpTranslatePath @ 0x140976010
 * Callers:
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     VrpUnlockJobContextShared @ 0x14097690C (VrpUnlockJobContextShared.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpTranslatePath(
        signed __int64 *Object,
        void *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        __m128i *a5,
        _QWORD *a6,
        __int64 a7,
        int *a8,
        _DWORD *a9)
{
  signed __int64 *v9; // r14
  UNICODE_STRING v10; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  void *v12; // rdx
  LegacyAutoBoost *v13; // rbx
  wchar_t *Buffer; // r12
  unsigned __int16 v15; // di
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int16 Length; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // kr00_8
  unsigned __int64 v21; // kr10_8
  unsigned __int64 v22; // rcx
  unsigned __int16 **v23; // rax
  unsigned __int16 *v24; // r11
  unsigned __int64 v25; // r13
  int v26; // r8d
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int16 i; // r14
  __int64 v31; // rax
  const wchar_t *j; // r10
  __int64 k; // rax
  unsigned __int64 v34; // rdx
  __int64 m; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  const wchar_t *n; // r9
  __int64 ii; // rax
  unsigned __int16 v40; // ax
  unsigned __int16 *v41; // r13
  NTSTATUS v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 jj; // rcx
  __int64 kk; // rax
  __int64 mm; // rax
  __int64 nn; // rax
  wchar_t *v50; // rdi
  unsigned __int16 v51; // r15
  const UNICODE_STRING *v52; // rbx
  unsigned __int16 v53; // cx
  unsigned __int16 v54; // dx
  signed __int64 v55; // rax
  __m128i v56; // xmm6
  int v57; // ecx
  int v58; // r11d
  int v59; // ecx
  int v60; // eax
  void *v61; // rbx
  int v62; // r15d
  int v63; // r11d
  int v64; // eax
  int v65; // r12d
  _QWORD *v66; // rdi
  NTSTATUS v67; // eax
  PVOID v68; // r12
  _WORD *v69; // rbx
  unsigned __int16 v70; // r10
  unsigned __int64 v71; // xmm0_8
  unsigned __int64 v72; // rcx
  __int64 i1; // rax
  __int16 v74; // r10
  __int64 i2; // r9
  __int64 i3; // rax
  __int64 i4; // rax
  __int64 i5; // rax
  int v79; // [rsp+38h] [rbp-D0h]
  int v80; // [rsp+3Ch] [rbp-CCh]
  UNICODE_STRING v81; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v82; // [rsp+58h] [rbp-B0h]
  signed __int64 *DestinationString; // [rsp+60h] [rbp-A8h]
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 *v85; // [rsp+78h] [rbp-90h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v87; // [rsp+88h] [rbp-80h]
  __int64 v88; // [rsp+90h] [rbp-78h]
  _QWORD v89[2]; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v94; // [rsp+158h] [rbp+50h] BYREF
  struct _KLOCK_ENTRIES *v95; // [rsp+160h] [rbp+58h]

  v95 = a4;
  v9 = Object;
  DestinationString = Object;
  Source = 0LL;
  v80 = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v10 = *(UNICODE_STRING *)&a4->Thread;
  v79 = *(unsigned __int16 *)(a3 + 32);
  DestinationString_8 = 0LL;
  v81 = v10;
  LOBYTE(v82) = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v9 + 2), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v9 + 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9 + 2, 0, v13, (struct _KTHREAD *)(v9 + 2));
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    Buffer = v81.Buffer;
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
    v88 = 0LL;
    v87 = 0LL;
    v85 = 0LL;
    if ( !v9[6] )
      goto LABEL_53;
    Length = v81.Length;
    LOWORD(v94) = v81.Length;
    while ( 2 )
    {
      if ( v16 < v9[6] )
      {
        v20 = v9[5];
        v21 = v16;
        v19 = v20 * v16;
        *(_QWORD *)&v81.Length = 0LL;
        if ( !is_mul_ok(v20, v21) || (v22 = v9[9], v23 = (unsigned __int16 **)(v22 + v19), (unsigned __int64)v23 < v22) )
          v23 = 0LL;
        v24 = *v23;
        v25 = 0LL;
        *(_QWORD *)&v81.Length = *v23;
        v26 = 0;
        v27 = 0LL;
        v28 = 0LL;
        while ( 1 )
        {
          v29 = v27;
          for ( i = 0; 2 * v27 < (unsigned __int64)Length; v29 = v27 )
          {
            if ( v81.Buffer[v29] != 92 )
              break;
            ++v27;
          }
          v31 = v27;
          for ( j = &v81.Buffer[v27]; 2 * v27 < (unsigned __int64)Length; v31 = v27 )
          {
            if ( v81.Buffer[v31] == 92 )
              break;
            ++v27;
            i += 2;
          }
          for ( k = v27; 2 * v27 < (unsigned __int64)Length; k = v27 )
          {
            if ( v81.Buffer[k] != 92 )
              break;
            ++v27;
          }
          v34 = *v24;
          for ( m = 2 * v28; 2 * v28 < v34; m = 2 * v28 )
          {
            if ( *(_WORD *)(*((_QWORD *)v24 + 1) + m) != 92 )
              break;
            ++v28;
          }
          v36 = *((_QWORD *)v24 + 1);
          v37 = 2 * v28;
          for ( n = (const wchar_t *)(v36 + 2 * v28); 2 * v28 < v34; v37 = 2 * v28 )
          {
            if ( *(_WORD *)(v36 + v37) == 92 )
              break;
            ++v28;
            v15 += 2;
          }
          for ( ii = 2 * v28; 2 * v28 < v34; ii = 2 * v28 )
          {
            if ( *(_WORD *)(v36 + ii) != 92 )
              break;
            ++v28;
          }
          if ( !i && !v15 )
            break;
          v40 = i;
          if ( i >= v15 )
            v40 = v15;
          v26 = wcsnicmp(j, n, (unsigned __int64)v40 >> 1);
          if ( v26 )
            goto LABEL_43;
          v26 = i - v15;
          if ( i != v15 )
          {
            if ( i && !v15 )
            {
              v24 = *(unsigned __int16 **)&v81.Length;
              v15 = 0;
              goto LABEL_46;
            }
LABEL_43:
            v24 = *(unsigned __int16 **)&v81.Length;
            v15 = 0;
            v25 = 0LL;
            goto LABEL_46;
          }
          v24 = *(unsigned __int16 **)&v81.Length;
          ++v25;
          v15 = 0;
        }
        v15 = 0;
        if ( !v26 )
        {
          v9 = DestinationString;
          v17 = v25;
          Length = (unsigned __int16)v94;
          v41 = v24;
          goto LABEL_52;
        }
LABEL_46:
        v17 = v87;
        if ( v25 > v87 )
        {
          v17 = v25;
          v87 = v25;
          v85 = v24;
        }
        v9 = DestinationString;
        Length = (unsigned __int16)v94;
        if ( v26 >= 0 )
        {
          v16 = ++v88;
          continue;
        }
      }
      break;
    }
    v41 = v85;
LABEL_52:
    if ( !v41 )
    {
LABEL_53:
      v42 = -1073741772;
      goto LABEL_54;
    }
    for ( jj = 0LL; v17; --v17 )
    {
      for ( kk = jj; 2 * jj < (unsigned __int64)Length; kk = jj )
      {
        if ( v81.Buffer[kk] != 92 )
          break;
        ++jj;
      }
      for ( mm = jj; 2 * jj < (unsigned __int64)Length; mm = jj )
      {
        if ( v81.Buffer[mm] == 92 )
          break;
        ++jj;
      }
      for ( nn = jj; 2 * jj < (unsigned __int64)Length; nn = jj )
      {
        if ( v81.Buffer[nn] != 92 )
          break;
        ++jj;
      }
    }
    v50 = &v81.Buffer[jj];
    Source.Buffer = v50;
    v89[0] = 0LL;
    v51 = Length - 2 * jj;
    v89[1] = 0LL;
    DestinationString_8.Length = 0;
    Source.Length = v51;
    v52 = (const UNICODE_STRING *)v89;
    Source.MaximumLength = v51;
    if ( v41 != (unsigned __int16 *)-24LL )
      v52 = (const UNICODE_STRING *)(v41 + 12);
    v53 = v52->Length + v51;
    if ( v53 < v52->Length || (unsigned __int16)(v53 + 2) < v53 )
    {
      v42 = -1073741811;
      goto LABEL_54;
    }
    DestinationString_8.MaximumLength = v53 + 2;
    DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !DestinationString_8.Buffer )
    {
      v42 = -1073741670;
      goto LABEL_54;
    }
    RtlCopyUnicodeString(&DestinationString_8, v52);
    if ( v51 )
    {
      if ( *v50 != 92 && (!v52->Length || v52->Buffer[((unsigned __int64)v52->Length >> 1) - 1] != 92) )
        RtlAppendUnicodeToString(&DestinationString_8, L"\\");
      RtlAppendUnicodeStringToString(&DestinationString_8, &Source);
    }
    v54 = DestinationString_8.Length;
    v55 = ((unsigned __int64)DestinationString_8.Length >> 1) - 1;
    if ( v55 >= 0 )
    {
      do
      {
        if ( DestinationString_8.Buffer[v55] != 92 )
          break;
        v54 -= 2;
        --v55;
      }
      while ( v55 >= 0 );
      v9 = DestinationString;
      DestinationString_8.Length = v54;
    }
    if ( v81.Buffer != *(wchar_t **)&v95->AvailableEntryBitmap )
      ExFreePoolWithTag(v81.Buffer, 0);
    v56 = (__m128i)DestinationString_8;
    v81 = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    v57 = *((_DWORD *)v41 + 14);
    v58 = v57 & 4 | v80;
    if ( v9 == Object )
      v58 |= v57 & 2;
    v59 = v41[32];
    v60 = v58 | 0x20000000;
    v61 = (void *)*((_QWORD *)v41 + 2);
    if ( v51 )
      v60 = v58;
    v62 = (unsigned __int8)v82;
    v63 = v60;
    v80 = v60;
    if ( v79 < v59 )
      v62 = 1;
    v64 = v41[33] - v59;
    LODWORD(v82) = v62;
    v65 = v64 + v79;
    v79 += v64;
    if ( !v61 )
      break;
    ObfReferenceObjectWithTag(v61, 0x67655256u);
    VrpUnlockJobContextShared(v9);
    if ( v9 != Object )
      ObfDereferenceObjectWithTag(v9, 0x67655256u);
    v9 = (signed __int64 *)v61;
    DestinationString = (signed __int64 *)v61;
  }
  v66 = a6;
  if ( a6 )
  {
    if ( (_BYTE)v62 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v41 + 12);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v42 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v42 < 0
        || (v94 = 0LL,
            v67 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v94, 0LL),
            v68 = v94,
            v42 = v67,
            v67 < 0) )
      {
        Buffer = v81.Buffer;
        goto LABEL_54;
      }
    }
    else
    {
      v68 = a2;
      PsReferenceSiloContext(a2);
    }
    v63 = v80;
    *v66 = v68;
    v65 = v79;
  }
  v69 = (_WORD *)a7;
  if ( a7 )
  {
    v70 = _mm_cvtsi128_si32(v56);
    v71 = _mm_srli_si128(v56, 8).m128i_u64[0];
    if ( (_BYTE)v62 )
    {
      v72 = (unsigned __int64)v41[12] >> 1;
      for ( i1 = 2 * v72; 2 * v72 < v70; i1 = 2 * v72 )
      {
        if ( *(_WORD *)(i1 + v71) != 92 )
          break;
        ++v72;
      }
    }
    else
    {
      v72 = 0LL;
      for ( i2 = 0LL; (int)i2 < v65; ++i2 )
      {
        for ( i3 = 2 * v72; 2 * v72 < v70; i3 = 2 * v72 )
        {
          if ( *(_WORD *)(i3 + v71) != 92 )
            break;
          ++v72;
        }
        for ( i4 = 2 * v72; 2 * v72 < v70; i4 = 2 * v72 )
        {
          if ( *(_WORD *)(i4 + v71) == 92 )
            break;
          ++v72;
        }
        for ( i5 = 2 * v72; 2 * v72 < v70; i5 = 2 * v72 )
        {
          if ( *(_WORD *)(i5 + v71) != 92 )
            break;
          ++v72;
        }
      }
    }
    v74 = v70 - 2 * v72;
    *(_QWORD *)(a7 + 8) = v71 + 2 * v72;
    *v69 = v74;
    v69[1] = v74;
  }
  if ( a8 )
    *a8 = v63;
  *a9 = *((_DWORD *)v41 + 15);
  *a5 = v56;
  RtlInitUnicodeString(&v81, 0LL);
  Buffer = v81.Buffer;
  v42 = 0;
LABEL_54:
  if ( _InterlockedCompareExchange64(v9 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9 + 2);
  KeAbPostRelease((unsigned __int64)(v9 + 2));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v43, v44);
  if ( v9 && v9 != Object )
    ObfDereferenceObjectWithTag(v9, 0x67655256u);
  if ( Buffer && Buffer != *(wchar_t **)&v95->AvailableEntryBitmap )
    ExFreePoolWithTag(Buffer, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v42;
}
