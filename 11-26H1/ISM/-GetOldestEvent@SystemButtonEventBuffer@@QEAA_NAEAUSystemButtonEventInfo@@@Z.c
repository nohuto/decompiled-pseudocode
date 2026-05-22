/*
 * XREFs of ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x180097E68
 * Callers:
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180071BA0 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015F930 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char __fastcall SystemButtonEventBuffer::GetOldestEvent(
        SystemButtonEventBuffer *this,
        struct SystemButtonEventInfo *a2)
{
  char v3; // di
  _OWORD *v4; // rcx

  v3 = 0;
  v4 = *(_OWORD **)this;
  if ( (__int64)(*((_QWORD *)this + 1) - (_QWORD)v4) >> 4 )
  {
    v3 = 1;
    *(_OWORD *)a2 = *v4;
    std::_Copy_memmove<enum _Button *,enum _Button *>(
      (void *)(*(_QWORD *)this + 16LL),
      *((_QWORD *)this + 1),
      *(void **)this);
    *((_QWORD *)this + 1) -= 16LL;
  }
  return v3;
}
