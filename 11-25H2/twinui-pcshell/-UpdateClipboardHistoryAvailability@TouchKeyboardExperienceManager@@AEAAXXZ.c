/*
 * XREFs of ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180206D78
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_d866c096dc72da78723f550d5b3c8da9__void___cdecl(void)_::operator() @ 0x18045F400 (wistd--__function--__func__lambda_d866c096dc72da78723f550d5b3c8da9__void___cdecl(void)_--operato.c)
 * Callees:
 *     Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU @ 0x180206DDC (Windows--ApplicationModel--Internal--DataTransfer--IsCloudAndHistoryFeatureSupportedSKU.c)
 *     ?GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z @ 0x180206E50 (-GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateClipboardHistoryAvailability(
        TouchKeyboardExperienceManager *this)
{
  __int64 v2; // r8
  char v3; // bl

  if ( !(unsigned __int8)Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU()
    || (v3 = 1,
        !(unsigned int)KeyboardHosting::TextInputMdmPolicyHelper::GetMdmIntPolicyValue(L"AllowClipboardHistory", 1)) )
  {
    v3 = 0;
  }
  LOBYTE(v2) = v3;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 176LL))(
    *(_QWORD *)(*((_QWORD *)this + 73) + 48LL),
    5LL,
    v2);
}
