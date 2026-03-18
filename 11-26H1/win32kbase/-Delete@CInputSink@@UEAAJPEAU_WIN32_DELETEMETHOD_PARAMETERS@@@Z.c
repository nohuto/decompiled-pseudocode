/*
 * XREFs of ?Delete@CInputSink@@UEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x140164530
 * Callers:
 *     <none>
 * Callees:
 *     ?Delete@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@@Z @ 0x140164574 (-Delete@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CInputSink::Delete(CInputSink *this, struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  InputTraceLogging::InputSink::Delete((CInputSink *)((char *)this - 24));
  if ( (**(unsigned __int8 (__fastcall ***)(CInputSink *))this)(this) )
    (*(void (__fastcall **)(CInputSink *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
