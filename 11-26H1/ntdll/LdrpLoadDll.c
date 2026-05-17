/*
 * XREFs of LdrpLoadDll @ 0x180051A00
 * Callers:
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x1800BE60C (LdrpCorInitialize.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106D68 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1801180E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     LdrpApplyFileNameRedirection @ 0x180042DA0 (LdrpApplyFileNameRedirection.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180051F90 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrpGetFullPath @ 0x1800850A0 (LdrpGetFullPath.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A6E20 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDll(unsigned __int16 *ArgList, __int64 a2, int a3, __int64 a4)
{
  int appended; // ebx
  __int64 v7; // r12
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  char v10; // di
  __int16 *Atom; // r15
  __int64 v12; // r8
  int v13; // eax
  char *v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  _WORD *v17; // rax
  int v18; // edi
  unsigned __int64 v19; // rdx
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
  char v35[8]; // [rsp+78h] [rbp-90h] BYREF
  __int16 *v36; // [rsp+80h] [rbp-88h]
  __int16 v37; // [rsp+88h] [rbp-80h] BYREF
  char v38[254]; // [rsp+8Ah] [rbp-7Eh] BYREF

  v34 = a2;
  v33 = a4;
  *(_DWORD *)&v35[4] = 0;
  memset_thunk_772440563353939046(v38, 0, 0xFEuLL);
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
    v27 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v27 & 0x20) != 0 )
      LdrpLogEtwEvent(5288, 0, 0, 0, (__int64)ArgList, 0LL);
  }
  v10 = 0;
  *(_DWORD *)v35 = 0x1000000;
  Atom = &v37;
  v36 = &v37;
  v12 = 256LL;
  v37 = 0;
  v31 = 0;
  if ( (a3 & 0x800008) == 0 )
  {
    v13 = LdrpApplyFileNameRedirection(0LL, ArgList, 256LL, (unsigned __int16 *)v35, &v31);
    appended = v13;
    if ( v13 < 0 )
    {
      v18 = v13;
LABEL_27:
      LODWORD(v29) = appended;
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrutil.c",
        2862,
        (__int64)"LdrpPreprocessDllName",
        0,
        "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        ArgList,
        v29);
      v32 = v18;
      goto LABEL_28;
    }
    Atom = v36;
    v12 = *(unsigned __int16 *)&v35[2];
    v10 = v31;
  }
  v14 = (char *)ArgList;
  if ( *(_WORD *)v35 )
  {
    v25 = "SxS";
    if ( !v10 )
      v25 = "API set";
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      2801,
      (__int64)"LdrpPreprocessDllName",
      2,
      "DLL %wZ was redirected to %wZ by %s\n",
      ArgList,
      v35,
      v25);
    v14 = v35;
    goto LABEL_19;
  }
  v15 = *ArgList;
  v16 = *((_QWORD *)ArgList + 1);
  v17 = (_WORD *)(v16 + v15);
  do
  {
    if ( (unsigned __int64)--v17 < v16 )
    {
      appended = 0;
      if ( !(_WORD)v15 )
        goto LABEL_20;
      if ( (int)v15 + 2 <= (unsigned int)(unsigned __int16)v12 )
        goto LABEL_18;
      if ( (unsigned int)(v15 + 2) > 0xFFFE )
      {
        appended = -1073741562;
LABEL_20:
        v18 = appended;
        if ( appended >= 0 )
          goto LABEL_21;
        goto LABEL_27;
      }
      v26 = (v15 + 65) & 0xFFFFFFC0;
      if ( v26 > 0xFFFE )
        v26 = 65534;
      if ( Atom == &v37 )
      {
        Atom = (__int16 *)RtlpAllocateAtom(v26);
        if ( !Atom )
          goto LABEL_50;
        if ( *(_WORD *)v35 )
          memmove(Atom, v36, *(unsigned __int16 *)v35);
      }
      else
      {
        Atom = (__int16 *)NtdllpReallocateStringRoutine(v26, Atom, v12, v15);
        if ( !Atom )
        {
LABEL_50:
          appended = -1073741801;
LABEL_19:
          Atom = v36;
          goto LABEL_20;
        }
      }
      v36 = Atom;
      *(_WORD *)&v35[2] = v26;
LABEL_18:
      appended = 0;
      memmove((char *)Atom + *(unsigned __int16 *)v35, *((const void **)ArgList + 1), *ArgList);
      *(_WORD *)v35 += *ArgList;
      v36[(unsigned __int64)*(unsigned __int16 *)v35 >> 1] = 0;
      goto LABEL_19;
    }
  }
  while ( *v17 != 92 && *v17 != 47 );
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(ArgList) == 5 )
  {
    appended = LdrpAppendUnicodeStringToFilenameBuffer(v35, ArgList);
    goto LABEL_19;
  }
  appended = LdrpGetFullPath(ArgList, v35);
  v18 = appended;
  if ( appended < 0 )
    goto LABEL_27;
  Atom = v36;
LABEL_21:
  v19 = *((_QWORD *)v14 + 1);
  v20 = (__int16 *)(v19 + *(unsigned __int16 *)v14);
  do
  {
    if ( (unsigned __int64)--v20 < v19 )
      break;
    v21 = *v20;
    if ( *v20 == 46 )
    {
      for ( i = (__int16 *)((char *)Atom + *(unsigned __int16 *)v35 - 2); i >= Atom; --i )
      {
        if ( *i != 46 )
          break;
        *(_WORD *)v35 -= 2;
      }
      i[1] = 0;
      goto LABEL_37;
    }
  }
  while ( v21 != 47 && v21 != 92 );
  appended = LdrpAppendUnicodeStringToFilenameBuffer(v35, L"\b\n");
  v18 = appended;
  if ( appended < 0 )
    goto LABEL_27;
LABEL_37:
  v32 = v18;
  LdrpLoadDllInternal((char)v35, 0LL, 0LL, v33, (__int64)&v32, 0LL, v30);
LABEL_28:
  if ( &v37 != v36 )
    RtlpSysVolFree((__int64)v36);
  *(_DWORD *)v35 = 0x1000000;
  v36 = &v37;
  v37 = 0;
  v22 = NtCurrentPeb()->SharedData;
  if ( v22 && *v22 )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v28 = 2147353477LL;
    if ( (*(_BYTE *)v28 & 0x20) != 0 )
      LdrpLogEtwEvent(5289, 0, 0, 0, (__int64)ArgList, 0LL);
  }
  return v32;
}
