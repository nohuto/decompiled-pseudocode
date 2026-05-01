/*
 * XREFs of _XamlGamingTaskViewHost::CreateGamingTaskViewControl_::_1_::dtor$16 @ 0x18070677D
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall XamlGamingTaskViewHost::CreateGamingTaskViewControl_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 416) = 128LL;
    *(_QWORD *)(a2 + 424) = *(_QWORD *)(a2 + 32);
    operator delete(*(void **)(a2 + 424), *(const struct std::nothrow_t **)(a2 + 416));
  }
}
