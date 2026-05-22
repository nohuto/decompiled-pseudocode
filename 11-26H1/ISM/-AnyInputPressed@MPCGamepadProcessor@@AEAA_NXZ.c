/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801C3310
 * Callers:
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801C39C0 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801C39E0 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C49D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  char v4; // di
  float v6; // xmm6_4
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  float v12; // xmm6_4
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  float v18; // xmm6_4
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // r9
  float v24; // xmm6_4
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const char *v29; // r9
  float v30; // xmm6_4
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  const char *v35; // r9
  float v36; // xmm6_4
  __int64 v37; // r9
  __int128 v39; // [rsp+20h] [rbp-20h] BYREF

  v4 = 0;
  if ( *((int *)this + 927) > 0 )
    return 1;
  LODWORD(v6) = *((_DWORD *)this + 933) & _xmm;
  MPCConstantManager::GetInstance((__int64)this, a2, a3, a4);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
  if ( v6 > MPCConstantManager::GetConstant<float>(v7, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v39) )
    return 1;
  LODWORD(v12) = *((_DWORD *)this + 932) & _xmm;
  MPCConstantManager::GetInstance(v9, v8, v10, v11);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
  if ( v12 > MPCConstantManager::GetConstant<float>(v13, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v39) )
    return 1;
  LODWORD(v18) = *((_DWORD *)this + 930) & _xmm;
  MPCConstantManager::GetInstance(v15, v14, v16, v17);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
  if ( v18 > MPCConstantManager::GetConstant<float>(v19, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v39) )
    return 1;
  LODWORD(v24) = *((_DWORD *)this + 931) & _xmm;
  MPCConstantManager::GetInstance(v21, v20, v22, v23);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
  if ( v24 > MPCConstantManager::GetConstant<float>(v25, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v39) )
    return 1;
  v30 = *((float *)this + 928);
  MPCConstantManager::GetInstance(v27, v26, v28, v29);
  *(_QWORD *)&v39 = L"TriggerDeadzone";
  *((_QWORD *)&v39 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TriggerDeadzone");
  if ( v30 > MPCConstantManager::GetConstant<float>(v31, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v39) )
    return 1;
  v36 = *((float *)this + 929);
  MPCConstantManager::GetInstance(v33, v32, v34, v35);
  *(_QWORD *)&v39 = L"TriggerDeadzone";
  *((_QWORD *)&v39 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TriggerDeadzone");
  if ( v36 > MPCConstantManager::GetConstant<float>(v37, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v39) )
    return 1;
  return v4;
}
