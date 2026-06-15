/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x1800691A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_64ceff971abf396a2d7f0130c978516a_Traceguids,
      (char *)this - 8,
      a2);
  }
  return CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 16));
}
