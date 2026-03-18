/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x180154CD0
 * Callers:
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x18015496C (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ?FinalRelease@CInteraction@@UEAAXXZ @ 0x180154B60 (-FinalRelease@CInteraction@@UEAAXXZ.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18025F65C (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  struct CInteraction::HANDLE_ENTRY *result; // rax
  unsigned int v2; // ecx

  result = 0LL;
  if ( a1 && a1 < dword_1803DCC1C )
  {
    v2 = Size * a1;
    if ( *(_DWORD *)((char *)qword_1803DCC28 + v2) )
      return (struct CInteraction::HANDLE_ENTRY *)((char *)qword_1803DCC28 + v2);
  }
  return result;
}
