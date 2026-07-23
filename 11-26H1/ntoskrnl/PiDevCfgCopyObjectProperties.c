/*
 * XREFs of PiDevCfgCopyObjectProperties @ 0x140A46258
 * Callers:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407AC988 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140A46004 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140A46978 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140A47AD0 (PiDevCfgConfigureDeviceDriver.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     _PnpGetObjectPropertyKeys @ 0x140AB554C (_PnpGetObjectPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyObjectProperties(
        __int64 a1,
        __int64 a2,
        int a3,
        char *a4,
        unsigned int a5,
        const WCHAR *a6,
        int a7,
        char *a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  __int64 v11; // rax
  int v14; // r15d
  int ObjectPropertyKeys; // eax
  int ObjectProperty; // ebx
  void *v19; // r14
  int GenericStorePropertyKeys; // eax
  void *v21; // r12
  int v22; // r9d
  __int64 i; // r15
  char *v24; // r9
  int v25; // eax
  int v26; // r9d
  char *v27; // r9
  int v28; // [rsp+20h] [rbp-69h]
  int v29; // [rsp+20h] [rbp-69h]
  ULONG v30; // [rsp+60h] [rbp-29h]
  int v31; // [rsp+64h] [rbp-25h] BYREF
  char *v32; // [rsp+68h] [rbp-21h]
  char *Pool2; // [rsp+70h] [rbp-19h]
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  HANDLE v35; // [rsp+80h] [rbp-9h] BYREF
  __int64 v36; // [rsp+88h] [rbp-1h]
  unsigned int v38; // [rsp+E8h] [rbp+5Fh] BYREF

  v11 = *(_QWORD *)&PiPnpRtlCtx;
  v36 = *(_QWORD *)&PiPnpRtlCtx;
  Handle = 0LL;
  v35 = 0LL;
  v14 = a2;
  v38 = 0;
  v31 = 1;
  a5 = 0;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( ObjectProperty < 0 )
      goto LABEL_7;
    v11 = v36;
  }
  if ( a8
    || (ObjectProperty = PnpOpenObjectRegKey(v11, (__int64)a6, a7, 33554433, 0, (__int64)&v35), ObjectProperty >= 0) )
  {
    if ( a3 )
    {
      v26 = (int)Handle;
      if ( a4 )
        v26 = (int)a4;
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(a1, v14, a3, v26, v28, 0, 0LL, 0, (__int64)&v38);
    }
    else
    {
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(a1, (__int64)a4, 0LL, 0, 0LL, 0, &v38);
    }
    ObjectProperty = ObjectPropertyKeys;
    if ( (int)(ObjectPropertyKeys + 0x80000000) < 0 || ObjectPropertyKeys == -1073741789 )
    {
      if ( !v38 )
      {
        ObjectProperty = 0;
        goto LABEL_7;
      }
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v19 = Pool2;
      if ( !Pool2 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_7;
      }
      if ( a3 )
      {
        v22 = (int)Handle;
        if ( a4 )
          v22 = (int)a4;
        GenericStorePropertyKeys = PnpGetObjectPropertyKeys(
                                     a1,
                                     v14,
                                     a3,
                                     v22,
                                     v29,
                                     0,
                                     (__int64)Pool2,
                                     v38,
                                     (__int64)&v38);
      }
      else
      {
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(a1, (__int64)a4, 0LL, 0, (__int64)Pool2, v38, &v38);
      }
      ObjectProperty = GenericStorePropertyKeys;
      if ( GenericStorePropertyKeys < 0 )
        goto LABEL_19;
      v30 = 256;
      v21 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v21 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_19;
      }
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v38 )
          goto LABEL_39;
        if ( !a9 || (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)&Pool2[20 * i], a10) )
        {
          v32 = &Pool2[20 * i];
          if ( a3 )
          {
            v27 = (char *)Handle;
            if ( a4 )
              v27 = a4;
            ObjectProperty = PnpGetObjectProperty(
                               a1,
                               a2,
                               a3,
                               v27,
                               0LL,
                               (__int64)&Pool2[20 * i],
                               &v31,
                               (__int64)v21,
                               v30,
                               (__int64)&a5,
                               a11);
            if ( ObjectProperty == -1073741822 )
              goto LABEL_36;
          }
          else
          {
            ObjectProperty = PnpGetGenericStoreProperty(
                               a1,
                               a4,
                               0LL,
                               (__int64)&Pool2[20 * i],
                               &v31,
                               (__int64)v21,
                               v30,
                               &a5);
          }
          if ( ObjectProperty == -1073741789 )
          {
            if ( a5 <= v30 )
            {
              ObjectProperty = -1073741595;
LABEL_39:
              ExFreePoolWithTag(v21, 0);
              goto LABEL_40;
            }
            ExFreePoolWithTag(v21, 0);
            v30 = a5;
            v21 = (void *)ExAllocatePool2(0x100uLL);
            if ( !v21 )
            {
              ObjectProperty = -1073741670;
LABEL_40:
              v19 = Pool2;
LABEL_19:
              ExFreePoolWithTag(v19, 0);
              break;
            }
            ObjectProperty = 0;
            LODWORD(i) = i - 1;
          }
          else
          {
            if ( ObjectProperty < 0 )
              goto LABEL_39;
            v24 = (char *)v35;
            if ( a8 )
              v24 = a8;
            v25 = PiPnpRtlSetObjectProperty(v36, a6, a7, v24, 0LL, v32, v31, (STRSAFE_PCNZWCH)v21, a5, a11);
            ObjectProperty = v25;
            if ( v25 == -1073741790 )
            {
LABEL_36:
              ObjectProperty = 0;
              continue;
            }
            if ( v25 < 0 )
              goto LABEL_39;
          }
        }
      }
    }
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    ZwClose(v35);
  return (unsigned int)ObjectProperty;
}
