/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402E0518
 * Callers:
 *     ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB2C (-OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140005C54 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14012ED30 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x140225AB4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1402ECDE8 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402ED638 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1402EDCF4 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EDD44 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3,
        __int64 a4)
{
  InteractiveControlDevice *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  InteractiveControlDevice *v9; // r15
  int Device; // ebx
  InteractiveControlDevice *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  __int64 i; // rax
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // [rsp+78h] [rbp+48h] BYREF

  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v20 = "InteractiveControlManager::OnDeviceAttach entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
      (__int64)this,
      (__int64)&unk_14036B3D0,
      a3,
      a4,
      &v20);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPoolZInit(400LL, 1819440195LL);
  v9 = v6;
  if ( !v6 )
  {
    Device = -1073741670;
    goto LABEL_15;
  }
  v11 = InteractiveControlDevice::InteractiveControlDevice(v6);
  Device = InteractiveControlDevice::Initialize(v11, a2);
  if ( Device >= 0 )
  {
    if ( *((_DWORD *)this + 20) < 5u )
    {
      Device = InteractiveControlManager::FindDevice(this, 0, *(void **)v11, 0LL, 0LL);
      if ( Device == -1073741275 )
      {
        for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
        {
          if ( *((_QWORD *)this + i + 5) == v15 )
          {
            *((_QWORD *)this + i + 5) = v11;
            Device = 0;
            ++*((_DWORD *)this + 20);
            v17 = *((_QWORD *)a2 + 49);
            RIMUnlockExclusive(v17 + 104);
            InteractiveControlDevice::SetBackgroundAccessor(v11, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
            InteractiveControlDevice::SetFocus(v11, *(_QWORD *)this, *((unsigned int *)this + 2), 1LL);
            if ( !*((_DWORD *)this + 2) )
            {
              Device = InteractiveControlDevice::SetComponentResolution(
                         (__int64)v11,
                         3,
                         *((_DWORD *)this + 7),
                         (_DWORD *)this + 8);
              if ( Device < 0 && (unsigned int)dword_14039BBF8 > 2 )
              {
                v20 = "Function failed.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_14039BBF8,
                  (__int64)&unk_14036B06D,
                  v18,
                  v19,
                  &v20);
              }
            }
            RIMLockExclusive(v17 + 104);
            if ( Device >= 0 )
              goto LABEL_15;
            goto LABEL_12;
          }
        }
      }
      else
      {
        Device = -1073741811;
      }
    }
    else
    {
      Device = -1073741670;
    }
    if ( (unsigned int)dword_14039BBF8 <= 2 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (unsigned int)dword_14039BBF8 > 2 )
  {
LABEL_11:
    v20 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B06D,
      v12,
      v13,
      &v20);
  }
LABEL_12:
  if ( v11 )
    InteractiveControlDevice::Deinitialize(v11);
  Win32FreePool(v9);
LABEL_15:
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v20 = "InteractiveControlManager::OnDeviceAttach exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B034,
      v7,
      v8,
      &v20);
  }
  return (unsigned int)Device;
}
