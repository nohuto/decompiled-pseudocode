/*
 * XREFs of SepCopyTokenLoggingInformation @ 0x140A4ECB4
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14043A480 (SepCopyTokenIntegrity.c)
 *     SepGetTokenElevation @ 0x1404707C0 (SepGetTokenElevation.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 *     SepGetTokenElevationType @ 0x1404A4C78 (SepGetTokenElevationType.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x140A4EE60 (RtlCopySidAndAttributesArray.c)
 */

__int64 __fastcall SepCopyTokenLoggingInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        ULONG SidAreaSize)
{
  void *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  ULONG v14; // eax
  ULONG v15; // r8d
  __int64 v16; // r14
  _SID_AND_ATTRIBUTES *v17; // rbx
  ULONG v18; // r8d
  char *SidArea; // rax
  __int64 result; // rax
  __int128 Sid; // [rsp+40h] [rbp-28h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp+8h] BYREF

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
  v15 = SidAreaSize;
  *(_DWORD *)(a2 + 16) = v14;
  RtlCopySidAndAttributesArray(
    1u,
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v15,
    (PSID_AND_ATTRIBUTES)(a2 + 24),
    (PSID)(a2 + 80),
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  v16 = a2 + 80 + SidAreaSize;
  if ( a6 )
  {
    v10 = (void *)(a2 + 80 + SidAreaSize);
    memmove(v10, *(const void **)(a1 + 1104), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 1104) + 1LL) + 8);
  }
  v17 = (_SID_AND_ATTRIBUTES *)(v16 + a6);
  v18 = a4 - a5;
  SidArea = (char *)v17 + a5;
  *(_QWORD *)(a2 + 40) = v10;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v18,
    v17,
    SidArea,
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  result = *(unsigned int *)(a1 + 124);
  *(_QWORD *)(a2 + 72) = v17;
  *(_DWORD *)(a2 + 64) = result;
  *(_DWORD *)(a2 + 68) = a4;
  return result;
}
