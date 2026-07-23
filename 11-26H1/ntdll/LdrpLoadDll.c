/*
 * XREFs of LdrpLoadDll @ 0x18003BF80
 * Callers:
 *     LdrLoadDll @ 0x18002DF80 (LdrLoadDll.c)
 *     LdrpLoadWow64 @ 0x18007DAB0 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106768 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180117E90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x18011CDB4 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18003C510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrpGetFullPath @ 0x18007C440 (LdrpGetFullPath.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A5F50 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDll(_UNICODE_STRING *a1, __int64 a2, int a3, __int64 a4)
{
  int appended; // ebx
  __int64 v7; // r12
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  char v10; // di
  __int16 *p_BaseAddress; // r15
  unsigned __int16 MaximumLength; // r8
  int v13; // eax
  _UNICODE_STRING *v14; // rsi
  __int64 Length; // r9
  wchar_t *Buffer; // rdx
  _WORD *v17; // rax
  int v18; // edi
  wchar_t *v19; // rdx
  __int16 *v20; // rax
  __int16 v21; // cx
  _DWORD *v22; // rcx
  __int16 *i; // rcx
  const char *v25; // rax
  unsigned int v26; // ebx
  char *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int16 v30; // [rsp+50h] [rbp-B8h]
  char v31; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h]
  __int64 v34; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING v35; // [rsp+78h] [rbp-90h] BYREF
  __int16 BaseAddress; // [rsp+88h] [rbp-80h] BYREF
  char v37[254]; // [rsp+8Ah] [rbp-7Eh] BYREF

  v34 = a2;
  v33 = a4;
  *(_DWORD *)(&v35.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v37, 0, 0xFEuLL);
  appended = 0;
  v7 = 2147353476LL;
  v32 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v27 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v27 & 0x20) != 0 )
      LdrpLogEtwEvent(5288, 0, 0, 0, (__int64)a1, 0LL);
  }
  v10 = 0;
  *(_DWORD *)&v35.Length = 0x1000000;
  p_BaseAddress = &BaseAddress;
  v35.Buffer = (wchar_t *)&BaseAddress;
  MaximumLength = 256;
  BaseAddress = 0;
  v31 = 0;
  if ( (a3 & 0x800008) == 0 )
  {
    v13 = LdrpApplyFileNameRedirection(0LL, a1, 256LL, &v35, &v31);
    appended = v13;
    if ( v13 < 0 )
    {
      v18 = v13;
LABEL_27:
      LODWORD(v29) = appended;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrutil.c",
        2862,
        (__int64)"LdrpPreprocessDllName",
        0,
        "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        a1,
        v29);
      v32 = v18;
      goto LABEL_28;
    }
    p_BaseAddress = (__int16 *)v35.Buffer;
    MaximumLength = v35.MaximumLength;
    v10 = v31;
  }
  v14 = a1;
  if ( v35.Length )
  {
    v25 = "SxS";
    if ( !v10 )
      v25 = "API set";
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      2801,
      (__int64)"LdrpPreprocessDllName",
      2,
      "DLL %wZ was redirected to %wZ by %s\n",
      a1,
      &v35,
      v25);
    a3 |= 0x200u;
    if ( v10 )
      a3 |= 4u;
    v14 = &v35;
    goto LABEL_19;
  }
  Length = a1->Length;
  Buffer = a1->Buffer;
  v17 = (wchar_t *)((char *)Buffer + Length);
  do
  {
    if ( --v17 < Buffer )
    {
      a3 |= 0x20u;
      appended = 0;
      if ( !(_WORD)Length )
        goto LABEL_20;
      if ( (int)Length + 2 <= (unsigned int)MaximumLength )
        goto LABEL_18;
      if ( (unsigned int)(Length + 2) > 0xFFFE )
      {
        appended = -1073741562;
LABEL_20:
        v18 = appended;
        if ( appended >= 0 )
          goto LABEL_21;
        goto LABEL_27;
      }
      v26 = (Length + 65) & 0xFFFFFFC0;
      if ( v26 > 0xFFFE )
        v26 = 65534;
      if ( p_BaseAddress == &BaseAddress )
      {
        p_BaseAddress = (__int16 *)RtlpAllocateAtom(v26);
        if ( !p_BaseAddress )
          goto LABEL_52;
        if ( v35.Length )
          memmove(p_BaseAddress, v35.Buffer, v35.Length);
      }
      else
      {
        p_BaseAddress = (__int16 *)NtdllpReallocateStringRoutine(v26, p_BaseAddress);
        if ( !p_BaseAddress )
        {
LABEL_52:
          appended = -1073741801;
LABEL_19:
          p_BaseAddress = (__int16 *)v35.Buffer;
          goto LABEL_20;
        }
      }
      v35.Buffer = (wchar_t *)p_BaseAddress;
      v35.MaximumLength = v26;
LABEL_18:
      appended = 0;
      memmove((char *)p_BaseAddress + v35.Length, a1->Buffer, a1->Length);
      v35.Length += a1->Length;
      v35.Buffer[(unsigned __int64)v35.Length >> 1] = 0;
      goto LABEL_19;
    }
  }
  while ( *v17 != 92 && *v17 != 47 );
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) == 5 )
  {
    appended = LdrpAppendUnicodeStringToFilenameBuffer(&v35, a1);
    goto LABEL_19;
  }
  appended = LdrpGetFullPath(a1, &v35);
  v18 = appended;
  if ( appended < 0 )
    goto LABEL_27;
  p_BaseAddress = (__int16 *)v35.Buffer;
  a3 |= 0x600u;
LABEL_21:
  v19 = v14->Buffer;
  v20 = (__int16 *)((char *)v19 + v14->Length);
  do
  {
    if ( --v20 < (__int16 *)v19 )
      break;
    v21 = *v20;
    if ( *v20 == 46 )
    {
      for ( i = (__int16 *)((char *)p_BaseAddress + v35.Length - 2); i >= p_BaseAddress; --i )
      {
        if ( *i != 46 )
          break;
        v35.Length -= 2;
      }
      i[1] = 0;
      goto LABEL_37;
    }
  }
  while ( v21 != 47 && v21 != 92 );
  appended = LdrpAppendUnicodeStringToFilenameBuffer(&v35, &LdrpDefaultExtension);
  v18 = appended;
  if ( appended < 0 )
    goto LABEL_27;
LABEL_37:
  v32 = v18;
  LdrpLoadDllInternal((int)&v35, v34, a3, 4, 0LL, 0LL, v33, (__int64)&v32, 0LL, v30);
LABEL_28:
  if ( &BaseAddress != (__int16 *)v35.Buffer )
    RtlpSysVolFree(v35.Buffer);
  *(_DWORD *)&v35.Length = 0x1000000;
  v35.Buffer = (wchar_t *)&BaseAddress;
  BaseAddress = 0;
  v22 = NtCurrentPeb()->SharedData;
  if ( v22 && *v22 )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v28 = 2147353477LL;
    if ( (*(_BYTE *)v28 & 0x20) != 0 )
      LdrpLogEtwEvent(5289, 0, 0, 0, (__int64)a1, 0LL);
  }
  return v32;
}
