/*
 * XREFs of ServiceDeviceEvent @ 0x180076664
 * Callers:
 *     ServiceDeviceEventCallback @ 0x1801534F0 (ServiceDeviceEventCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800AB670 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800AB6D4 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180109AE0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ServiceDeviceEvent(int a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( !v2 )
    goto LABEL_4;
  v7 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data4;
  if ( !v7 )
    goto LABEL_4;
  v8 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
  if ( !v8 )
  {
LABEL_4:
    if ( *(_DWORD *)(a2 + 4) == 5 )
    {
      v3 = a1 - 0x8000;
      if ( !v3 )
      {
        v16 = PostDeviceEvent(0LL);
        v17 = v16;
        if ( v16 >= 0 )
          return 0LL;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20B,
          (int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
          (const char *)(unsigned int)v16);
        v11 = v17;
        v12 = 740LL;
        goto LABEL_27;
      }
      v4 = v3 - 1;
      if ( !v4 )
      {
        v15 = PostDeviceEvent(2LL);
        if ( v15 >= 0 )
          return 0LL;
        v11 = (unsigned int)v15;
        v12 = 745LL;
        goto LABEL_27;
      }
      v5 = v4 - 1;
      if ( !v5 )
        return 0LL;
      v9 = v5 - 1;
      if ( !v9 )
      {
        v14 = OnAudioDeviceRemoval((struct _DEV_BROADCAST_DEVICEINTERFACE_W *)a2);
        if ( v14 >= 0 )
          return 0LL;
        v11 = (unsigned int)v14;
        v12 = 748LL;
        goto LABEL_27;
      }
      if ( v9 == 1 )
      {
        v10 = OnAudioDeviceRemoval((struct _DEV_BROADCAST_DEVICEINTERFACE_W *)a2);
        if ( v10 >= 0 )
          return 0LL;
        v11 = (unsigned int)v10;
        v12 = 751LL;
LABEL_27:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
          (const char *)v11,
          v18);
        return 0LL;
      }
      v13 = 754LL;
    }
    else
    {
      v13 = 759LL;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
      (const char *)0x80070078LL,
      v18);
  }
  return 0LL;
}
