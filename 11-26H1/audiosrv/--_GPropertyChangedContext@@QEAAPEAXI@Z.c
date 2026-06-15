/*
 * XREFs of ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x180060140
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x180027640 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180060100 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x180085748 (--1-$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1PropertyChangedContext@@QEAA@XZ @ 0x18006016C (--1PropertyChangedContext@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PropertyChangedContext *__fastcall PropertyChangedContext::`scalar deleting destructor'(PropertyChangedContext *this)
{
  PropertyChangedContext::~PropertyChangedContext(this);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
