/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@UEAA@XZ @ 0x180110D48
 * Callers:
 *     ??_ECCrossProcessKSMemory@@UEAAPEAXI@Z @ 0x180111350 (--_ECCrossProcessKSMemory@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>(
        CSectionBasedCrossProcessMemory *a1)
{
  *((_DWORD *)a1 + 11) = -1073741823;
  CSectionBasedCrossProcessMemory::~CSectionBasedCrossProcessMemory(a1);
}
