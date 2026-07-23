/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x140913700
 * Callers:
 *     EtwpApplyScopeFilters @ 0x140912900 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x140914E3C (EtwpApplyTransientFilters.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     RtlQueryPackageIdentity @ 0x140459DD0 (RtlQueryPackageIdentity.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsQueryProcessAttributesByToken @ 0x140A5DCD0 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  char v8; // bl
  void *v10; // r13
  unsigned __int16 v11; // r14
  unsigned int v12; // esi
  char v13; // r15
  unsigned __int16 v14; // r14
  unsigned int v15; // esi
  char v16; // al
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h]
  ULONG_PTR PackageSize; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR AppIdSize[2]; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR AppId[196]; // [rsp+158h] [rbp+58h] BYREF

  v19 = a1;
  memset_0(&PackageSize, 0, 0x2A0uLL);
  v8 = 0;
  v17 = 0;
  if ( !a2 && !a3 )
    return 1;
  v10 = (void *)PsReferencePrimaryTokenWithTag(*(_QWORD *)(a1 + 80), 0x746C6644u, v6, v7);
  PsQueryProcessAttributesByToken(v10, &v17, v18);
  if ( v17 )
  {
    PackageSize = 256LL;
    AppIdSize[0] = 130LL;
    if ( RtlQueryPackageIdentity(v10, PackageFullName, &PackageSize, AppId, AppIdSize, 0LL) >= 0 )
    {
      if ( a2 )
      {
        v11 = 0;
        v12 = (PackageSize >> 1) - 1;
        while ( v11 < *a2 )
        {
          if ( a2[8 * v11 + 4] == v12 && !wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], PackageFullName, v12) )
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
        v15 = (AppIdSize[0] >> 1) - 1;
        while ( v14 < *a3 )
        {
          if ( a3[8 * v14 + 4] == v15 && !wcsnicmp(*(const wchar_t **)&a3[8 * v14 + 8], AppId, v15) )
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
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v19 + 80) + 584LL), (ULONG_PTR)v10, 0x746C6644u);
  return v8;
}
