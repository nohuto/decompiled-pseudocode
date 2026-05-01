/*
 * XREFs of ?IsNewKGLVersionAvailable@BroadcastDVRComponent@@AEAA_NPEAK@Z @ 0x1800C83E8
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800C6E04 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall BroadcastDVRComponent::IsNewKGLVersionAvailable(BroadcastDVRComponent *this, unsigned int *a2)
{
  int ValueW; // eax
  bool v4; // sf
  __int64 v5; // rdx
  bool v7; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+20h] BYREF

  v10 = HIDWORD(this);
  pvData = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\KGL\\OneSettings",
             L"Version",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v4 = ValueW < 0;
  if ( ValueW > 0 )
  {
    ValueW = (unsigned __int16)ValueW | 0x80070000;
    v4 = ValueW < 0;
  }
  if ( v4 )
  {
    v5 = 1154LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)ValueW);
    return 0;
  }
  if ( a2 )
    *a2 = pvData;
  v11 = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
             L"KGLRevision",
             0x10u,
             0LL,
             &v11,
             &pcbData);
  v7 = ValueW < 0;
  if ( ValueW > 0 )
  {
    ValueW = (unsigned __int16)ValueW | 0x80070000;
    v7 = ValueW < 0;
  }
  if ( v7 )
  {
    v5 = 1165LL;
    goto LABEL_5;
  }
  return pvData > v11;
}
