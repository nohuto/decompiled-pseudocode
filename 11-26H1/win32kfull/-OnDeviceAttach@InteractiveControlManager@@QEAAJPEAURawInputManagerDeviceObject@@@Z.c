/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F19B0
 * Callers:
 *     ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EF380 (-OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140003E68 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14013CBE0 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x14025F274 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1402FC718 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402FCB84 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FCFA4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1402FD650 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402FD6A0 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
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
  int v12; // eax
  __int64 v14; // rdx
  __int64 i; // rax
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 *v20; // [rsp+70h] [rbp+40h] BYREF
  const char *v21; // [rsp+78h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v20 = (unsigned __int16 *)((char *)a2 + 264);
    v21 = "InteractiveControlManager::OnDeviceAttach entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
      (__int64)this,
      (__int64)&unk_14037918E,
      a3,
      a4,
      (void **)&v21,
      &v20);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPoolZInit(400LL, 1819440195LL);
  v9 = v6;
  if ( !v6 )
  {
    Device = -1073741670;
    goto LABEL_16;
  }
  v11 = InteractiveControlDevice::InteractiveControlDevice(v6);
  v12 = InteractiveControlDevice::Initialize(v11, a2);
  Device = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_1403AAA68 > 2 )
    {
      LODWORD(v20) = v12;
      v21 = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAA68,
        (__int64)&unk_1403790E6,
        v7,
        v8,
        (void **)&v21,
        (__int64)&v20);
    }
LABEL_13:
    if ( v11 )
      InteractiveControlDevice::Deinitialize(v11);
    Win32FreePool(v9);
    goto LABEL_16;
  }
  if ( *((_DWORD *)this + 20) < 5u )
  {
    Device = InteractiveControlManager::FindDevice(this, 0, *(void **)v11, 0LL, 0LL);
    if ( Device == -1073741275 )
    {
      for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
      {
        if ( *((_QWORD *)this + i + 5) == v14 )
        {
          *((_QWORD *)this + i + 5) = v11;
          Device = 0;
          ++*((_DWORD *)this + 20);
          v16 = *((_QWORD *)a2 + 49);
          RIMUnlockExclusive(v16 + 104);
          InteractiveControlDevice::SetBackgroundAccessor(v11, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
          InteractiveControlDevice::SetFocus(v11, *(_QWORD *)this, *((unsigned int *)this + 2), 1LL);
          if ( !*((_DWORD *)this + 2) )
          {
            v17 = InteractiveControlDevice::SetComponentResolution(
                    (__int64)v11,
                    3,
                    *((_DWORD *)this + 7),
                    (_DWORD *)this + 8);
            Device = v17;
            if ( v17 < 0 && (unsigned int)dword_1403AAA68 > 2 )
            {
              LODWORD(v20) = v17;
              v21 = "Function failed.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1403AAA68,
                (__int64)&unk_140379156,
                v18,
                v19,
                (void **)&v21,
                (__int64)&v20);
            }
          }
          RIMLockExclusive(v16 + 104);
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
  if ( (unsigned int)dword_1403AAA68 > 2 )
  {
    LODWORD(v20) = Device;
    v21 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_14037911E,
      v7,
      v8,
      (void **)&v21,
      (__int64)&v20);
  }
LABEL_12:
  if ( Device < 0 )
    goto LABEL_13;
LABEL_16:
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    LODWORD(v20) = Device;
    v21 = "InteractiveControlManager::OnDeviceAttach exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_140379039,
      v7,
      v8,
      (void **)&v21,
      (__int64)&v20);
  }
  return (unsigned int)Device;
}
