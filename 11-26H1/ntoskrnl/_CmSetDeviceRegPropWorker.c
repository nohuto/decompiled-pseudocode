/*
 * XREFs of _CmSetDeviceRegPropWorker @ 0x1409AC878
 * Callers:
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 * Callees:
 *     _MapCmDevicePropertyToRegValue @ 0x140469340 (_MapCmDevicePropertyToRegValue.c)
 *     _MapCmDevicePropertyToRegType @ 0x14049DCC8 (_MapCmDevicePropertyToRegType.c)
 *     _CmDevicePropertyWrite @ 0x1404BFA44 (_CmDevicePropertyWrite.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409ADAB8 (_CmRaisePropertyChangeEvent.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1409C9570 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall CmSetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        unsigned int a5,
        _DWORD *SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int v8; // ebx
  __int64 v12; // r12
  _DWORD *v13; // rbp
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  __int64 v18; // rcx
  HANDLE v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // r9d
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0;
  Handle[0] = 0LL;
  v12 = a1;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = SecurityDescriptorInput;
    if ( !SecurityDescriptorInput )
      return (unsigned int)-1073741811;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 )
    goto LABEL_51;
  if ( a4 > 19 )
  {
    if ( a4 <= 29 )
    {
      if ( a4 == 29 )
        goto LABEL_18;
      a1 = (unsigned int)(a4 - 20);
      if ( a4 == 20 )
        goto LABEL_18;
      a1 = (unsigned int)(a4 - 21);
      if ( a4 == 21 )
        goto LABEL_18;
      a1 = (unsigned int)(a4 - 22);
      if ( a4 == 22 )
        goto LABEL_18;
      a1 = (unsigned int)(a4 - 23);
      if ( a4 == 23 )
        goto LABEL_18;
      a1 = (unsigned int)(a4 - 24);
      if ( a4 == 24 )
        goto LABEL_18;
      LODWORD(a1) = a4 - 25;
      if ( a4 == 25 )
        goto LABEL_51;
      goto LABEL_15;
    }
    v14 = a4 == 30;
    a1 = (unsigned int)(a4 - 30);
LABEL_10:
    if ( v14 )
      goto LABEL_18;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_18;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_18;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_18;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_18;
LABEL_15:
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_18;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( a4 == 19 )
    goto LABEL_18;
  if ( a4 > 9 )
  {
    a1 = (unsigned int)(a4 - 10);
    if ( a4 == 10 )
      goto LABEL_18;
    v14 = a4 == 11;
    a1 = (unsigned int)(a4 - 11);
    goto LABEL_10;
  }
  if ( a4 == 9 )
    goto LABEL_18;
  if ( !a4 )
    goto LABEL_51;
  a1 = (unsigned int)(a4 - 1);
  if ( a4 == 1 )
    goto LABEL_18;
  a1 = (unsigned int)(a4 - 2);
  if ( a4 == 2 )
    goto LABEL_18;
  a1 = (unsigned int)(a4 - 3);
  if ( a4 == 3 )
    goto LABEL_18;
  if ( a4 == 4 )
    goto LABEL_51;
  a1 = (unsigned int)(a4 - 5);
  if ( a4 == 5 )
    goto LABEL_18;
  if ( a4 == 6 )
    goto LABEL_51;
  a1 = (unsigned int)(a4 - 7);
  if ( a4 == 7 )
    goto LABEL_51;
LABEL_17:
  if ( (_DWORD)a1 != 1 )
    goto LABEL_51;
LABEL_18:
  if ( !CmDevicePropertyWrite(a1, a4) )
    return (unsigned int)-1073741790;
  v15 = MapCmDevicePropertyToRegType(a4);
  if ( !v15 )
    return (unsigned int)-1073741264;
  if ( a5 != v15 )
    return (unsigned int)-1073741811;
  if ( a4 == 11 )
  {
    if ( SecurityDescriptorLength )
    {
      if ( !v13 || SecurityDescriptorLength != 4 )
        return (unsigned int)-1073741811;
      if ( *v13 && CmIsRootDevice(a2) )
      {
        v8 = -1073741808;
        goto LABEL_41;
      }
    }
  }
  else if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength > 0x40 )
      return (unsigned int)-1073741811;
  }
  else if ( a4 == 24
         && SecurityDescriptorLength
         && (!RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
          || RtlLengthSecurityDescriptor(v13) != SecurityDescriptorLength) )
  {
    v8 = -1073741811;
    goto LABEL_41;
  }
  if ( a3 || (v8 = CmOpenDeviceRegKey(v12, (__int64)a2, 16, 0, 33554434, 0, (__int64)Handle, 0LL), v8 >= 0) )
  {
    if ( a4 == 8 )
      goto LABEL_38;
    v17 = MapCmDevicePropertyToRegValue(v16, a4);
    if ( v17 )
    {
      v19 = Handle[0];
      if ( SecurityDescriptorLength )
      {
        if ( a3 )
          v19 = a3;
        v20 = PnpCtxRegSetValue(v18, v19, v17, a5, v13, SecurityDescriptorLength);
        if ( v20 == -1073741444 )
        {
          v8 = -1073741810;
          goto LABEL_41;
        }
        if ( v20 < 0 )
        {
          v8 = v20;
          goto LABEL_41;
        }
      }
      else
      {
        if ( a3 )
          v19 = a3;
        v21 = PnpCtxRegDeleteValue(v18, v19, v17);
        v8 = v21;
        if ( v21 == -1073741772 || v21 == -1073741444 )
          v8 = -1073741275;
      }
      if ( v8 < 0 )
        goto LABEL_41;
LABEL_38:
      v22 = (int)Handle[0];
      if ( a3 )
        v22 = (int)a3;
      CmRaisePropertyChangeEvent(v12, (_DWORD)a2, 1, v22, a4);
      goto LABEL_41;
    }
LABEL_51:
    v8 = -1073741264;
  }
LABEL_41:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v8;
}
