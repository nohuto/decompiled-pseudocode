/*
 * XREFs of ?GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ @ 0x180155DBC
 * Callers:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800815F4 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AtmosCheck::GetNearestLicenseExpiryDate(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  unsigned __int64 v3; // rdi
  _QWORD *v4; // r9
  _QWORD *i; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v4 = (_QWORD *)*((_QWORD *)this + 84);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = 7LL;
    v7 = i[6] + 4LL;
    do
    {
      v8 = *(_QWORD *)(v7 + 12);
      if ( v8 && *(int *)v7 >= 0 )
      {
        if ( v3 )
        {
          if ( v8 < v3 )
            v3 = *(_QWORD *)(v7 + 12);
        }
        else
        {
          v3 = *(_QWORD *)(v7 + 12);
        }
      }
      v7 += 32LL;
      --v6;
    }
    while ( v6 );
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
