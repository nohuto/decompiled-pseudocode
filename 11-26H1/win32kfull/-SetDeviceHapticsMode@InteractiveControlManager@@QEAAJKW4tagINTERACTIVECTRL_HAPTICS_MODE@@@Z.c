/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402F2140
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1402F226C (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1401DCD48 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402FD854 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsMode(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  _QWORD *v7; // rdi
  __int64 v8; // r14
  int v9; // eax
  const char *v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF
  const char *v13; // [rsp+98h] [rbp+48h] BYREF

  v12 = a2;
  v4 = 0;
  v5 = a3;
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v12 = a3;
    v11 = "InteractiveControlManager::SetDeviceHapticsMode entry";
    LODWORD(v13) = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      byte_140378A8A,
      a3,
      a4,
      (void **)&v11,
      (__int64)&v13,
      (__int64)&v12);
  }
  v7 = (_QWORD *)(a1 + 40);
  v8 = 5LL;
  do
  {
    if ( *v7 )
    {
      v9 = InteractiveControlDevice::SetHapticsMode(*v7, v5);
      v4 = v9;
      if ( v9 < 0 && (unsigned int)dword_1403AAA68 > 2 )
      {
        v12 = v9;
        v13 = "Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1403AAA68,
          (__int64)&unk_1403789A7,
          a3,
          a4,
          (void **)&v13,
          (__int64)&v12);
      }
    }
    ++v7;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(a1 + 32) = v5;
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v12 = v4;
    v13 = "InteractiveControlManager::SetDeviceHapticsMode exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_1403789DF,
      a3,
      a4,
      (void **)&v13,
      (__int64)&v12);
  }
  return v4;
}
