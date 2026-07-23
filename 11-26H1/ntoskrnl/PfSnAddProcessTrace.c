/*
 * XREFs of PfSnAddProcessTrace @ 0x14053306C
 * Callers:
 *     PfSnActivateTrace @ 0x1404CA628 (PfSnActivateTrace.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 */

__int64 __fastcall PfSnAddProcessTrace(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  unsigned int v4; // r8d
  BOOLEAN v5; // al

  if ( (*(_QWORD *)(a1 + 912) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    return (unsigned int)-1073741791;
  }
  else
  {
    v5 = ExAcquireRundownProtectionEx(a2 + 45, 0x10u);
    v4 = 0;
    if ( v5 )
      *(_QWORD *)(a1 + 912) = ((unsigned __int64)&a2[1].Ptr + 7) & -(__int64)(a2 != 0LL);
    else
      return (unsigned int)-1073741431;
  }
  return v4;
}
