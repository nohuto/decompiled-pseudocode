/*
 * XREFs of ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1401686F0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x140138AB0 (--$MakeSizedPoolPtr@_W@@YA-AV-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@K_K@Z.c)
 */

__int64 __fastcall ndisMiniportQueryDevicePropertyData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _DEVPROPKEY *a2,
        wchar_t **a3)
{
  char v3; // r14
  _DEVICE_OBJECT *PhysicalDeviceObject; // rbp
  __int64 v6; // rdx
  unsigned int DevicePropertyData; // ebx
  __int64 result; // rax
  wchar_t *v9; // rbx
  NTSTATUS v10; // edi
  size_t v11; // rdi
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-30h]
  PDEVPROPTYPE Typea; // [rsp+38h] [rbp-30h]
  ULONG v14; // [rsp+70h] [rbp+8h] BYREF
  const struct _DEVPROPKEY *RequiredSize; // [rsp+78h] [rbp+10h] BYREF
  PVOID Data; // [rsp+80h] [rbp+18h] BYREF

  RequiredSize = a2;
  v3 = (char)a1;
  *a3 = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  LODWORD(RequiredSize) = 0;
  v14 = 0;
  DevicePropertyData = IoGetDevicePropertyData(
                         PhysicalDeviceObject,
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         0,
                         0LL,
                         (PULONG)&RequiredSize,
                         &v14);
  if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
  {
    if ( (unsigned int)RequiredSize < 2 || ((unsigned __int8)RequiredSize & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x16u,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          v3,
          PhysicalDeviceObject);
      return 3221225534LL;
    }
    else
    {
      MakeSizedPoolPtr<wchar_t>(&Data, v6, (unsigned int)RequiredSize);
      v9 = (wchar_t *)Data;
      if ( Data )
      {
        v10 = IoGetDevicePropertyData(
                PhysicalDeviceObject,
                &DEVPKEY_Device_InstanceId,
                0,
                0,
                (ULONG)RequiredSize,
                Data,
                (PULONG)&RequiredSize,
                &v14);
        if ( v10 >= 0 )
        {
          if ( v14 == 18 || v14 == 25 )
          {
            v11 = (unsigned __int64)(unsigned int)RequiredSize >> 1;
            if ( v11 - 1 == wcsnlen(v9, v11) )
            {
              result = 0LL;
              *a3 = v9;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0xDu,
                  0x1Au,
                  (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
                  v3,
                  PhysicalDeviceObject);
              wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(&Data, 0LL);
              return 3221225534LL;
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(Typea) = v14;
              WPP_RECORDER_SF_qql(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xDu,
                0x19u,
                (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
                v3,
                (char)PhysicalDeviceObject,
                Typea);
            }
            wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(&Data, 0LL);
            return 3221225485LL;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Typea) = v10;
            WPP_RECORDER_SF_qql(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x18u,
              (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
              v3,
              (char)PhysicalDeviceObject,
              Typea);
          }
          wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(&Data, 0LL);
          return (unsigned int)v10;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x17u,
            (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
            v3,
            PhysicalDeviceObject);
        wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(&Data, 0LL);
        return 3221225626LL;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(Type) = DevicePropertyData;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x15u,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        v3,
        (char)PhysicalDeviceObject,
        Type);
    }
    return DevicePropertyData;
  }
  return result;
}
