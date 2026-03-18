/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x14007B81C
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14007C1C0 (RIMOnDisplayStateChange.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401C62DC (RIMSetPointerDeviceInputSpace.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x140205A10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x14007B9D8 (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BBB0 (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMEndAllActiveContacts @ 0x140130700 (RIMEndAllActiveContacts.c)
 *     rimSetDeviceDisplayConfig @ 0x1401A2A4C (rimSetDeviceDisplayConfig.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  struct RawInputManagerObject *v10; // rcx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  _DWORD *v14; // r9
  struct INPUT_SPACE_REGION *v15; // [rsp+20h] [rbp-20h] BYREF
  PERESOURCE *v16; // [rsp+28h] [rbp-18h]
  struct INPUT_SPACE *v17; // [rsp+30h] [rbp-10h] BYREF
  PERESOURCE *v18; // [rsp+38h] [rbp-8h]

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 57);
      v10 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 40);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10, v9, 0x200u);
      else
        RIMEndAllActiveContacts(v10);
    }
    v17 = 0LL;
    v18 = (PERESOURCE *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 18688);
    ExEnterCriticalRegionAndAcquireResourceShared(*v18);
    v15 = 0LL;
    v16 = (PERESOURCE *)(W32GetUserSessionState(v12, v11, v13) + 18688);
    ExEnterCriticalRegionAndAcquireResourceShared(*v16);
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)&v17,
           (struct CLockedInputSpaceRegion *)&v15) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)&v17, (struct CLockedInputSpaceRegion *)&v15);
    }
    else
    {
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v17, v15);
    ExReleaseResourceAndLeaveCriticalRegion(*v16);
    ExReleaseResourceAndLeaveCriticalRegion(*v18);
  }
  if ( *((_DWORD *)a1 + 332) && a4 && *((_DWORD *)a1 + 336) != 4 )
  {
    while ( v4 < *(_DWORD *)a4 )
    {
      v14 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 216LL * v4);
      if ( v14[4] == *((_DWORD *)a1 + 465) && v14[5] == *((_DWORD *)a1 + 466) && v14[7] == *((_DWORD *)a1 + 468) )
      {
        rimSetDeviceDisplayConfig(a1, a2, a3);
        return;
      }
      ++v4;
    }
  }
}
