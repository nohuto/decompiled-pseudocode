/*
 * XREFs of _CmSetDeviceRegPropWorker @ 0x140951084
 * Callers:
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 * Callees:
 *     _MapCmDevicePropertyToRegValue @ 0x1404400C0 (_MapCmDevicePropertyToRegValue.c)
 *     _MapCmDevicePropertyToRegType @ 0x140470B74 (_MapCmDevicePropertyToRegType.c)
 *     _CmDevicePropertyWrite @ 0x140488300 (_CmDevicePropertyWrite.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14091BF80 (RtlValidRelativeSecurityDescriptor.c)
 *     _CmIsRootDevice @ 0x140932574 (_CmIsRootDevice.c)
 *     _CmRaisePropertyChangeEvent @ 0x14094F9F8 (_CmRaisePropertyChangeEvent.c)
 *     _PnpCtxRegSetValue @ 0x140950248 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x140950624 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmSetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        unsigned int a5,
        _DWORD *a6,
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
  int v22; // eax
  HANDLE v23; // r9
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0;
  Handle[0] = 0LL;
  v12 = a1;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = a6;
    if ( !a6 )
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
        goto LABEL_16;
      a1 = (unsigned int)(a4 - 20);
      if ( a4 == 20 )
        goto LABEL_16;
      a1 = (unsigned int)(a4 - 21);
      if ( a4 == 21 )
        goto LABEL_16;
      a1 = (unsigned int)(a4 - 22);
      if ( a4 == 22 )
        goto LABEL_16;
      a1 = (unsigned int)(a4 - 23);
      if ( a4 == 23 )
        goto LABEL_16;
      a1 = (unsigned int)(a4 - 24);
      if ( a4 == 24 )
        goto LABEL_16;
      LODWORD(a1) = a4 - 25;
      if ( a4 == 25 )
        goto LABEL_51;
      goto LABEL_13;
    }
    v14 = a4 == 30;
    a1 = (unsigned int)(a4 - 30);
LABEL_8:
    if ( v14 )
      goto LABEL_16;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_16;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_16;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_16;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_16;
LABEL_13:
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_16;
    a1 = (unsigned int)(a1 - 1);
    if ( !(_DWORD)a1 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( a4 == 19 )
    goto LABEL_16;
  if ( a4 > 9 )
  {
    a1 = (unsigned int)(a4 - 10);
    if ( a4 == 10 )
      goto LABEL_16;
    v14 = a4 == 11;
    a1 = (unsigned int)(a4 - 11);
    goto LABEL_8;
  }
  if ( a4 == 9 )
    goto LABEL_16;
  if ( !a4 )
    goto LABEL_51;
  a1 = (unsigned int)(a4 - 1);
  if ( a4 == 1 )
    goto LABEL_16;
  a1 = (unsigned int)(a4 - 2);
  if ( a4 == 2 )
    goto LABEL_16;
  a1 = (unsigned int)(a4 - 3);
  if ( a4 == 3 )
    goto LABEL_16;
  if ( a4 == 4 )
    goto LABEL_51;
  a1 = (unsigned int)(a4 - 5);
  if ( a4 == 5 )
    goto LABEL_16;
  if ( a4 == 6 )
    goto LABEL_51;
  a1 = (unsigned int)(a4 - 7);
  if ( a4 == 7 )
    goto LABEL_51;
LABEL_15:
  if ( (_DWORD)a1 != 1 )
    goto LABEL_51;
LABEL_16:
  if ( !CmDevicePropertyWrite(a1, a4) )
    return (unsigned int)-1073741790;
  v15 = MapCmDevicePropertyToRegType(a4);
  if ( !v15 )
    return (unsigned int)-1073741264;
  if ( a5 != v15 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_22;
    return (unsigned int)-1073741811;
  }
  if ( a4 == 11 )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_22;
    if ( v13 && SecurityDescriptorLength == 4 )
    {
      if ( *v13 && CmIsRootDevice(a2) )
      {
        v8 = -1073741808;
        goto LABEL_31;
      }
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 == 24
    && SecurityDescriptorLength
    && (!RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
     || RtlLengthSecurityDescriptor(v13) != SecurityDescriptorLength) )
  {
    v8 = -1073741811;
    goto LABEL_31;
  }
LABEL_22:
  if ( a3 || (v8 = CmOpenDeviceRegKey(v12, a2, 16, 0, 33554434, 0, (__int64)Handle, 0LL), v8 >= 0) )
  {
    if ( a4 == 8 )
      goto LABEL_41;
    v17 = MapCmDevicePropertyToRegValue(v16, a4);
    if ( v17 )
    {
      v19 = Handle[0];
      if ( SecurityDescriptorLength )
      {
        if ( a3 )
          v19 = a3;
        v22 = PnpCtxRegSetValue(v18, v19, (__int64)v17, a5, (__int64)v13, SecurityDescriptorLength);
        if ( v22 == -1073741444 )
        {
          v8 = -1073741810;
          goto LABEL_31;
        }
        if ( v22 < 0 )
        {
          v8 = v22;
          goto LABEL_31;
        }
      }
      else
      {
        if ( a3 )
          v19 = a3;
        v20 = PnpCtxRegDeleteValue(v18, v19, v17);
        v8 = v20;
        if ( v20 == -1073741772 || v20 == -1073741444 )
          v8 = -1073741275;
      }
      if ( v8 < 0 )
        goto LABEL_31;
LABEL_41:
      v23 = Handle[0];
      if ( a3 )
        v23 = a3;
      CmRaisePropertyChangeEvent(v12, (int)a2, 1u, (__int64)v23, a4);
      goto LABEL_31;
    }
LABEL_51:
    v8 = -1073741264;
  }
LABEL_31:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v8;
}
