/*
 * XREFs of ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18006DB08
 * Callers:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18006D9EC (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?LogMorph@CAnimationComponent@@QEAAXXZ @ 0x180098DD0 (-LogMorph@CAnimationComponent@@QEAAXXZ.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180098E4C (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     McTemplateU0pdd_EtwEventWriteTransfer @ 0x180098ECC (McTemplateU0pdd_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationComponent::_LogEvent(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  void *v4; // rdx
  __int64 result; // rax

  if ( !a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return result;
    v4 = &UdwmAnimationComponent_Created;
    return McTemplateU0pdd_EtwEventWriteTransfer(
             a1,
             (_DWORD)v4,
             *(_QWORD *)(a1 + 16),
             *(_DWORD *)(*(_QWORD *)(a1 + 144) + 72LL),
             *(_BYTE *)(a1 + 24));
  }
  v2 = a2 - 1;
  if ( !v2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return result;
    v4 = &UdwmAnimationComponent_Destroyed;
    return McTemplateU0pdd_EtwEventWriteTransfer(
             a1,
             (_DWORD)v4,
             *(_QWORD *)(a1 + 16),
             *(_DWORD *)(*(_QWORD *)(a1 + 144) + 72LL),
             *(_BYTE *)(a1 + 24));
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return result;
    v4 = &UdwmAnimationComponent_Morphed;
    return McTemplateU0pdd_EtwEventWriteTransfer(
             a1,
             (_DWORD)v4,
             *(_QWORD *)(a1 + 16),
             *(_DWORD *)(*(_QWORD *)(a1 + 144) + 72LL),
             *(_BYTE *)(a1 + 24));
  }
  if ( v3 == 1 && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v4 = &UdwmAnimationComponent_Ghosted;
    return McTemplateU0pdd_EtwEventWriteTransfer(
             a1,
             (_DWORD)v4,
             *(_QWORD *)(a1 + 16),
             *(_DWORD *)(*(_QWORD *)(a1 + 144) + 72LL),
             *(_BYTE *)(a1 + 24));
  }
  return result;
}
