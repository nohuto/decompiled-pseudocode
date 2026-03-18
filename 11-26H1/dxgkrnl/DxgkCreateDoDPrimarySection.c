/*
 * XREFs of DxgkCreateDoDPrimarySection @ 0x1401A3230
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

PVOID __fastcall DxgkCreateDoDPrimarySection(__int64 a1, unsigned int a2)
{
  int v3; // eax
  __int64 v4; // rbx
  PVOID v6; // rcx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 4) > a2 )
    a2 = *(_DWORD *)(a1 + 4);
  Object = 0LL;
  *(_DWORD *)a1 = a2;
  v8 = a2;
  v3 = MmCreateSection(&Object, 0LL, 0LL, &v8, 4, 0x8000000, 0LL, 0LL);
  if ( v3 >= 0 )
  {
    v6 = Object;
    *(_QWORD *)(a1 + 8) = Object;
    ObfReferenceObject(v6);
    return Object;
  }
  else
  {
    v4 = v3;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 219;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create section object for DoD primary backing store (Status = 0x%I64x).",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
