/*
 * XREFs of ?HasDelayDeleteResources@CComposition@@QEBA_NXZ @ 0x18018F634
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::HasDelayDeleteResources(CComposition *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  bool v3; // di

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 5712);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 5712));
  v3 = *((_QWORD *)this + 720) != 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
