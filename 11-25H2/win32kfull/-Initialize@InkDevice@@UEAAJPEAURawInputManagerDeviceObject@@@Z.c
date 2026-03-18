/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EEF70
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x14026E128 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x1401EEE30 (-IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1402EC214 (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1402EC2D4 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?GetHidDesc@RimBackedDeviceBase@@QEBAPEBUtagHIDDESC@@XZ @ 0x1402EEF50 (-GetHidDesc@RimBackedDeviceBase@@QEBAPEBUtagHIDDESC@@XZ.c)
 *     ?Initialize@RimBackedDeviceBase@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EF1D0 (-Initialize@RimBackedDeviceBase@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@@QEBAJKPEAXK0KPEAK@Z @ 0x1402EF874 (-SendSynchronousIoControl@RimBackedDeviceBase@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1402EFAB0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  int DeviceCaps; // ebx
  const struct tagHIDDESC *HidDesc; // rsi
  __int16 v5; // dx
  struct _HIDP_PREPARSED_DATA *v6; // r12
  struct UsageValueInfo *v7; // rax
  _BYTE *v8; // r14
  char v9; // al
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  int v16; // edx
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
  v9 = *((_BYTE *)this + 104);
  *(_DWORD *)v18 = 0;
  *v8 = v9;
  DeviceCaps = RimBackedDeviceBase::SendSynchronousIoControl(
                 this,
                 0xB0192u,
                 0LL,
                 0,
                 v8,
                 *((unsigned __int16 *)HidDesc + 24),
                 (unsigned int *)v18);
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
        if ( *((_DWORD *)this + 28) == 72LL )
        {
          v10 = *((_DWORD *)this + 36);
          v11 = (4 * (v10 & 0x10)) | 0xB;
          if ( (v10 & 4) == 0 )
            v11 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
          v12 = v11 | 4;
          if ( (v10 & 8) == 0 )
            v12 = v11;
          v13 = v12 | 0x10;
          if ( (v10 & 1) == 0 )
            v13 = v12;
          v14 = v13 | 0x20;
          if ( (v10 & 2) == 0 )
            v14 = v13;
          *((_DWORD *)this + 37) = v14;
          v15 = Win32AllocPoolZInit(*((unsigned __int16 *)HidDesc + 23), 1349217865LL);
          v16 = 0;
          *((_QWORD *)this + 20) = v15;
          if ( !v15 )
            v16 = -1073741801;
          DeviceCaps = v16;
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
