/*
 * XREFs of ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400E8F8C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionObject::Open(struct _WIN32_OPENMETHOD_PARAMETERS *a1)
{
  __int64 v1; // rdi
  int ProcessSessionId; // eax

  v1 = *((_QWORD *)a1 + 4);
  if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))(v1 + 8))(*(_QWORD *)(v1 + 8))
    && ((unsigned __int8)PsIsSystemProcess(*((_QWORD *)a1 + 3))
     || (ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)a1 + 3)), ProcessSessionId != -1)
     && ProcessSessionId == *(_DWORD *)v1) )
  {
    return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OPENMETHOD_PARAMETERS *))(**(_QWORD **)(v1 + 8) + 24LL))(
             *(_QWORD *)(v1 + 8),
             a1);
  }
  else
  {
    return 3221225506LL;
  }
}
