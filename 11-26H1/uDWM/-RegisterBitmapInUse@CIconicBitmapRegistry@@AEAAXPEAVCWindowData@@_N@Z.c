/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18002CA8C
 * Callers:
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18002C9F8 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180038B84 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180026F40 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180038D60 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?Contains@?$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z @ 0x180065B0C (-Contains@-$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  char v2; // r8
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  struct CWindowData *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !IsWindowTab(a2) )
  {
    v4 = v3 + 16;
    v5 = (__int64 *)(v3 + 16);
    if ( v2 )
    {
      ++*(_DWORD *)(v3 + 80);
      DynArray<CStoryboard const *,0>::Remove(v5, (__int64 *)&v9);
    }
    else if ( !(unsigned __int8)DynArray<HMONITOR__ *,0>::Contains(v5, &v9) )
    {
      --*(_DWORD *)(v8 + 80);
      DynArray<CWindowData *,0>::AddMultipleAndSet(v4, &v9, v6, v7);
    }
  }
}
