/*
 * XREFs of ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x18014EAAC
 * Callers:
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x18014E508 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x18014E650 (--$_Emplace_reallocate@AEBU_tagpropertykey@@@-$vector@U_tagpropertykey@@V-$allocator@U_tagproper.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHybridPropertyStore::RuntimeClassInitialize(
        CHybridPropertyStore *this,
        struct IMMDevice *a2,
        unsigned int a3,
        const struct _tagpropertykey *a4)
{
  HRESULT v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  HRESULT (__stdcall *OpenPropertyStore)(IMMDevice *, DWORD, IPropertyStore **); // rdi
  struct _tagpropertykey *v13; // r8
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, (void **)this + 3);
  v9 = 0LL;
  if ( v8 < 0 )
  {
    v10 = 57LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  OpenPropertyStore = a2->lpVtbl->OpenPropertyStore;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 2);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, char *))OpenPropertyStore)(a2, 0LL, (char *)this + 16);
  if ( v8 < 0 )
  {
    v10 = 60LL;
    goto LABEL_3;
  }
  while ( (unsigned int)v9 < a3 )
  {
    v13 = (struct _tagpropertykey *)&a4[v9];
    v14 = *((_QWORD *)this + 5);
    if ( v14 == *((_QWORD *)this + 6) )
    {
      try
      {
        std::vector<_tagpropertykey>::_Emplace_reallocate<_tagpropertykey const &>(
          (void **)this + 4,
          v14,
          (__int128 *)v13);
      }
      catch ( std::bad_alloc )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
          (const char *)0x8007000ELL);
        return 2147942414LL;
      }
    }
    else
    {
      *(GUID *)v14 = v13->fmtid;
      *(_DWORD *)(v14 + 16) = v13->pid;
      *((_QWORD *)this + 5) += 20LL;
    }
    v9 = (unsigned int)(v9 + 1);
  }
  return 0LL;
}
