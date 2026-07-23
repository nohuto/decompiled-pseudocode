/*
 * XREFs of _CmDeleteInstallerClassWorker @ 0x140781680
 * Callers:
 *     _CmDeleteInstallerClass @ 0x14089D0DC (_CmDeleteInstallerClass.c)
 * Callees:
 *     _CmRaiseDeleteEvent @ 0x140777BCC (_CmRaiseDeleteEvent.c)
 *     _CmDeleteInstallerClassRegKey @ 0x14089D208 (_CmDeleteInstallerClassRegKey.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1408A1ED4 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140AA2310 (_CmGetMatchingFilteredDeviceList.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140B40214 (_CmSetInstallerClassMappedProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteInstallerClassWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int MatchingFilteredDeviceList; // eax
  int v7; // r9d
  unsigned int *v8; // r14
  unsigned int v9; // edi
  int v10; // eax
  void *Pool2; // rdi
  unsigned int v12; // ebp
  int InstallerClassMappedPropertyKeys; // eax
  __int64 i; // rbp
  int v15; // eax
  _DWORD v17[14]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v19 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(a1, a2, 128, 0, 0LL, 0LL, 0, (__int64)&v19);
    if ( MatchingFilteredDeviceList == -1073741789 )
    {
      return (unsigned int)-1073741535;
    }
    else if ( MatchingFilteredDeviceList )
    {
      return MatchingFilteredDeviceList;
    }
    else
    {
      v17[0] = 800;
      v8 = v17;
      v17[1] = 544;
      v9 = 0;
      v17[2] = 288;
      while ( v9 < 3 )
      {
        v10 = CmDeleteInstallerClassRegKey(a1, a2, *v8);
        if ( v10 && v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637 )
        {
          v3 = v10;
          if ( v10 < 0 )
            return (unsigned int)v3;
          break;
        }
        ++v9;
        ++v8;
      }
      Pool2 = 0LL;
      v12 = 0;
      v18 = 0;
      while ( 1 )
      {
        LOBYTE(v7) = 1;
        InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(
                                             a1,
                                             a2,
                                             0,
                                             v7,
                                             (__int64)Pool2,
                                             v12,
                                             (__int64)&v18);
        if ( InstallerClassMappedPropertyKeys != -1073741789 )
          break;
        v12 = v18;
        if ( 20 * (unsigned __int64)v18 > 0xFFFFFFFF )
        {
          InstallerClassMappedPropertyKeys = -1073741811;
          goto LABEL_25;
        }
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          InstallerClassMappedPropertyKeys = -1073741801;
LABEL_25:
          v3 = InstallerClassMappedPropertyKeys;
          goto LABEL_40;
        }
      }
      if ( InstallerClassMappedPropertyKeys && InstallerClassMappedPropertyKeys != -1073741275 )
        goto LABEL_25;
      for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
      {
        v15 = CmSetInstallerClassMappedProperty(a1, a2, 0, 0, (__int64)Pool2 + 20 * i, 0, 0LL, 0);
        if ( v15 && v15 != -1073741275 && v15 != -1073741790 && v15 != -1073741802 && v15 != -1073741637 )
        {
          v3 = v15;
          break;
        }
      }
      if ( v3 >= 0 )
      {
        InstallerClassMappedPropertyKeys = CmDeleteInstallerClassRegKey(a1, a2, 32LL);
        if ( InstallerClassMappedPropertyKeys
          && InstallerClassMappedPropertyKeys != -1073741772
          && InstallerClassMappedPropertyKeys != -1073741811 )
        {
          goto LABEL_25;
        }
        CmRaiseDeleteEvent(a1, a2, 2u);
      }
LABEL_40:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
  return (unsigned int)v3;
}
