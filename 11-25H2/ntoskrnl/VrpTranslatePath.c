/*
 * XREFs of VrpTranslatePath @ 0x140947B60
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1409475FC (VrpPreOpenOrCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     VrpUnlockJobContextShared @ 0x140949070 (VrpUnlockJobContextShared.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpTranslatePath(
        signed __int64 *Object,
        void *a2,
        __int64 a3,
        char **a4,
        __m128i *a5,
        _QWORD *a6,
        __int64 a7,
        int *a8,
        _DWORD *a9)
{
  int v9; // eax
  unsigned __int16 v10; // si
  signed __int64 *v11; // r14
  __int128 v12; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v14; // rbx
  bool v15; // zf
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int16 v18; // r15
  char *v19; // r12
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // kr00_8
  unsigned __int64 v22; // kr10_8
  unsigned __int64 v23; // rcx
  unsigned __int16 **v24; // rax
  unsigned __int16 *v25; // r11
  unsigned __int64 v26; // r13
  int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int16 i; // r14
  __int64 v32; // rax
  const wchar_t *j; // r10
  __int64 k; // rax
  unsigned __int64 v35; // rcx
  __int64 m; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  const wchar_t *n; // r9
  __int64 ii; // rax
  unsigned __int64 v41; // r8
  unsigned __int16 *v42; // r13
  NTSTATUS v43; // ebx
  __int64 jj; // rcx
  __int64 kk; // rax
  __int64 mm; // rax
  __int64 nn; // rax
  wchar_t *v49; // rdi
  unsigned __int16 v50; // r15
  const UNICODE_STRING *v51; // rbx
  unsigned __int16 v52; // cx
  unsigned __int16 Length; // dx
  signed __int64 v54; // rax
  __m128i v55; // xmm6
  int v56; // ecx
  int v57; // r12d
  int v58; // ecx
  int v59; // eax
  void *v60; // rbx
  char v61; // r15
  int v62; // r12d
  int v63; // r8d
  NTSTATUS v64; // eax
  PVOID v65; // r12
  unsigned __int16 v66; // r9
  unsigned __int64 v67; // xmm0_8
  unsigned __int64 v68; // rcx
  __int64 i1; // rax
  __int64 v70; // r11
  __int16 v71; // r9
  __int64 i2; // rax
  __int64 i3; // rax
  __int64 i4; // rax
  int v75; // [rsp+38h] [rbp-D0h]
  int v76; // [rsp+3Ch] [rbp-CCh]
  char DestinationString; // [rsp+40h] [rbp-C8h]
  UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *v79; // [rsp+58h] [rbp-B0h]
  PVOID v80; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v81; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v83; // [rsp+78h] [rbp-90h]
  __int64 v84; // [rsp+80h] [rbp-88h]
  PVOID v85; // [rsp+88h] [rbp-80h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v87[2]; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v93; // [rsp+178h] [rbp+70h]

  v9 = *(unsigned __int16 *)(a3 + 32);
  v10 = 0;
  v11 = Object;
  Source = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v76 = 0;
  Handle = 0LL;
  v12 = *(_OWORD *)a4;
  DestinationString_8 = 0LL;
  *(_OWORD *)P = v12;
  v80 = Object;
  v75 = v9;
  DestinationString = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = KeAbPreAcquire((__int64)(v11 + 2), 0LL);
    if ( _InterlockedCompareExchange64(v11 + 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v11 + 2, 0, v14, (unsigned __int64)(v11 + 2));
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    v15 = v11[6] == 0;
    v16 = 0LL;
    v84 = 0LL;
    v17 = 0LL;
    v83 = 0LL;
    v81 = 0LL;
    if ( v15 )
      goto LABEL_51;
    v18 = (unsigned __int16)P[0];
    v19 = (char *)P[1];
    v93 = (unsigned __int16)P[0];
    while ( 2 )
    {
      if ( v16 < v11[6] )
      {
        v21 = v11[5];
        v22 = v16;
        v20 = v21 * (unsigned __int128)v16;
        v89 = *((_QWORD *)&v20 + 1);
        if ( !is_mul_ok(v21, v22) || (v23 = v11[9], v24 = (unsigned __int16 **)(v23 + v20), (unsigned __int64)v24 < v23) )
          v24 = 0LL;
        v25 = *v24;
        v26 = 0LL;
        v79 = *v24;
        v27 = 0;
        v28 = 0LL;
        v29 = 0LL;
        while ( 1 )
        {
          v30 = 2 * v28;
          for ( i = 0; 2 * v28 < (unsigned __int64)v18; v30 = 2 * v28 )
          {
            if ( *(_WORD *)&v19[v30] != 92 )
              break;
            ++v28;
          }
          v32 = 2 * v28;
          for ( j = (const wchar_t *)&v19[2 * v28]; 2 * v28 < (unsigned __int64)v18; v32 = 2 * v28 )
          {
            if ( *(_WORD *)&v19[v32] == 92 )
              break;
            ++v28;
            i += 2;
          }
          for ( k = 2 * v28; 2 * v28 < (unsigned __int64)v18; k = 2 * v28 )
          {
            if ( *(_WORD *)&v19[k] != 92 )
              break;
            ++v28;
          }
          v35 = *v25;
          for ( m = 2 * v29; 2 * v29 < v35; m = 2 * v29 )
          {
            if ( *(_WORD *)(*((_QWORD *)v25 + 1) + m) != 92 )
              break;
            ++v29;
          }
          v37 = *((_QWORD *)v25 + 1);
          v38 = 2 * v29;
          for ( n = (const wchar_t *)(v37 + 2 * v29); 2 * v29 < v35; v38 = 2 * v29 )
          {
            if ( *(_WORD *)(v37 + v38) == 92 )
              break;
            ++v29;
            v10 += 2;
          }
          for ( ii = 2 * v29; 2 * v29 < v35; ii = 2 * v29 )
          {
            if ( *(_WORD *)(v37 + ii) != 92 )
              break;
            ++v29;
          }
          if ( !i && !v10 )
            break;
          v41 = i;
          if ( i >= v10 )
            v41 = v10;
          v27 = wcsnicmp(j, n, v41 >> 1);
          if ( v27 )
            goto LABEL_42;
          v27 = i - v10;
          if ( i != v10 )
          {
            if ( i && !v10 )
            {
              v25 = v79;
              v10 = 0;
              goto LABEL_45;
            }
LABEL_42:
            v25 = v79;
            v10 = 0;
            v26 = 0LL;
            goto LABEL_45;
          }
          v25 = v79;
          ++v26;
          v10 = 0;
        }
        v10 = 0;
        if ( !v27 )
        {
          v11 = (signed __int64 *)v80;
          v17 = v26;
          v18 = v93;
          v42 = v25;
          goto LABEL_50;
        }
LABEL_45:
        v17 = v83;
        if ( v26 > v83 )
        {
          v17 = v26;
          v83 = v26;
          v81 = v25;
        }
        v11 = (signed __int64 *)v80;
        v18 = v93;
        if ( v27 >= 0 )
        {
          v16 = ++v84;
          continue;
        }
      }
      break;
    }
    v42 = v81;
LABEL_50:
    if ( !v42 )
    {
LABEL_51:
      v43 = -1073741772;
      goto LABEL_52;
    }
    for ( jj = 0LL; v17; --v17 )
    {
      for ( kk = 2 * jj; 2 * jj < (unsigned __int64)v18; kk = 2 * jj )
      {
        if ( *(_WORD *)&v19[kk] != 92 )
          break;
        ++jj;
      }
      for ( mm = 2 * jj; 2 * jj < (unsigned __int64)v18; mm = 2 * jj )
      {
        if ( *(_WORD *)&v19[mm] == 92 )
          break;
        ++jj;
      }
      for ( nn = 2 * jj; 2 * jj < (unsigned __int64)v18; nn = 2 * jj )
      {
        if ( *(_WORD *)&v19[nn] != 92 )
          break;
        ++jj;
      }
    }
    v49 = (wchar_t *)&v19[2 * jj];
    Source.Buffer = v49;
    v87[0] = 0LL;
    v50 = v18 - 2 * jj;
    v87[1] = 0LL;
    DestinationString_8.Length = 0;
    Source.Length = v50;
    v51 = (const UNICODE_STRING *)v87;
    Source.MaximumLength = v50;
    if ( v42 != (unsigned __int16 *)-24LL )
      v51 = (const UNICODE_STRING *)(v42 + 12);
    v52 = v50 + v51->Length;
    if ( v52 < v51->Length || (unsigned __int16)(v52 + 2) < v52 )
    {
      v43 = -1073741811;
      goto LABEL_52;
    }
    DestinationString_8.MaximumLength = v52 + 2;
    DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !DestinationString_8.Buffer )
    {
      v43 = -1073741670;
      goto LABEL_52;
    }
    RtlCopyUnicodeString(&DestinationString_8, v51);
    if ( v50 )
    {
      if ( *v49 != 92 && (!v51->Length || v51->Buffer[((unsigned __int64)v51->Length >> 1) - 1] != 92) )
        RtlAppendUnicodeToString(&DestinationString_8, L"\\");
      RtlAppendUnicodeStringToString(&DestinationString_8, &Source);
    }
    Length = DestinationString_8.Length;
    v54 = ((unsigned __int64)DestinationString_8.Length >> 1) - 1;
    if ( v54 >= 0 )
    {
      do
      {
        if ( DestinationString_8.Buffer[v54] != 92 )
          break;
        Length -= 2;
        --v54;
      }
      while ( v54 >= 0 );
      DestinationString_8.Length = Length;
    }
    if ( v19 != a4[1] )
      ExFreePoolWithTag(v19, 0);
    v55 = (__m128i)DestinationString_8;
    *(UNICODE_STRING *)P = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    v56 = *((_DWORD *)v42 + 14);
    v57 = v56 & 4 | v76;
    if ( v11 == Object )
      v57 |= v56 & 2;
    v58 = v42[32];
    v59 = v57 | 0x20000000;
    v60 = (void *)*((_QWORD *)v42 + 2);
    if ( v50 )
      v59 = v57;
    v61 = DestinationString;
    v62 = v59;
    v76 = v59;
    if ( v75 < v58 )
      v61 = 1;
    DestinationString = v61;
    v63 = v42[33] - v58 + v75;
    v75 = v63;
    if ( !v60 )
      break;
    ObfReferenceObjectWithTag(v60, 0x67655256u);
    VrpUnlockJobContextShared(v11);
    if ( v11 != Object )
      ObfDereferenceObjectWithTag(v11, 0x67655256u);
    v11 = (signed __int64 *)v60;
    v80 = v60;
    v10 = 0;
  }
  if ( a6 )
  {
    if ( v61 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v42 + 12);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v43 = ZwOpenKey(&Handle, 0x80000000, &ObjectAttributes);
      if ( v43 < 0 )
        goto LABEL_52;
      v85 = 0LL;
      v64 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v85, 0LL);
      v65 = v85;
      v43 = v64;
      if ( v64 < 0 )
        goto LABEL_52;
    }
    else
    {
      v65 = a2;
      PsReferenceSiloContext(a2);
    }
    v63 = v75;
    *a6 = v65;
    v62 = v76;
  }
  if ( a7 )
  {
    v66 = _mm_cvtsi128_si32(v55);
    v67 = _mm_srli_si128(v55, 8).m128i_u64[0];
    if ( v61 )
    {
      v68 = (unsigned __int64)v42[12] >> 1;
      for ( i1 = 2 * v68; 2 * v68 < v66; i1 = 2 * v68 )
      {
        if ( *(_WORD *)(i1 + v67) != 92 )
          break;
        ++v68;
      }
    }
    else
    {
      v68 = 0LL;
      v70 = 0LL;
      if ( v63 > 0 )
      {
        do
        {
          for ( i2 = 2 * v68; 2 * v68 < v66; i2 = 2 * v68 )
          {
            if ( *(_WORD *)(i2 + v67) != 92 )
              break;
            ++v68;
          }
          for ( i3 = 2 * v68; 2 * v68 < v66; i3 = 2 * v68 )
          {
            if ( *(_WORD *)(i3 + v67) == 92 )
              break;
            ++v68;
          }
          for ( i4 = 2 * v68; 2 * v68 < v66; i4 = 2 * v68 )
          {
            if ( *(_WORD *)(i4 + v67) != 92 )
              break;
            ++v68;
          }
          ++v70;
        }
        while ( (int)v70 < v75 );
      }
    }
    v71 = v66 - 2 * v68;
    *(_QWORD *)(a7 + 8) = v67 + 2 * v68;
    *(_WORD *)a7 = v71;
    *(_WORD *)(a7 + 2) = v71;
  }
  if ( a8 )
    *a8 = v62;
  *a9 = *((_DWORD *)v42 + 15);
  *a5 = v55;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v43 = 0;
LABEL_52:
  if ( _InterlockedCompareExchange64(v11 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11 + 2);
  KeAbPostRelease((ULONG_PTR)(v11 + 2));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 && v11 != Object )
    ObfDereferenceObjectWithTag(v11, 0x67655256u);
  if ( P[1] && P[1] != a4[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v43;
}
