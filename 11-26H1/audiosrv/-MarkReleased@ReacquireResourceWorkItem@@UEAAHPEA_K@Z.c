/*
 * XREFs of ?MarkReleased@ReacquireResourceWorkItem@@UEAAHPEA_K@Z @ 0x1800F4180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ReacquireResourceWorkItem::MarkReleased(ReacquireResourceWorkItem *this, unsigned __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 result; // rax

  if ( a2 == *((unsigned __int64 **)this + 2) )
  {
    v3 = (_QWORD *)((char *)this + 24);
  }
  else
  {
    v2 = *a2;
    if ( !v2 )
      return 0LL;
    v3 = (_QWORD *)((char *)this + 24);
    if ( v2 != *((_QWORD *)this + 3) )
      return 0LL;
  }
  *v3 = 0LL;
  *((_DWORD *)this + 122) = 1;
  result = 1LL;
  *((_QWORD *)this + 2) = 0LL;
  return result;
}
