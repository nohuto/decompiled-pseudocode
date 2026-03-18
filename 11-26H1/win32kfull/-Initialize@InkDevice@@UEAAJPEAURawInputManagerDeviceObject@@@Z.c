/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE680
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x140295910 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x14021E020 (-IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1402FBCEC (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1402FBDAC (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?GetHidDesc@RimBackedDeviceBase@@QEBAPEBUtagHIDDESC@@XZ @ 0x1402FE65C (-GetHidDesc@RimBackedDeviceBase@@QEBAPEBUtagHIDDESC@@XZ.c)
 *     ?Initialize@RimBackedDeviceBase@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE8C0 (-Initialize@RimBackedDeviceBase@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@@QEBAJKPEAXK0KPEAK@Z @ 0x1402FEF6C (-SendSynchronousIoControl@RimBackedDeviceBase@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1402FF1A0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  int DeviceCaps; // ebx
  const struct tagHIDDESC *HidDesc; // rsi
  __int16 v5; // dx
  struct _HIDP_PREPARSED_DATA *v6; // r12
  struct UsageValueInfo *v7; // rax
  _BYTE *v8; // r14
  int v9; // r9d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  int v15; // edx
  unsigned int v17; // [rsp+28h] [rbp-280h]
  unsigned __int16 v18[2]; // [rsp+40h] [rbp-268h] BYREF
  _BYTE v19[544]; // [rsp+50h] [rbp-258h] BYREF

  DeviceCaps = RimBackedDeviceBase::Initialize(this, a2);
  if ( DeviceCaps < 0 )
    goto LABEL_28;
  HidDesc = RimBackedDeviceBase::GetHidDesc(this);
  v5 = *((_WORD *)HidDesc + 20);
  v6 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)HidDesc + 2);
  v18[0] = *((_WORD *)HidDesc + 55);
  if ( !InkDeviceParser::IsInkDevice(*((_WORD *)HidDesc + 21), v5, v18, 0LL) )
  {
    DeviceCaps = -1073741811;
LABEL_28:
    InkDevice::UnInitialize(this);
    return (unsigned int)DeviceCaps;
  }
  v7 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v7;
  if ( !v7 )
    goto LABEL_5;
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v6, (struct UsageValueInfo *)v19, v7, (InkDevice *)((char *)this + 104));
  if ( DeviceCaps < 0 )
    goto LABEL_28;
  v8 = (_BYTE *)Win32AllocPoolZInit(*((unsigned __int16 *)HidDesc + 24), 1349217865LL);
  if ( !v8 )
  {
LABEL_5:
    DeviceCaps = -1073741801;
    goto LABEL_28;
  }
  *v8 = *((_BYTE *)this + 104);
  v17 = *((unsigned __int16 *)HidDesc + 24);
  *(_DWORD *)v18 = 0;
  DeviceCaps = RimBackedDeviceBase::SendSynchronousIoControl(this, 0xB0192u, 0LL, 0, v8, v17, (unsigned int *)v18);
  if ( DeviceCaps >= 0 )
  {
    DeviceCaps = InkDeviceParser::GetDeviceFeatures(
                   v6,
                   v8,
                   *((unsigned __int16 *)HidDesc + 24),
                   (const struct UsageValueInfo *)v19,
                   (InkDevice *)((char *)this + 116));
    if ( DeviceCaps >= 0 )
    {
      if ( *((_DWORD *)this + 29) == 1 && *((_DWORD *)this + 30) == 1 && *((_DWORD *)this + 35) == 1 )
      {
        if ( *((_DWORD *)this + 28) == 72 )
        {
          v9 = *((_DWORD *)this + 36);
          v10 = (4 * (v9 & 0x10)) | 0xB;
          if ( (v9 & 4) == 0 )
            v10 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
          v11 = v10 | 4;
          if ( (v9 & 8) == 0 )
            v11 = v10;
          v12 = v11 | 0x10;
          if ( (v9 & 1) == 0 )
            v12 = v11;
          v13 = v12 | 0x20;
          if ( (v9 & 2) == 0 )
            v13 = v12;
          *((_DWORD *)this + 37) = v13;
          v14 = Win32AllocPoolZInit(*((unsigned __int16 *)HidDesc + 23), 1349217865LL);
          v15 = 0;
          *((_QWORD *)this + 20) = v14;
          if ( !v14 )
            v15 = -1073741801;
          DeviceCaps = v15;
        }
        else
        {
          DeviceCaps = -1073741762;
        }
      }
      else
      {
        DeviceCaps = -1073741637;
      }
    }
  }
  Win32FreePool(v8);
  if ( DeviceCaps < 0 )
    goto LABEL_28;
  return (unsigned int)DeviceCaps;
}
