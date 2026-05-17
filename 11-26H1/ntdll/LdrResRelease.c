/*
 * XREFs of LdrResRelease @ 0x180103100
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18002D090 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x180032E70 (LdrRemoveLoadAsDataTable.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned int v10; // edi
  __int64 v12; // rcx
  int v13; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0;
  DestinationString = 0LL;
  v14[0] = 2621478LL;
  v14[1] = L"LdrResRelease Enter";
  v15[0] = 2490404LL;
  v15[1] = L"LdrResRelease Exit";
  v6 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v14, *(unsigned __int8 *)v12);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !String2 )
    return 3221225485LL;
  v18 = 0LL;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v17) )
        return 3221225485LL;
    }
    else
    {
      v17 = 0;
    }
    LOWORD(SourceString) = v17;
  }
  if ( (a3 & 0xC00) != 0 )
  {
    v13 = LdrRemoveLoadAsDataTable(String2, &v18, 0LL, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073740024 && v13 != -1073741511 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  else
  {
    v18 = String2;
  }
  v9 = (unsigned __int64)v18;
  LdrUnloadAlternateResourceModuleEx((__int64)v18, (__int16)SourceString);
  if ( (a3 & 0xC00) != 0 && v9 )
    NtUnmapViewOfSection(-1LL, v9 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_11:
  v10 = 0;
LABEL_12:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v15, *(unsigned __int8 *)v8);
  }
  return v10;
}
