/*
 * XREFs of ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x14041D59C
 * Callers:
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401DF7E8 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::RecordFeatureUsage(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  __int16 v9; // cx
  NTSTATUS v10; // r14d
  wchar_t *v11; // rcx
  wchar_t *v12; // rax
  __int16 v13; // di
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+D0h] [rbp+50h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+58h] BYREF

  Data = a3;
  v3 = a2;
  if ( (unsigned int)(a2 - 10) > 1 && *(_BYTE *)(a2 + a1 + 305236) )
    return 0LL;
  KeyHandle = 0LL;
  v6 = 0x7FFFLL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ValueName = 0LL;
  v7 = 0x7FFFLL;
  v8 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
  while ( *v8 )
  {
    ++v8;
    if ( !--v7 )
      goto LABEL_9;
  }
  v9 = 2 * v7;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
  ValueName.Length = -2 - v9;
  ValueName.MaximumLength = -v9;
LABEL_9:
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 704;
  v10 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( !v10 )
  {
    _mm_lfence();
    v11 = off_1400AAAE0[v3];
    ValueName = 0LL;
    if ( v11 )
    {
      v12 = v11;
      while ( *v12 )
      {
        ++v12;
        if ( !--v6 )
          goto LABEL_16;
      }
      v13 = 2 * v6;
      ValueName.Buffer = v11;
      ValueName.Length = -2 - v13;
      ValueName.MaximumLength = -v13;
    }
LABEL_16:
    v10 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  if ( v10 >= 0 )
    *(_BYTE *)(v3 + a1 + 305236) = 1;
  return (unsigned int)v10;
}
