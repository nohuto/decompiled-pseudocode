/*
 * XREFs of ?ThreadRoutine@CVP_SYSTEM_THREAD@@CAXPEAX@Z @ 0x1401DA2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CVP_SYSTEM_THREAD::ThreadRoutine(void *a1)
{
  (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
  (**(void (__fastcall ***)(void *, __int64))a1)(a1, 1LL);
}
