/*
 * XREFs of VrpTranslatePath @ 0x140938020
 * Callers:
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     VrpUnlockJobContextShared @ 0x14093891C (VrpUnlockJobContextShared.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 jj; // rcx
  __int64 kk; // rax
  __int64 mm; // rax
  __int64 nn; // rax
  wchar_t *v48; // rdi
  unsigned __int16 v49; // r15
  const UNICODE_STRING *v50; // rbx
  unsigned __int16 v51; // cx
  unsigned __int16 v52; // dx
  signed __int64 v53; // rax
  __m128i v54; // xmm6
  int v55; // ecx
  int v56; // r11d
  int v57; // ecx
  int v58; // eax
  void *v59; // rbx
  int v60; // r15d
  int v61; // r11d
  int v62; // eax
  int v63; // r12d
  _QWORD *v64; // rdi
  NTSTATUS v65; // eax
  PVOID v66; // r12
  _WORD *v67; // rbx
  unsigned __int16 v68; // r10
  unsigned __int64 v69; // xmm0_8
  unsigned __int64 v70; // rcx
  __int64 i1; // rax
  __int16 v72; // r10
  __int64 i2; // r9
  __int64 i3; // rax
  __int64 i4; // rax
  __int64 i5; // rax
  int v77; // [rsp+38h] [rbp-D0h]
  int v78; // [rsp+3Ch] [rbp-CCh]
  UNICODE_STRING v79; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v80; // [rsp+58h] [rbp-B0h]
  signed __int64 *DestinationString; // [rsp+60h] [rbp-A8h]
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 *v83; // [rsp+78h] [rbp-90h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v85; // [rsp+88h] [rbp-80h]
  __int64 v86; // [rsp+90h] [rbp-78h]
  _QWORD v87[2]; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v92; // [rsp+158h] [rbp+50h] BYREF
  struct _KLOCK_ENTRIES *v93; // [rsp+160h] [rbp+58h]

  v93 = a4;
  v9 = Object;
  DestinationString = Object;
  Source = 0LL;
  v78 = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v10 = *(UNICODE_STRING *)&a4->Thread;
  v77 = *(unsigned __int16 *)(a3 + 32);
  DestinationString_8 = 0LL;
  v79 = v10;
  LOBYTE(v80) = 0;
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
    Buffer = v79.Buffer;
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
    v86 = 0LL;
    v85 = 0LL;
    v83 = 0LL;
    if ( !v9[6] )
      goto LABEL_53;
    Length = v79.Length;
    LOWORD(v92) = v79.Length;
    while ( 2 )
    {
      if ( v16 < v9[6] )
      {
        v20 = v9[5];
        v21 = v16;
        v19 = v20 * v16;
        *(_QWORD *)&v79.Length = 0LL;
        if ( !is_mul_ok(v20, v21) || (v22 = v9[9], v23 = (unsigned __int16 **)(v22 + v19), (unsigned __int64)v23 < v22) )
          v23 = 0LL;
        v24 = *v23;
        v25 = 0LL;
        *(_QWORD *)&v79.Length = *v23;
        v26 = 0;
        v27 = 0LL;
        v28 = 0LL;
        while ( 1 )
        {
          v29 = v27;
          for ( i = 0; 2 * v27 < (unsigned __int64)Length; v29 = v27 )
          {
            if ( v79.Buffer[v29] != 92 )
              break;
            ++v27;
          }
          v31 = v27;
          for ( j = &v79.Buffer[v27]; 2 * v27 < (unsigned __int64)Length; v31 = v27 )
          {
            if ( v79.Buffer[v31] == 92 )
              break;
            ++v27;
            i += 2;
          }
          for ( k = v27; 2 * v27 < (unsigned __int64)Length; k = v27 )
          {
            if ( v79.Buffer[k] != 92 )
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
              v24 = *(unsigned __int16 **)&v79.Length;
              v15 = 0;
              goto LABEL_46;
            }
LABEL_43:
            v24 = *(unsigned __int16 **)&v79.Length;
            v15 = 0;
            v25 = 0LL;
            goto LABEL_46;
          }
          v24 = *(unsigned __int16 **)&v79.Length;
          ++v25;
          v15 = 0;
        }
        v15 = 0;
        if ( !v26 )
        {
          v9 = DestinationString;
          v17 = v25;
          Length = (unsigned __int16)v92;
          v41 = v24;
          goto LABEL_52;
        }
LABEL_46:
        v17 = v85;
        if ( v25 > v85 )
        {
          v17 = v25;
          v85 = v25;
          v83 = v24;
        }
        v9 = DestinationString;
        Length = (unsigned __int16)v92;
        if ( v26 >= 0 )
        {
          v16 = ++v86;
          continue;
        }
      }
      break;
    }
    v41 = v83;
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
        if ( v79.Buffer[kk] != 92 )
          break;
        ++jj;
      }
      for ( mm = jj; 2 * jj < (unsigned __int64)Length; mm = jj )
      {
        if ( v79.Buffer[mm] == 92 )
          break;
        ++jj;
      }
      for ( nn = jj; 2 * jj < (unsigned __int64)Length; nn = jj )
      {
        if ( v79.Buffer[nn] != 92 )
          break;
        ++jj;
      }
    }
    v48 = &v79.Buffer[jj];
    Source.Buffer = v48;
    v87[0] = 0LL;
    v49 = Length - 2 * jj;
    v87[1] = 0LL;
    DestinationString_8.Length = 0;
    Source.Length = v49;
    v50 = (const UNICODE_STRING *)v87;
    Source.MaximumLength = v49;
    if ( v41 != (unsigned __int16 *)-24LL )
      v50 = (const UNICODE_STRING *)(v41 + 12);
    v51 = v50->Length + v49;
    if ( v51 < v50->Length || (unsigned __int16)(v51 + 2) < v51 )
    {
      v42 = -1073741811;
      goto LABEL_54;
    }
    DestinationString_8.MaximumLength = v51 + 2;
    DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !DestinationString_8.Buffer )
    {
      v42 = -1073741670;
      goto LABEL_54;
    }
    RtlCopyUnicodeString(&DestinationString_8, v50);
    if ( v49 )
    {
      if ( *v48 != 92 && (!v50->Length || v50->Buffer[((unsigned __int64)v50->Length >> 1) - 1] != 92) )
        RtlAppendUnicodeToString(&DestinationString_8, L"\\");
      RtlAppendUnicodeStringToString(&DestinationString_8, &Source);
    }
    v52 = DestinationString_8.Length;
    v53 = ((unsigned __int64)DestinationString_8.Length >> 1) - 1;
    if ( v53 >= 0 )
    {
      do
      {
        if ( DestinationString_8.Buffer[v53] != 92 )
          break;
        v52 -= 2;
        --v53;
      }
      while ( v53 >= 0 );
      v9 = DestinationString;
      DestinationString_8.Length = v52;
    }
    if ( v79.Buffer != *(wchar_t **)&v93->AvailableEntryBitmap )
      ExFreePoolWithTag(v79.Buffer, 0);
    v54 = (__m128i)DestinationString_8;
    v79 = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    v55 = *((_DWORD *)v41 + 14);
    v56 = v55 & 4 | v78;
    if ( v9 == Object )
      v56 |= v55 & 2;
    v57 = v41[32];
    v58 = v56 | 0x20000000;
    v59 = (void *)*((_QWORD *)v41 + 2);
    if ( v49 )
      v58 = v56;
    v60 = (unsigned __int8)v80;
    v61 = v58;
    v78 = v58;
    if ( v77 < v57 )
      v60 = 1;
    v62 = v41[33] - v57;
    LODWORD(v80) = v60;
    v63 = v62 + v77;
    v77 += v62;
    if ( !v59 )
      break;
    ObfReferenceObjectWithTag(v59, 0x67655256u);
    VrpUnlockJobContextShared(v9);
    if ( v9 != Object )
      ObfDereferenceObjectWithTag(v9, 0x67655256u);
    v9 = (signed __int64 *)v59;
    DestinationString = (signed __int64 *)v59;
  }
  v64 = a6;
  if ( a6 )
  {
    if ( (_BYTE)v60 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v41 + 12);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v42 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v42 < 0
        || (v92 = 0LL,
            v65 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v92, 0LL),
            v66 = v92,
            v42 = v65,
            v65 < 0) )
      {
        Buffer = v79.Buffer;
        goto LABEL_54;
      }
    }
    else
    {
      v66 = a2;
      PsReferenceSiloContext(a2);
    }
    v61 = v78;
    *v64 = v66;
    v63 = v77;
  }
  v67 = (_WORD *)a7;
  if ( a7 )
  {
    v68 = _mm_cvtsi128_si32(v54);
    v69 = _mm_srli_si128(v54, 8).m128i_u64[0];
    if ( (_BYTE)v60 )
    {
      v70 = (unsigned __int64)v41[12] >> 1;
      for ( i1 = 2 * v70; 2 * v70 < v68; i1 = 2 * v70 )
      {
        if ( *(_WORD *)(i1 + v69) != 92 )
          break;
        ++v70;
      }
    }
    else
    {
      v70 = 0LL;
      for ( i2 = 0LL; (int)i2 < v63; ++i2 )
      {
        for ( i3 = 2 * v70; 2 * v70 < v68; i3 = 2 * v70 )
        {
          if ( *(_WORD *)(i3 + v69) != 92 )
            break;
          ++v70;
        }
        for ( i4 = 2 * v70; 2 * v70 < v68; i4 = 2 * v70 )
        {
          if ( *(_WORD *)(i4 + v69) == 92 )
            break;
          ++v70;
        }
        for ( i5 = 2 * v70; 2 * v70 < v68; i5 = 2 * v70 )
        {
          if ( *(_WORD *)(i5 + v69) != 92 )
            break;
          ++v70;
        }
      }
    }
    v72 = v68 - 2 * v70;
    *(_QWORD *)(a7 + 8) = v69 + 2 * v70;
    *v67 = v72;
    v67[1] = v72;
  }
  if ( a8 )
    *a8 = v61;
  *a9 = *((_DWORD *)v41 + 15);
  *a5 = v54;
  RtlInitUnicodeString(&v79, 0LL);
  Buffer = v79.Buffer;
  v42 = 0;
LABEL_54:
  if ( _InterlockedCompareExchange64(v9 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9 + 2);
  KeAbPostRelease((unsigned __int64)(v9 + 2));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 && v9 != Object )
    ObfDereferenceObjectWithTag(v9, 0x67655256u);
  if ( Buffer && Buffer != *(wchar_t **)&v93->AvailableEntryBitmap )
    ExFreePoolWithTag(Buffer, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v42;
}
