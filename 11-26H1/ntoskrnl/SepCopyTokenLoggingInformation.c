/*
 * XREFs of SepCopyTokenLoggingInformation @ 0x140A33D54
 * Callers:
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x140441970 (SepCopyTokenIntegrity.c)
 *     SepGetTokenElevation @ 0x140477040 (SepGetTokenElevation.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140491650 (RtlSubAuthorityCountSid.c)
 *     SepGetTokenElevationType @ 0x1404AB5E8 (SepGetTokenElevationType.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x140A33F00 (RtlCopySidAndAttributesArray.c)
 */

__int64 __fastcall SepCopyTokenLoggingInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  void *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  ULONG v14; // eax
  int v15; // r8d
  __int64 v16; // r14
  __int64 v17; // rbx
  int v18; // r8d
  void *v19; // rax
  __int64 result; // rax
  __int128 Sid; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  Sid = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 4) = SepGetTokenElevation(a1);
  *(_DWORD *)(a2 + 8) = SepGetTokenElevationType(a1);
  v10 = 0LL;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 196);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 48) = *(_DWORD *)(a1 + 120);
  v11 = *(_QWORD *)(a1 + 1080);
  if ( v11 )
    v12 = *(_DWORD *)(v11 + 40);
  else
    v12 = 0;
  *(_DWORD *)(a2 + 52) = v12;
  SepCopyTokenIntegrity(a1, (__int64)&Sid);
  v13 = *RtlSubAuthorityCountSid((PSID)Sid);
  if ( (_BYTE)v13 )
    v14 = *RtlSubAuthoritySid((PSID)Sid, v13 - 1);
  else
    v14 = 0;
  v15 = a7;
  *(_DWORD *)(a2 + 16) = v14;
  RtlCopySidAndAttributesArray(1, *(_QWORD *)(a1 + 152), v15, a2 + 24, (void *)(a2 + 80), (__int64)&v22, (__int64)&v22);
  v16 = a2 + 80 + a7;
  if ( a6 )
  {
    v10 = (void *)(a2 + 80 + a7);
    memmove(v10, *(const void **)(a1 + 1104), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 1104) + 1LL) + 8);
  }
  v17 = v16 + a6;
  v18 = a4 - a5;
  v19 = (void *)(v17 + a5);
  *(_QWORD *)(a2 + 40) = v10;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(_QWORD *)(a1 + 152),
    v18,
    v17,
    v19,
    (__int64)&v22,
    (__int64)&v22);
  result = *(unsigned int *)(a1 + 124);
  *(_QWORD *)(a2 + 72) = v17;
  *(_DWORD *)(a2 + 64) = result;
  *(_DWORD *)(a2 + 68) = a4;
  return result;
}
