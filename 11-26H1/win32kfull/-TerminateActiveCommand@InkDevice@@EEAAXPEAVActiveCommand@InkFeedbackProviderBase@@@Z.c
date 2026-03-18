/*
 * XREFs of ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1402FF160
 * Callers:
 *     <none>
 * Callees:
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1402FE48C (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

void __fastcall InkDevice::TerminateActiveCommand(InkDevice *this, struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  char *v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 32;
  if ( v2[12] )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      v3 = *((_DWORD *)a2 + 5);
      InkDevice::DoSuperWetInkStop((__int64)v2, (const struct IFC_SUPERWET_INK_STOP_DATA *)&v3);
    }
  }
}
