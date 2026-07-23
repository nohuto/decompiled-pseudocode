/*
 * XREFs of RtlpMuiRegLangInfoMatchesSpec @ 0x1800DE4E4
 * Callers:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DE1D8 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x18004E1E0 (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800505A0 (RtlpInitAndCallLcidToCultureName.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

bool __fastcall RtlpMuiRegLangInfoMatchesSpec(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  __int64 v4; // rbx
  char v5; // bp
  wchar_t *v8; // rsi
  int v9; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  const WCHAR *v17; // rdx
  __int64 v18; // r8
  const wchar_t *v19; // rdx
  wchar_t *v20; // rax
  __int64 v21; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+18h] BYREF

  v4 = a4;
  v5 = 1;
  Lcid = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  if ( a3 == 1 )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    if ( (_WORD)v9 )
      return v9 == a4;
    v12 = *(__int16 *)(a2 + 6);
    if ( (v12 & 0x8000u) == 0LL )
    {
      v13 = *(_QWORD *)(a1 + 32);
      if ( v13 )
      {
        if ( (int)v12 < *(unsigned __int16 *)(v13 + 6) )
        {
          v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2 * v12));
          if ( v14 )
          {
            RtlInitUnicodeString(&DestinationString, v14);
            if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              return (_WORD)Lcid == (unsigned __int16)v4;
          }
        }
      }
    }
    return 0;
  }
  if ( a3 != 3 )
  {
    if ( a3 == 2 && a4 >= 0 )
    {
      v21 = *(_QWORD *)(a1 + 24);
      if ( a4 < (unsigned int)*(unsigned __int16 *)(v21 + 6) )
        return a2 == *(_QWORD *)(v21 + 16) + 28LL * a4;
    }
    return 0;
  }
  v15 = *(__int16 *)(a2 + 6);
  if ( (v15 & 0x8000u) != 0LL )
  {
    if ( *(_WORD *)(a2 + 4) )
    {
      v20 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
      v8 = v20;
      if ( v20 )
      {
        if ( RtlpInitAndCallLcidToCultureName(&DestinationString, v20, *(unsigned __int16 *)(a2 + 4)) )
        {
LABEL_19:
          v18 = *(_QWORD *)(a1 + 32);
          if ( !v18
            || (v4 & 0x8000u) != 0LL
            || (unsigned int)v4 >= *(unsigned __int16 *)(v18 + 6)
            || (v19 = (const wchar_t *)(*(_QWORD *)(v18 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v18 + 16) + 2 * v4))) == 0LL
            || wcsicmp(DestinationString.Buffer, v19) )
          {
            v5 = 0;
          }
          if ( v8 )
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
          return v5;
        }
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
      }
    }
    return 0;
  }
  if ( (_WORD)v15 != a4 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    if ( v16 )
    {
      if ( (int)v15 < *(unsigned __int16 *)(v16 + 6) )
      {
        v17 = (const WCHAR *)(*(_QWORD *)(v16 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v16 + 16) + 2 * v15));
        if ( v17 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          goto LABEL_19;
        }
      }
    }
    return 0;
  }
  return v5;
}
