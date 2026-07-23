/*
 * XREFs of HvlEnlightenProcessor @ 0x140532D60
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1405BCB5C (HvlpInitializeBootProcessor.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     HvlSharedIsr @ 0x1402F3080 (HvlSharedIsr.c)
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1402F31A0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetRegister64 @ 0x14048DA10 (HvlpSetRegister64.c)
 *     HvlpGetRegister64 @ 0x1404CA750 (HvlpGetRegister64.c)
 *     HvlpSetupSchedulerAssist @ 0x1405BDADC (HvlpSetupSchedulerAssist.c)
 *     HvlpMapApicBackingPage @ 0x1405C249C (HvlpMapApicBackingPage.c)
 *     HvlpMapGhcb @ 0x1405C251C (HvlpMapGhcb.c)
 *     HvlpDiscoverTopologyLocal @ 0x140794700 (HvlpDiscoverTopologyLocal.c)
 */

void __fastcall HvlEnlightenProcessor(char a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  int v2; // edx
  ULONG v3; // r8d
  char v4; // cl
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bl
  _LIST_ENTRY *LpcbByLpIndex; // rdi
  unsigned int LpIndexFromProcessorIndex; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( HvlHypervisorConnected && (!a1 || (HvlpFlags & 2) == 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !a1 )
    {
      HvlpGetRegister64(589827, &v11);
      v2 = v11;
      v3 = (unsigned int)v11 >> 6;
      v4 = v11 & 0x3F;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number] = (unsigned int)v11 >> 6;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number + 1] = v4;
      if ( v2 != CurrentPrcb->Number )
        HvlpVirtualProcessorsIdentityMapped = 0;
      if ( v3 < 0x10 )
      {
        if ( v3 > ((HvlpFlags >> 8) & 0xF) )
          HvlpFlags = HvlpFlags & 0xFFFFF0FF | ((v3 & 0xF) << 8);
      }
      else
      {
        HvlEnlightenments &= ~0x80u;
        HvlpEnlightenments &= ~0x80u;
      }
      if ( CurrentPrcb->Number && HvlEnlightenments < 0 )
      {
        HvlpMapGhcb();
        HvlpMapApicBackingPage();
      }
    }
    if ( (HvlpFlags & 0x80000) != 0 )
    {
      v11 = 0LL;
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlpGetRegister64(589843, &v11);
        v5 = v11;
      }
      else
      {
        v5 = CurrentPrcb->VirtualApicAssistPage.QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      HvlpSetRegister64(589843, v5 | 1);
    }
    HvlpSetupSchedulerAssist(CurrentPrcb);
    v7 = HvlpFlags;
    LpcbByLpIndex = 0LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
      if ( (v7 & 0x20) != 0 )
      {
        HvlpGetRegister64(655379, &v12);
        if ( (v12 & 1) == 0 )
          HvlpSetRegister64(655379, v12 | 1);
      }
    }
    if ( (HvlpFlags & 0x20) != 0 )
    {
      v10 = ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30;
      if ( (HvlpFlags & 0x2000000) != 0 )
        HvlpSetRegister64(655360, ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30);
      if ( (HvlpFlags & 2) != 0 )
      {
        v6 = 1073741972LL;
        __writemsr(0x40000094u, v10);
      }
      HvlSharedIsr(v6);
    }
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( CurrentPrcb->Number )
        HvlpDiscoverTopologyLocal(
          v6,
          LODWORD(LpcbByLpIndex->Blink),
          (char *)&LpcbByLpIndex->Blink + 4,
          &LpcbByLpIndex[1]);
    }
  }
}
