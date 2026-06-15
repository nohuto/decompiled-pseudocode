/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180111300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSectionBasedCrossProcessMemory@@QEAA@XZ @ 0x180110E00 (--1CSectionBasedCrossProcessMemory@@QEAA@XZ.c)
 */

void **__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>::`vector deleting destructor'(
        void **a1,
        char a2)
{
  *((_DWORD *)a1 + 11) = -1073741823;
  CSectionBasedCrossProcessMemory::~CSectionBasedCrossProcessMemory(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
