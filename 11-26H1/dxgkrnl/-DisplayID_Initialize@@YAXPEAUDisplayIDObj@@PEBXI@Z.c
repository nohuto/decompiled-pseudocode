/*
 * XREFs of ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x14009EEB8
 * Callers:
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x14009DD38 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140281218 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x140281790 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281E20 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140282120 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 * Callees:
 *     ?DisplayID_Init@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z @ 0x14009ED58 (-DisplayID_Init@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z.c)
 *     ?IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ @ 0x14009F238 (-IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ.c)
 *     Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline @ 0x14009F298 (Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DisplayID_Initialize(struct DisplayIDObj *a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  char *v7; // rsi
  int v8; // r15d
  int v9; // ebp
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r14
  char *i; // r11
  char *v13; // r11
  int v14; // ecx
  char *v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]

  v3 = a3;
  if ( (unsigned int)Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline() )
  {
    DisplayID_Init((__int64)a1, (unsigned __int64)a2, v3);
  }
  else if ( a1 )
  {
    *(_QWORD *)a1 = a2;
    *((_DWORD *)a1 + 2) = v3;
    *((_DWORD *)a1 + 3) = 0;
    *((_BYTE *)a1 + 16) = 0;
    *((_DWORD *)a1 + 5) = 0;
    if ( a2 )
    {
      if ( (_DWORD)v3 )
      {
        v6 = (unsigned int)v3;
        v7 = &a2[v3];
        v8 = 0;
        if ( a2 + 3 < v7 )
        {
          v9 = 0;
          v10 = a2[1] + 5;
          v15 = a2;
          v11 = v10;
          v16 = v6;
          for ( i = &a2[v10];
                i <= v7 && DisplayID_Section_Parser::IsValidSection((DisplayID_Section_Parser *)&v15);
                i = &v13[v11] )
          {
            v14 = v9;
            if ( v9 )
            {
              if ( (a2[2] & 0xF) != 0 )
                return;
            }
            else
            {
              v8 = (unsigned __int8)a2[3];
              *((_DWORD *)a1 + 3) = v11;
            }
            *((_DWORD *)a1 + 5) = ++v9;
            if ( v13 + 3 >= v7 )
            {
              if ( v14 == v8 && v13 <= v7 )
                *((_BYTE *)a1 + 16) = 1;
              return;
            }
            v15 = v13;
            a2 = v13;
            v16 = v7 - v13;
            v11 = v13[1] + 5;
          }
        }
      }
    }
  }
}
