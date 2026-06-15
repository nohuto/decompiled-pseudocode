/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCBtAudioResourceManagerBase@@UIEndpointCustomFormatHandler@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800F7670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F7408 (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 */

CBtAudioResourceManagerBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,IEndpointCustomFormatHandler>::`scalar deleting destructor'(
        CBtAudioResourceManagerBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 157) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x278);
  return a1;
}
