/*
 * XREFs of ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x18001D450
 * Callers:
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x18001D070 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006DC2C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::FireTimeEvents(CDesktopManager *this, bool *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int i; // ebx
  int v9; // eax
  int v11; // eax
  int v12; // eax
  void *lpMem; // [rsp+30h] [rbp-29h] BYREF
  _BYTE *v14; // [rsp+38h] [rbp-21h]
  int v15; // [rsp+40h] [rbp-19h]
  __int64 v16; // [rsp+44h] [rbp-15h]
  _BYTE v17[80]; // [rsp+50h] [rbp-9h] BYREF
  void *Src; // [rsp+C0h] [rbp+67h] BYREF

  v5 = 0;
  if ( !*((_DWORD *)this + 138) )
  {
LABEL_10:
    if ( *((_BYTE *)this + 24) )
    {
      v12 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                               + 28));
      v5 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x783u, 0LL);
    }
    return v5;
  }
  lpMem = v17;
  v14 = v17;
  v15 = 10;
  v16 = 10LL;
  *a2 = 1;
  v6 = *((_DWORD *)this + 138);
  if ( v6 <= 0xA )
  {
    memcpy_0(v17, *((const void **)this + 66), 8LL * v6);
    v7 = v6;
    HIDWORD(v16) = v6;
    goto LABEL_4;
  }
  Src = (void *)*((_QWORD *)this + 66);
  v11 = DynArrayImpl<0>::Grow((__int64)&lpMem, 8u, v6, a4, (unsigned __int64 *)&Src);
  v5 = v11;
  if ( v11 >= 0 )
  {
    memcpy_0((char *)lpMem + (unsigned int)(8 * HIDWORD(v16)), Src, 8 * v6);
    v7 = v6 + HIDWORD(v16);
    HIDWORD(v16) += v6;
LABEL_4:
    for ( i = 0; i < v7; ++i )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)lpMem + i) + 112LL))(*((_QWORD *)lpMem + i));
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x77Du, 0LL);
        CBitmapSourceArray::~CBitmapSourceArray(&lpMem);
        return v5;
      }
      v7 = HIDWORD(v16);
    }
    if ( lpMem != v14 )
    {
      DefaultHeap::Free(lpMem);
      lpMem = 0LL;
    }
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC2u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x779u, 0LL);
  if ( lpMem != v14 )
    DefaultHeap::Free(lpMem);
  return v5;
}
