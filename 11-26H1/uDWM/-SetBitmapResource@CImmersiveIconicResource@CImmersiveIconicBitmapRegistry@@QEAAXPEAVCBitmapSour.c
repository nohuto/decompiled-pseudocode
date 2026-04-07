/*
 * XREFs of ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800B74C4
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B7630 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x1800B7010 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        struct CBitmapSource *a2)
{
  struct CBitmapSource *BitmapSourceNoRef; // rax
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 i; // r9
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // eax
  CBaseObject *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                        this,
                        *((_DWORD *)a2 + 32));
  if ( BitmapSourceNoRef )
  {
    v4 = *((_DWORD *)this + 8);
    v5 = 0LL;
    for ( i = *((_QWORD *)this + 1); (unsigned int)v5 < v4; v5 = (unsigned int)(v5 + 1) )
    {
      if ( BitmapSourceNoRef == *(struct CBitmapSource **)(i + 8 * v5) )
        break;
    }
    if ( (unsigned int)v5 < v4 )
    {
      if ( (unsigned int)v5 < v4 - 1 )
      {
        do
        {
          v7 = (unsigned int)v5;
          LODWORD(v5) = v5 + 1;
          *(_QWORD *)(i + 8 * v7) = *(_QWORD *)(i + 8LL * (unsigned int)v5);
        }
        while ( (unsigned int)v5 < *((_DWORD *)this + 8) - 1 );
      }
      --*((_DWORD *)this + 8);
    }
  }
  v8 = *((_DWORD *)this + 8);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    if ( v9 <= *((_DWORD *)this + 7) )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v8) = v11;
      *((_DWORD *)this + 8) = v9;
LABEL_13:
      CBaseObject::AddRef(v11);
      return;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 8, 8, 1, &v11);
    if ( v10 >= 0 )
      goto LABEL_13;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC2u, 0LL);
  }
}
