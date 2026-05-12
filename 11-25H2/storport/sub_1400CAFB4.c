/*
 * XREFs of sub_1400CAFB4 @ 0x1400CAFB4
 * Callers:
 *     sub_1400CBACC @ 0x1400CBACC (sub_1400CBACC.c)
 *     sub_1400D41C0 @ 0x1400D41C0 (sub_1400D41C0.c)
 *     sub_1400D4538 @ 0x1400D4538 (sub_1400D4538.c)
 *     sub_140192178 @ 0x140192178 (sub_140192178.c)
 * Callees:
 *     sub_1400C9A34 @ 0x1400C9A34 (sub_1400C9A34.c)
 *     sub_1400D4BF4 @ 0x1400D4BF4 (sub_1400D4BF4.c)
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 */

void __fastcall sub_1400CAFB4(__int64 a1, char a2, PVOID *a3)
{
  char *v3; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = (char *)*a3;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 632), 1u);
  while ( 1 )
  {
    v7 = (__int64)*a3;
    v8 = (char *)*a3 + 608;
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    if ( (_QWORD *)v9[1] != v8 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    v11 = v9 - 8;
    *(_QWORD *)(v10 + 8) = v8;
    --*(_DWORD *)(v7 + 624);
    v12 = v9[9];
    v13 = v9 - 8;
    if ( (v12 & 8) == 0 )
    {
      v9[9] = v12 | 8;
      *((_DWORD *)v9 + 126) = 3;
      if ( (byte_1401694FA & 2) != 0 )
        sub_1400C9A34(
          v7,
          &stru_140149F28,
          a1 + 1032,
          *(_DWORD *)(a1 + 56),
          a1 + 1032,
          *(const wchar_t **)(a1 + 1016),
          (const char *)(v7 + 60),
          *((_WORD *)v9 - 30));
      sub_1400E63C4(v11, 0LL);
      sub_1400DCB68(v11);
      sub_1400DEFC4(&v13);
    }
  }
  ExReleaseResourceLite((PERESOURCE)(v7 + 632));
  KeLeaveCriticalRegion();
  if ( a2 )
    sub_1400D4BF4(a1, *a3);
  ExDeleteResourceLite((PERESOURCE)((char *)*a3 + 632));
  ExFreeCacheAwareRundownProtection(*((PEX_RUNDOWN_REF_CACHE_AWARE *)*a3 + 5));
  ExFreePoolWithTag(*a3, 0x464E6152u);
  *a3 = 0LL;
}
