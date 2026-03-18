/*
 * XREFs of ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x140004898
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14003134C (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1_VIDSCH_SYNC_POINT@@QEAA@XZ @ 0x1400048E4 (--1_VIDSCH_SYNC_POINT@@QEAA@XZ.c)
 */

_VIDSCH_SYNC_POINT *__fastcall _VIDSCH_SYNC_POINT::`scalar deleting destructor'(_VIDSCH_SYNC_POINT *this)
{
  _VIDSCH_SYNC_POINT::~_VIDSCH_SYNC_POINT(this);
  operator delete(this);
  return this;
}
