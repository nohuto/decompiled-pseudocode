/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x140937B60
 * Callers:
 *     EtwpApplyScopeFilters @ 0x140936D60 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x14093929C (EtwpApplyTransientFilters.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     RtlQueryPackageIdentity @ 0x140460890 (RtlQueryPackageIdentity.c)
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PsQueryProcessAttributesByToken @ 0x140A549E0 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  char v8; // bl
  ULONG_PTR v10; // r13
  unsigned __int16 v11; // r14
  unsigned int v12; // esi
  char v13; // r15
  unsigned __int16 v14; // r14
  unsigned int v15; // esi
  char v16; // al
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h]
  size_t v20; // [rsp+40h] [rbp-C0h] BYREF
  size_t v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t Str2[128]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v23[196]; // [rsp+158h] [rbp+58h] BYREF

  v19 = a1;
  memset_0(&v20, 0, 0x2A0uLL);
  v8 = 0;
  v17 = 0;
  if ( !a2 && !a3 )
    return 1;
  v10 = PsReferencePrimaryTokenWithTag(*(_QWORD *)(a1 + 80), 0x746C6644u, v6, v7);
  PsQueryProcessAttributesByToken(v10, &v17, v18);
  if ( v17 )
  {
    v20 = 256LL;
    v21[0] = 130LL;
    if ( (int)RtlQueryPackageIdentity(v10, Str2, &v20, v23, v21, 0LL) >= 0 )
    {
      if ( a2 )
      {
        v11 = 0;
        v12 = (v20 >> 1) - 1;
        while ( v11 < *a2 )
        {
          if ( a2[8 * v11 + 4] == v12 && !wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], Str2, v12) )
            goto LABEL_13;
          ++v11;
        }
        v13 = 0;
      }
      else
      {
LABEL_13:
        v13 = 1;
      }
      if ( a3 )
      {
        v14 = 0;
        v15 = (v21[0] >> 1) - 1;
        while ( v14 < *a3 )
        {
          if ( a3[8 * v14 + 4] == v15 && !wcsnicmp(*(const wchar_t **)&a3[8 * v14 + 8], v23, v15) )
            goto LABEL_21;
          ++v14;
        }
        v16 = 0;
      }
      else
      {
LABEL_21:
        v16 = 1;
      }
      if ( v13 )
      {
        if ( v16 )
          v8 = 1;
      }
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v19 + 80) + 584LL), v10, 0x746C6644u);
  return v8;
}
