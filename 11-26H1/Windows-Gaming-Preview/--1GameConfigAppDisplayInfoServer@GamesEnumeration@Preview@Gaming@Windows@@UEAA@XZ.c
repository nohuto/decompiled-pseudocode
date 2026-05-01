/*
 * XREFs of ??1GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180025C48
 * Callers:
 *     ??_EGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800272A0 (--_EGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::~GameConfigAppDisplayInfoServer(
        Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  WindowsDeleteString(*((HSTRING *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::FtmBase>((__int64)this);
}
