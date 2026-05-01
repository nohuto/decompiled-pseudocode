/*
 * XREFs of SdbResolveDatabaseEx @ 0x18009127C
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x18009015C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x18008FAC4 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x180091150 (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x180091254 (SdbGetPathSystemSdb.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslRegistryGetUInt32_UStr @ 0x1800992B4 (AslRegistryGetUInt32_UStr.c)
 *     AslRegistryOpenKey_UStr @ 0x1800993A8 (AslRegistryOpenKey_UStr.c)
 *     AslGuidToString_UStr @ 0x18009959C (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x180099F48 (AslUnicodeStringFree.c)
 */

__int64 __fastcall SdbResolveDatabaseEx(__int64 a1, _QWORD *a2, GUID *a3, int *a4, _WORD *a5, int a6)
{
  int *v8; // r14
  __int64 v11; // rbx
  WCHAR *v12; // r15
  GUID **v13; // rdx
  unsigned int i; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r12d
  int v18; // eax
  int v19; // eax
  int v21; // eax
  unsigned int v22; // r12d
  WCHAR *Heap; // rax
  int v24; // eax
  __int64 v25; // rdx
  int UInt32_UStr; // eax
  int v27; // eax
  int v28; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-10h] BYREF
  int v33; // [rsp+B0h] [rbp+50h]

  a6 = 0;
  v28 = 0;
  Handle = 0LL;
  v8 = (int *)a3;
  LODWORD(v11) = 0;
  v12 = 0LL;
  Destination = 0LL;
  Source = 0LL;
  if ( !a5 )
    return 0LL;
  *a5 = 0;
  v13 = &off_1800E13B0;
  for ( i = 0; i < 6; ++i )
  {
    a3 = *v13;
    v15 = *(_QWORD *)&(*v13)->Data1 - *a2;
    if ( !v15 )
      v15 = *(_QWORD *)a3->Data4 - a2[1];
    if ( !v15 )
    {
      v16 = 3LL * (int)i;
      a3 = (GUID *)*((unsigned int *)&off_1800E13B0 + 2 * v16 + 4);
      v17 = *((_DWORD *)&off_1800E13B0 + 2 * v16 + 2);
      v18 = *((_DWORD *)&off_1800E13B0 + 2 * v16 + 3);
      a6 = v17;
      v33 = v18;
      if ( (_DWORD)a3 )
      {
        if ( SdbGetPathSystemSdb((int)a5, (int)v13, (int)a3, a1 + 584) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( a5[v11] );
        }
        else
        {
          AslLogCallPrintf(1LL, "SdbResolveDatabaseEx", 2353LL, "SdbGetPathSystemSdb failed.");
        }
        if ( v8 )
          *v8 = v17;
        if ( a4 )
        {
          v19 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(31);
          *a4 = v19;
          if ( v33 )
            *a4 = v19 & 0x1B;
        }
        return (unsigned int)v11;
      }
      break;
    }
    v13 += 3;
  }
  v21 = AslGuidToString_UStr(&Source, a2, a3, a1);
  if ( v21 < 0 )
  {
    AslLogCallPrintf(1LL, "SdbResolveDatabaseEx", 2376LL, "Failed to convert guid to string [%x]", v21);
    goto LABEL_38;
  }
  v22 = Source.Length + 184;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
  v12 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1LL, "SdbResolveDatabaseEx", 2397LL, "Failed to allocate %ld bytes for key path", v22);
    goto LABEL_38;
  }
  Destination.MaximumLength = v22;
  Destination.Buffer = Heap;
  Destination.Length = 0;
  RtlAppendUnicodeToString(
    &Destination,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
  RtlAppendUnicodeToString(&Destination, L"\\");
  RtlAppendUnicodeStringToString(&Destination, &Source);
  v24 = AslRegistryOpenKey_UStr(&Handle, &Destination);
  if ( v24 < 0 )
  {
    AslLogCallPrintf(1LL, "SdbResolveDatabaseEx", 2413LL, "Failed to open Key \"%ws\" [%x]", Destination.Buffer, v24);
    goto LABEL_38;
  }
  if ( v8 )
  {
    UInt32_UStr = AslRegistryGetUInt32_UStr(&a6, Handle, &g_ustrDatabaseType);
    if ( UInt32_UStr < 0 )
    {
      AslLogCallPrintf(1LL, "SdbResolveDatabaseEx", 2425LL, "Failed to get database type [%x]", UInt32_UStr);
      *v8 = 0;
      goto LABEL_38;
    }
    *v8 = a6 & 0x7FFFFFFF;
  }
  if ( a4 )
  {
    v27 = AslRegistryGetUInt32_UStr(&v28, Handle, L".0");
    if ( v27 < 0 )
    {
      AslLogCallPrintf(1LL, "SdbResolveDatabaseEx", 2441LL, "Failed to get runtime platform [%x]", v27);
      *a4 = 0;
      goto LABEL_38;
    }
    *a4 = v28;
  }
  if ( SdbGetPathCustomSdb((int)a5, v25, (__int64)a2, a1 + 584) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbResolveDatabaseEx", 2450LL, "SdbGetPathCustomSdb failed to get the database path.");
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
  if ( v12 )
    AslFree(NtCurrentPeb()->ProcessHeap, v12);
  if ( Source.Buffer )
    AslUnicodeStringFree(&Source);
  return (unsigned int)v11;
}
