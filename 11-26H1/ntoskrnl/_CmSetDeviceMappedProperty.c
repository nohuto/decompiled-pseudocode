/*
 * XREFs of _CmSetDeviceMappedProperty @ 0x140AAD7DC
 * Callers:
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140780B30 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408A175C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x140AADA38 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADC30 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADD7C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 */

__int64 __fastcall CmSetDeviceMappedProperty(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        PLARGE_INTEGER Time,
        int a8)
{
  unsigned int v11; // ebx
  __int64 i; // rdx
  __int64 v13; // r8
  unsigned int j; // edx
  __int64 v15; // r8
  unsigned int k; // edx
  __int64 v17; // r8
  unsigned int m; // edx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax

  v11 = -1073741802;
  if ( !a4 )
  {
    if ( CmIsRootDevice(a2) )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < 0x21; i = (unsigned int)(i + 1) )
      {
        v13 = (__int64)*(&CmDeviceRegPropMap + 3 * i);
        if ( v13 && *(_DWORD *)(a5 + 16) == *(_DWORD *)(v13 + 16) )
        {
          v22 = *(_QWORD *)a5 - *(_QWORD *)v13;
          if ( *(_QWORD *)a5 == *(_QWORD *)v13 )
            v22 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v13 + 8);
          if ( !v22 )
          {
            v11 = CmSetDeviceMappedPropertyFromRegProp(a1, (_DWORD)a2, (_DWORD)a3, a5, a6, (__int64)Time, a8);
            if ( v11 != -1073741802 )
              return v11;
            break;
          }
        }
      }
      for ( j = 0; j < 0xD; ++j )
      {
        v15 = (__int64)*(&off_140BE31E0 + 4 * j);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v15 + 16) )
        {
          v23 = *(_QWORD *)a5 - *(_QWORD *)v15;
          if ( *(_QWORD *)a5 == *(_QWORD *)v15 )
            v23 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v15 + 8);
          if ( !v23 )
          {
            if ( a6 >= 2 )
              CmSetDeviceMappedPropertyFromDriverKeyRegValue(a1, (int)a2, a5, a6, Time, a8);
            else
              CmDeleteDeviceMappedPropertyFromDriverKeyRegValue(a1, a2, a5);
            v11 = -1073741802;
            break;
          }
        }
      }
      for ( k = 0; k < 2; ++k )
      {
        v17 = (__int64)*(&off_140BE03F0 + 4 * k);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v17 + 16) )
        {
          v24 = *(_QWORD *)a5 - *(_QWORD *)v17;
          if ( *(_QWORD *)a5 == *(_QWORD *)v17 )
            v24 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v17 + 8);
          if ( !v24 )
          {
            if ( a6 < 2 )
              v25 = CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(a1, (int)a2, a3, a5);
            else
              v25 = CmSetDeviceMappedPropertyFromInstanceKeyRegValue(a1, (int)a2, a3, a5, a6, Time, a8);
            v11 = v25;
            if ( v25 >= 0 )
            {
              PnpObjectRaisePropertyChangeEvent(a1, (__int64)a2, 1, (__int64)a3, 0LL, a5);
              return v11;
            }
            if ( v25 != -1073741802 )
              return v11;
            break;
          }
        }
      }
      for ( m = 0; m < 0x1C; ++m )
      {
        v19 = (__int64)*(&off_140BE2850 + 2 * m);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v19 + 16) )
        {
          v21 = *(_QWORD *)a5 - *(_QWORD *)v19;
          if ( *(_QWORD *)a5 == *(_QWORD *)v19 )
            v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v19 + 8);
          if ( !v21 )
            return (unsigned int)-1073741790;
        }
      }
    }
  }
  return v11;
}
