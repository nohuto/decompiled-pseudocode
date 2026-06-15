/*
 * XREFs of ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x18007AD84
 * Callers:
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x18007AC38 (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x180108FBC (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 * Callees:
 *     ??0IMuteControlHandler@@QEAA@XZ @ 0x1800B0BC4 (--0IMuteControlHandler@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::CMuteControlBase(
        CMuteControlBase *this,
        struct IControlChangeNotify *a2)
{
  __int64 v3; // rdx

  IMuteControlHandler::IMuteControlHandler(this);
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CMuteControlBase::`vftable';
  *((_QWORD *)this + 2) = v3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_896a03467a023f83569b8c3d81c0998d_Traceguids, this);
  }
  return this;
}
