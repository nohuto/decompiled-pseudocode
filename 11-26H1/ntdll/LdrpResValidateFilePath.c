/*
 * XREFs of LdrpResValidateFilePath @ 0x1800D92B8
 * Callers:
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDetermineDosPathNameType_U @ 0x18009BB50 (RtlDetermineDosPathNameType_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800D9500 (RtlDosPathNameToNtPathName_U.c)
 *     ZwQueryAttributesFile @ 0x18015F6E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResValidateFilePath(__int16 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  signed int v6; // edi
  int v7; // edx
  __int64 v9; // [rsp+20h] [rbp-A8h] BYREF
  const wchar_t *v10; // [rsp+28h] [rbp-A0h]
  __int64 v11; // [rsp+30h] [rbp-98h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-90h]
  int v13; // [rsp+40h] [rbp-88h]
  __int128 v14; // [rsp+48h] [rbp-80h] BYREF
  __int128 v15; // [rsp+58h] [rbp-70h] BYREF
  __int128 v16; // [rsp+68h] [rbp-60h]
  __int128 v17; // [rsp+78h] [rbp-50h]
  _BYTE v18[32]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-20h]

  v15 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v17 = 0LL;
  DWORD2(v17) = 0;
  v14 = 0LL;
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  v9 = 3932218LL;
  v10 = L"LdrpResValidateFilePath Enter";
  v11 = 3801144LL;
  v12 = L"LdrpResValidateFilePath Exit";
  v2 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v3 = 2147353477LL;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v4 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v5 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v9, *(unsigned __int8 *)v5);
  }
  else
  {
    v4 = 2147353476LL;
  }
  if ( !a1 || (v7 = RtlDetermineDosPathNameType_U(a1), v13 = v7, ((v7 - 1) & 0xFFFFFFFA) != 0) || v7 == 5 )
  {
    v6 = -1073741811;
  }
  else if ( (unsigned __int8)((__int64 (__fastcall *)(__int16 *, __int128 *, _QWORD, _QWORD, __int64, const wchar_t *, __int64, const wchar_t *, int))RtlDosPathNameToNtPathName_U)(
                               a1,
                               &v14,
                               0LL,
                               0LL,
                               v9,
                               v10,
                               v11,
                               v12,
                               v13) )
  {
    LODWORD(v15) = 48;
    *((_QWORD *)&v15 + 1) = 0LL;
    DWORD2(v16) = 64;
    *(_QWORD *)&v16 = &v14;
    v17 = 0LL;
    v6 = ZwQueryAttributesFile(&v15, v18);
    RtlFreeHeap_0();
    if ( v6 >= 0 )
      v6 = (v19 & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    v6 = -1073741766;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v11, *(unsigned __int8 *)v4);
  }
  return (unsigned int)v6;
}
