/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x14002D684
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14017F184 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1401E5030 (RIMFindMonitorForDigitizer.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E54C8 (RIMSetPointerDeviceInputSpace.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMEndAllActiveContacts @ 0x14002C860 (RIMEndAllActiveContacts.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D388 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x14002D814 (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D9EC (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     rimSetDeviceDisplayConfig @ 0x1401E6560 (rimSetDeviceDisplayConfig.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  struct RawInputManagerObject *v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // r9
  struct INPUT_SPACE_REGION *v16; // [rsp+20h] [rbp-20h] BYREF
  tagDomLock *v17; // [rsp+28h] [rbp-18h] BYREF
  struct INPUT_SPACE *v18; // [rsp+30h] [rbp-10h] BYREF
  tagDomLock *v19; // [rsp+38h] [rbp-8h] BYREF

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 57);
      v10 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 40);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10);
      else
        RIMEndAllActiveContacts((__int64)v10, (__int64)a2);
    }
    v18 = 0LL;
    UserSessionState = W32GetUserSessionState(a1, a2);
    CEResourceLockShared::CEResourceLockShared(
      (CEResourceLockShared *)&v19,
      (struct CEResourceLock *)(UserSessionState + 18640));
    v16 = 0LL;
    v14 = W32GetUserSessionState(v13, v12);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v17, (struct CEResourceLock *)(v14 + 18640));
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)&v18,
           (struct CLockedInputSpaceRegion *)&v16) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)&v18, (struct CLockedInputSpaceRegion *)&v16);
    }
    else
    {
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v18, v16);
    tagDomLock::UnLockExclusive(v17);
    tagDomLock::UnLockExclusive(v19);
  }
  if ( *((_DWORD *)a1 + 334) && a4 && *((_DWORD *)a1 + 338) != 4 )
  {
    while ( v4 < *(_DWORD *)a4 )
    {
      v15 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 216LL * v4);
      if ( v15[4] == *((_DWORD *)a1 + 467) && v15[5] == *((_DWORD *)a1 + 468) && v15[7] == *((_DWORD *)a1 + 470) )
      {
        rimSetDeviceDisplayConfig(a1, a2, a3);
        return;
      }
      ++v4;
    }
  }
}
