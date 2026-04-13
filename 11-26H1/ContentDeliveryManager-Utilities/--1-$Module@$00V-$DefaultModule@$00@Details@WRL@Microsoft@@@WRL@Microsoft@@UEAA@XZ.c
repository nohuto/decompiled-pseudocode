/*
 * XREFs of ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180042C0C
 * Callers:
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180043060 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180045590 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

bool __fastcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(
        Microsoft::WRL::Details *a1,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3,
        bool a4)
{
  bool result; // al

  LOBYTE(a3) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  result = Microsoft::WRL::Details::TerminateMap(a1, a2, a3, a4);
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  return result;
}
