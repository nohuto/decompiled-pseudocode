/*
 * XREFs of ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x180533E20
 * Callers:
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x1805340D0 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804D1760 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z @ 0x1805337CC (-AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z.c)
 */

void __fastcall AppResizeAcc::RaisePropertyChangeNotification(AppResizeAcc *this, int a2)
{
  const WCHAR *v4; // rcx
  const unsigned __int16 *v5; // rcx
  VARIANTARG pvarg; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR prgsz; // [rsp+60h] [rbp+18h] BYREF

  memset(&pvarg, 0, sizeof(pvarg));
  VariantInit(&pvarg);
  if ( a2 == 30139 )
  {
    v5 = &pvData;
    if ( *((_QWORD *)this + 12) )
      v5 = (const unsigned __int16 *)*((_QWORD *)this + 12);
    if ( (int)InitVariantFromString(v5, &pvarg) >= 0 )
      goto LABEL_10;
  }
  else if ( a2 == 30140 )
  {
    v4 = &pvData;
    if ( *((_QWORD *)this + 12) )
      v4 = (const WCHAR *)*((_QWORD *)this + 12);
    prgsz = v4;
    if ( InitVariantFromStringArray(&prgsz, 1u, &pvarg) >= 0 )
    {
LABEL_10:
      if ( (int)AppResizeAcc::AddPendingNotification(this, a2, &pvarg) < 0 )
        VariantClear(&pvarg);
    }
  }
}
