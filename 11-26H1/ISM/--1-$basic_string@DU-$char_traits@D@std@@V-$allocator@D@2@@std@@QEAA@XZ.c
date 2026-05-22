/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4C6C
 * Callers:
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$0 @ 0x1801D921E (_ISMTracing--GetVector3AsString_--_1_--dtor$0.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$1 @ 0x1801D9230 (_ISMTracing--GetVector3AsString_--_1_--dtor$1.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$2 @ 0x1801D9242 (_ISMTracing--GetVector3AsString_--_1_--dtor$2.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$3 @ 0x1801D9254 (_ISMTracing--GetVector3AsString_--_1_--dtor$3.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$4 @ 0x1801D9266 (_ISMTracing--GetVector3AsString_--_1_--dtor$4.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$5 @ 0x1801D9278 (_ISMTracing--GetVector3AsString_--_1_--dtor$5.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$0 @ 0x1801D928A (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$0.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$4 @ 0x1801D929C (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$4.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$3 @ 0x1801D92AE (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::string::~string()
{
  return std::string::_Tidy_deallocate();
}
