/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x14014A8A0
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x14014A860 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this)
{
  __int64 v1; // rdi
  void (__fastcall *v3)(__int64, CInputQueue *); // rax

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    *((_QWORD *)this + 2) = 0LL;
    v3 = *(void (__fastcall **)(__int64, CInputQueue *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 48) + 3720LL);
    if ( v3 )
      v3(v1, this);
  }
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 16) = 0;
}
