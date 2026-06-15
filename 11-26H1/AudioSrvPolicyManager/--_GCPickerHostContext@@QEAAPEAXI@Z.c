/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180041108
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001BA30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x18002CBB0 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x18004108C (--1CPickerHostContext@@QEAA@XZ.c)
 */

__int64 **__fastcall CPickerHostContext::`scalar deleting destructor'(__int64 **this)
{
  CPickerHostContext::~CPickerHostContext(this);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
