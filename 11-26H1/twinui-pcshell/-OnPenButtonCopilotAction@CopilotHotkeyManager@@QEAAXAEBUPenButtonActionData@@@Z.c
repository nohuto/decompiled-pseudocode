/*
 * XREFs of ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x18063391C
 * Callers:
 *     ??R?$__func@V_lambda_6880c51ab46d13359335fd5725fb047c_@@$$A6AXAEBUPenButtonActionData@@@Z@__function@wistd@@UEAAXAEBUPenButtonActionData@@@Z @ 0x1806234F0 (--R-$__func@V_lambda_6880c51ab46d13359335fd5725fb047c_@@$$A6AXAEBUPenButtonActionData@@@Z@__func.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180201B54 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x1806230B4 (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 *     ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x180623184 (--4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x180623AF4 (-ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@@Z @ 0x18062673C (-HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x180636294 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180636FC8 (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CopilotHotkeyManager::OnPenButtonCopilotAction(
        CopilotHotkeyManager *this,
        const struct PenButtonActionData *a2)
{
  int v4; // r15d
  __int64 v5; // r8
  char *v6; // r14
  __int64 v7; // rax
  unsigned __int64 first_of; // rsi
  __int64 v9; // r8
  char *v10; // rdx
  __int128 *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  void *TargetAppExtensionDetails; // rax
  char *v16; // rbx
  _OWORD v17[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h]
  char v19[16]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+68h] [rbp-98h]
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  __m128i si128; // [rsp+80h] [rbp-80h]
  _OWORD v24[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[304]; // [rsp+B0h] [rbp-50h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v4 = 5;
      break;
    case 2:
      v4 = 6;
      break;
    case 3:
      v4 = 7;
      break;
    default:
      return;
  }
  v17[0] = 0LL;
  v17[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v17[0]) = 0;
  v18 = 0LL;
  if ( *((_DWORD *)a2 + 1) )
  {
    if ( *((_DWORD *)a2 + 1) != 1 )
      goto LABEL_40;
    v6 = (char *)a2 + 8;
    if ( a2 == (const struct PenButtonActionData *)-8LL )
      goto LABEL_40;
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v6[2 * v7] );
    if ( !v7 )
      goto LABEL_40;
    std::wstring::wstring((__int64)v19, (__int64)a2 + 8);
    v22 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v22) = 0;
    first_of = std::wstring::find_first_of(v19);
    if ( first_of == -1LL )
    {
      std::wstring::operator=((char *)&v22, v19, v9);
    }
    else
    {
      memset(v24, 0, sizeof(v24));
      std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v19, 0LL);
      if ( v20 < first_of )
        first_of = v20;
      v10 = v19;
      if ( v21 > 7 )
        v10 = *(char **)v19;
      std::wstring::_Construct<1,unsigned short const *>((char **)v24, v10, first_of);
      std::wstring::operator=(&v22, v24);
      std::wstring::_Tidy_deallocate(v24);
    }
    if ( !*((_QWORD *)this + 28) || !*((_QWORD *)this + 32) )
      goto LABEL_29;
    v11 = &v22;
    if ( si128.m128i_i64[1] > 7uLL )
      v11 = (__int128 *)v22;
    v12 = (_QWORD *)((char *)this + 240);
    if ( *((_QWORD *)this + 33) > 7uLL )
      v12 = (_QWORD *)*v12;
    if ( !(unsigned int)_o__wcsicmp(v12, v11) )
    {
      std::wstring::operator=((char *)this + 208, v19, v13);
    }
    else
    {
LABEL_29:
      CopilotHotkeyManager::ClearFastpathRegistrationProperties(this);
      v14 = std::wstring::wstring((__int64)v24, (__int64)v6);
      TargetAppExtensionDetails = CopilotHotkeyManager::GetTargetAppExtensionDetails(this, v25, v14);
      TargetAppExtensionDetails::operator=((__int64)this + 208, (__int64)TargetAppExtensionDetails);
      TargetAppExtensionDetails::~TargetAppExtensionDetails((TargetAppExtensionDetails *)v25);
    }
    std::wstring::_Tidy_deallocate(&v22);
    std::wstring::_Tidy_deallocate(v19);
  }
  else
  {
    CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary(this);
  }
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v16 = (char *)this + 392;
      break;
    case 2:
      v16 = (char *)this + 432;
      break;
    case 3:
      v16 = (char *)this + 472;
      break;
    default:
      goto LABEL_38;
  }
  std::wstring::operator=((char *)v17, v16, v5);
  LOBYTE(v18) = v16[32];
  HIDWORD(v18) = *((_DWORD *)v16 + 9);
LABEL_38:
  if ( *((_QWORD *)this + 28) )
    CopilotHotkeyManager::HandlePenButtonAction((__int64)this, v4, (__int64)v17);
LABEL_40:
  std::wstring::_Tidy_deallocate(v17);
}
