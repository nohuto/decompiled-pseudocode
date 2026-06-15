/*
 * XREFs of ??_ECCrossProcessKSMemory@@UEAAPEAXI@Z @ 0x180111350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@UEAA@XZ @ 0x180110D48 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL.c)
 */

CCrossProcessKSMemory *__fastcall CCrossProcessKSMemory::`vector deleting destructor'(
        CCrossProcessKSMemory *this,
        char a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
