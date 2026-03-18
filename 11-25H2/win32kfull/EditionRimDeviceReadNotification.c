/*
 * XREFs of EditionRimDeviceReadNotification @ 0x140272790
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1401BCBF8 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x14021E45C (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 *     FindRimDevBackedDeviceInfo @ 0x14027281C (FindRimDevBackedDeviceInfo.c)
 */

__int64 __fastcall EditionRimDeviceReadNotification(unsigned __int8 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct RawInputManagerDeviceObject *v10; // rbx
  InteractiveControlManager *v11; // rax
  struct InkProcessor *v12; // [rsp+20h] [rbp-18h] BYREF

  result = FindRimDevBackedDeviceInfo(a4, 0LL);
  if ( result || (result = FindRimDevBackedDeviceInfo(a4, 1LL)) != 0 )
  {
    v9 = *(unsigned int *)(result + 184);
    if ( (v9 & 0x100) != 0 )
    {
      v10 = *(struct RawInputManagerDeviceObject **)(result + 32);
      v11 = InteractiveControlManager::Instance(v9, v8);
      return InteractiveControlManager::OnInputReport(v11, v10, a1, a3);
    }
    else if ( (v9 & 0x200) != 0 )
    {
      v12 = 0LL;
      return GetInkProcessor(&v12, v8);
    }
  }
  return result;
}
