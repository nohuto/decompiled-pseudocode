/*
 * XREFs of ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180003C20
 * Callers:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x180003B2C (--1ResultException@wil@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::StoredFailureInfo::~StoredFailureInfo(wil::StoredFailureInfo *this)
{
  volatile signed __int32 *v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (void *)*((_QWORD *)this + 19);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
}
