/*
 * XREFs of ?GetCount@CGITCallbackArray@@EEAAJPEAI@Z @ 0x1801FC100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGITCallbackArray::GetCount(CGITCallbackArray *this, unsigned int *a2)
{
  unsigned int v2; // r8d
  bool v3; // cf

  v2 = -1;
  if ( *((_QWORD *)this + 3) <= 0xFFFFFFFFuLL )
    v2 = *((_DWORD *)this + 6);
  v3 = *((_QWORD *)this + 3) > 0xFFFFFFFFuLL;
  *a2 = v2;
  return v3 ? 0x80070216 : 0;
}
