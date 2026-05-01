/*
 * XREFs of ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x1803174E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::Run @ 0x180318190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800B2D18 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800B4F1C (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x18031534C (-BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnShellHookMessageTask(BroadcastDVRComponent *this, __int16 a2)
{
  int v2; // edi
  _QWORD **v4; // rbx
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rsi
  HWND DesktopWindow; // r15
  HWND v8; // r10
  char v9; // r12
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // ebx
  bool v13; // zf
  int v14; // r9d
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  LONG WindowLongW; // eax
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edx
  _QWORD **v27; // [rsp+40h] [rbp-28h] BYREF
  __int64 v28; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v29; // [rsp+50h] [rbp-18h]
  void *Src; // [rsp+B0h] [rbp+48h] BYREF
  bool v31; // [rsp+B8h] [rbp+50h] BYREF
  HWND v32; // [rsp+C0h] [rbp+58h] BYREF
  void *v33; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v4 = (_QWORD **)*((_QWORD *)this + 38);
  v27 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v28, (_QWORD *)this + 39);
  v32 = 0LL;
  v33 = 0LL;
  switch ( v2 )
  {
    case '7':
      v5 = L"APPCOMMAND_OPEN_GAMEBAR";
      break;
    case '8':
      v5 = L"APPCOMMAND_TOGGLE_RECORD";
      break;
    case '9':
      v5 = L"APPCOMMAND_RECORD_CLIP";
      break;
    case ':':
      v5 = L"APPCOMMAND_TAKE_SCREENSHOT";
      break;
    case ';':
      v5 = L"APPCOMMAND_TOGGLE_INDICATOR";
      break;
    case '<':
      v5 = L"APPCOMMAND_TOGGLE_MICROPHONE";
      break;
    case '=':
      v5 = L"APPCOMMAND_TOGGLE_CAMERA";
      break;
    case '>':
      v5 = L"APPCOMMAND_TOGGLE_BROADACST";
      break;
    default:
      v5 = L"UNKNOWN";
      break;
  }
  GameDVRTraceProvider::BroadcastDVRComponent_OnShellHookMessageTask(v2, v5);
  v6 = v28;
  if ( v4 )
  {
    if ( *(_BYTE *)(v28 + 17) )
      goto LABEL_64;
    if ( !*(_QWORD *)v28 )
    {
      v31 = 0;
      Src = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame((__int64)this, v4, v28 + 16, (char *)&v31, &v32, &v33, &Src);
      *(_QWORD *)v6 = v32;
      *(_QWORD *)(v6 + 8) = v33;
      if ( Src )
        std::wstring::operator=((void **)(v6 + 72), Src);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Src);
    }
    DesktopWindow = *(HWND *)v6;
    v8 = *(HWND *)(v6 + 8);
    v9 = *(_BYTE *)(v6 + 16);
    v14 = *(_DWORD *)(v6 + 56);
    v31 = (v14 & 2) != 0;
    v15 = (v9 != 0) | 0x40;
    if ( !*(_BYTE *)(v6 + 18) )
      v15 = v9 != 0;
    v16 = v15 | 2;
    if ( (v14 & 8) == 0 )
      v16 = v15;
    v17 = v16 | 4;
    if ( (v14 & 0x10) == 0 )
      v17 = v16;
    v11 = v17 | 8;
    if ( (v14 & 0x20) == 0 )
      v11 = v17;
    v12 = v11 | 0x10;
    v13 = (v14 & 0x40) == 0;
  }
  else
  {
    DesktopWindow = GetDesktopWindow();
    v8 = DesktopWindow;
    v9 = 0;
    v31 = 1;
    v10 = (*((_BYTE *)this + 449) != 0 ? 98 : 96) | 4;
    if ( !*((_BYTE *)this + 450) )
      v10 = *((_BYTE *)this + 449) != 0 ? 98 : 96;
    v11 = v10 | 8;
    if ( !*((_BYTE *)this + 451) )
      v11 = v10;
    v12 = v11 | 0x10;
    v13 = *((_BYTE *)this + 452) == 0;
  }
  if ( v13 )
    v12 = v11;
  if ( DesktopWindow )
  {
    WindowLongW = GetWindowLongW(v8, -16);
    if ( WindowLongW )
    {
      if ( (WindowLongW & 0x20000000) == 0 )
      {
        v19 = v2 - 55;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  v24 = v23 - 1;
                  if ( v24 )
                  {
                    v25 = v24 - 1;
                    if ( v25 )
                    {
                      if ( v25 != 1 )
                        goto LABEL_64;
                      v26 = 31;
                      goto LABEL_61;
                    }
                    v26 = 30;
                  }
                  else
                  {
                    v26 = 29;
                  }
                }
                else
                {
                  v26 = 28;
                }
                if ( !v9 )
                  goto LABEL_64;
                goto LABEL_61;
              }
              v26 = 27;
            }
            else
            {
              v26 = 26;
            }
          }
          else
          {
            v26 = 25;
          }
        }
        else
        {
          v26 = 24;
        }
LABEL_61:
        BroadcastDVRComponent::SendShellNotificationToDVR((__int64)this, v26, DesktopWindow, v12, 0, &v31, 0LL);
        if ( v31 && v6 )
          *(_DWORD *)(v6 + 56) |= 2u;
      }
    }
  }
LABEL_64:
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
}
