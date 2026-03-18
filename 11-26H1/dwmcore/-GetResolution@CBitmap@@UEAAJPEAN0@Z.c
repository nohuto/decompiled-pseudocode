/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1801D3430
 * Callers:
 *     ?GetResolution@CBitmap@@WCA@EAAJPEAN0@Z @ 0x180224A30 (-GetResolution@CBitmap@@WCA@EAAJPEAN0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetResolution(struct _RTL_CRITICAL_SECTION *this, double *a2, double *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  v3 = this + 1;
  EnterCriticalSection(this + 1);
  if ( a2 && a3 )
  {
    *a2 = *(float *)&this[2].OwningThread;
    *a3 = *((float *)&this[2].OwningThread + 1);
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2147942487LL;
  }
}
