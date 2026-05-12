/*
 * XREFs of sub_1400D41C0 @ 0x1400D41C0
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x1400743C0 (StorPortNvmeofExtendedFunction.c)
 *     sub_1400D104C @ 0x1400D104C (sub_1400D104C.c)
 * Callees:
 *     sub_1400C9C4C @ 0x1400C9C4C (sub_1400C9C4C.c)
 *     sub_1400C9FCC @ 0x1400C9FCC (sub_1400C9FCC.c)
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 */

__int64 __fastcall sub_1400D41C0(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v17; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1056964600;
  }
  else if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    if ( *a2 == 1314277447 )
    {
      v7 = *((_QWORD *)a2 + 6);
      if ( (v7 & 4) != 0 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        *((_QWORD *)a2 + 6) = v7 | 4;
        if ( a3 )
        {
          v8 = *(_QWORD *)(a1 + 592);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 24), 1u);
          v9 = *((_QWORD *)a2 + 3);
          if ( *(_DWORD **)(v9 + 8) != a2 + 6 || (v10 = (_QWORD *)*((_QWORD *)a2 + 4), (_DWORD *)*v10 != a2 + 6) )
LABEL_22:
            __fastfail(3u);
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          --*(_DWORD *)(*(_QWORD *)(a1 + 592) + 16LL);
          ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
          KeLeaveCriticalRegion();
        }
        ExWaitForRundownProtectionReleaseCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)a2 + 7));
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 96), 1u);
        if ( a2[94] )
        {
          v11 = a2 + 90;
          while ( 1 )
          {
            v12 = (_QWORD *)*v11;
            if ( (_QWORD *)*v11 == v11 )
              break;
            if ( (_QWORD *)v12[1] != v11 )
              goto LABEL_22;
            v13 = *v12;
            if ( *(_QWORD **)(*v12 + 8LL) != v12 )
              goto LABEL_22;
            *v11 = v13;
            *(_QWORD *)(v13 + 8) = v11;
            --a2[94];
            v14 = v12[3];
            v17 = v12 - 1;
            if ( (v14 & 0x10) == 0 )
            {
              v12[3] = v14 | 0x10;
              if ( (byte_1401694FA & 2) != 0 )
                sub_1400C9C4C(
                  (__int64)(v12 - 1),
                  (__int64)v12 + 308,
                  (__int64)v12 + 52,
                  *(_DWORD *)(a1 + 56),
                  a1 + 1032,
                  *(const wchar_t **)(a1 + 1016),
                  (const char *)a2 + 72,
                  *((_WORD *)v12 - 2),
                  (const char *)v12 + 52,
                  (const char *)v12 + 308,
                  (const char *)v12 + 564);
              ExWaitForRundownProtectionReleaseCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[4]);
              sub_1400CAFB4(a1, 1, (PVOID *)&v17);
            }
          }
        }
        ExReleaseResourceLite((PERESOURCE)(a2 + 96));
        KeLeaveCriticalRegion();
        ExDeleteResourceLite((PERESOURCE)(a2 + 96));
        ExFreeCacheAwareRundownProtection(*((PEX_RUNDOWN_REF_CACHE_AWARE *)a2 + 7));
        if ( (byte_1401694FA & 2) != 0 )
          sub_1400C9FCC(
            (__int64)(a2 + 18),
            &stru_140149FA8,
            v15,
            *(_DWORD *)(a1 + 56),
            a1 + 1032,
            *(const wchar_t **)(a1 + 1016),
            *((_BYTE *)a2 + 4),
            *((_BYTE *)a2 + 8),
            (const char *)a2 + 72,
            (const char *)a2 + 328);
        ExFreePoolWithTag(a2, 0x464E6152u);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
