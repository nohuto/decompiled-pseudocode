/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x180052860
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpInitMuiCriticalSection @ 0x1800537F0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180053F48 (RtlpCheckMuiMultiStringSafe.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, __int16 *a2, _DWORD *a3)
{
  PVOID v3; // rbp
  int v6; // ebx
  __int64 result; // rax
  int v8; // esi
  __int64 v9; // rdx
  __int16 v10; // r10
  _WORD *v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _WORD *v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  void *v19; // rbx
  __int64 v20; // rdx
  PVOID v21; // rcx
  __int64 v22[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v22[0] = 0LL;
  BaseAddress = 0LL;
  v6 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xC) == 0xC || (a1 & 0xFFFFFFF3) != 0 )
      return 3221225485LL;
  }
  else
  {
    v6 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(v22);
  v8 = result;
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v9 = 4LL;
      if ( (v6 & 4) == 0 )
        v9 = 85LL;
      if ( (int)RtlpCheckMuiMultiStringSafe(a2, v9) < 0 )
        DbgPrint(
          "*** ASSERT FAILED: Input parameter: %s, for function: %s is not a valid multi-string!\n",
          (const char *)a2,
          "RtlSetProcessPreferredUILanguages");
      v10 = *a2;
      v11 = a2 + 1;
      v12 = 0LL;
      if ( *a2 )
        v11 = a2;
      LOBYTE(v12) = v10 == 0;
      while ( *v11 )
      {
        if ( v12 > 0x7FFFFFFF )
          return (unsigned int)-1073741811;
        v13 = 0x7FFFFFFF - v12;
        if ( v12 > 0x7FFFFFFF && v12 != 0 )
          return (unsigned int)-1073741811;
        v14 = 0x7FFFFFFF - v12;
        v15 = v11;
        if ( v13 )
        {
          while ( *v15 )
          {
            ++v15;
            if ( !--v14 )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_19:
          if ( !v14 )
            return (unsigned int)-1073741811;
        }
        v16 = v13 - v14;
        v12 += v16 + 1;
        v11 += v16 + 1;
      }
      if ( (unsigned int)(v12 + 1) < 2 || v10 || a2[1] )
      {
        v8 = RtlpMuiRegAddMultiSzToLangFallbackList(
               (__int64)g_RegInfo,
               a2,
               (int)v12 + 1,
               v6 | 2u,
               26,
               5u,
               (__int64 *)&BaseAddress);
        if ( v8 < 0 )
        {
          v21 = BaseAddress;
          goto LABEL_31;
        }
        v3 = BaseAddress;
        if ( !BaseAddress || (v17 = *((unsigned __int16 *)BaseAddress + 2), !(_WORD)v17) )
        {
          RtlpMuiRegFreeLanguageList(BaseAddress);
          return (unsigned int)-1073741823;
        }
        if ( a3 )
          *a3 = v17;
      }
    }
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v18 = v22[0];
    v19 = *(void **)(v22[0] + 72);
    *(_QWORD *)(v22[0] + 72) = v3;
    ++*(_DWORD *)(v18 + 16);
    v20 = *(_QWORD *)(v18 + 96);
    if ( v20 )
      *(_DWORD *)(v20 + 40) |= 0x80u;
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    if ( v19 )
    {
      v21 = v19;
LABEL_31:
      RtlpMuiRegFreeLanguageList(v21);
    }
    return (unsigned int)v8;
  }
  return result;
}
