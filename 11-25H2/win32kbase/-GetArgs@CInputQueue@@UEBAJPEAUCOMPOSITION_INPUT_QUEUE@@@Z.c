/*
 * XREFs of ?GetArgs@CInputQueue@@UEBAJPEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1400EE830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CInputQueue::GetArgs(CInputQueue *this, struct COMPOSITION_INPUT_QUEUE *a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = (*(__int64 (__fastcall **)(CInputQueue *))(*(_QWORD *)this + 16LL))(this);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  result = 0LL;
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 24);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 40);
  *((_QWORD *)a2 + 6) = *((_QWORD *)this + 7);
  return result;
}
