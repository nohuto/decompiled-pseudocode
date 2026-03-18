/*
 * XREFs of ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x1801A32C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::GetOwningProcessId(CResource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 7);
  if ( !v1 || *(_DWORD *)(v1 + 24) == 1 )
    return 0LL;
  else
    return *(unsigned int *)(v1 + 28);
}
