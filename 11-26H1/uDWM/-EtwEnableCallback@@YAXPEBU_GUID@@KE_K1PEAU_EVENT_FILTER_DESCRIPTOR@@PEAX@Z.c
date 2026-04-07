/*
 * XREFs of ?EtwEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18008DB28
 * Callers:
 *     McGenControlCallbackV2 @ 0x18007C0E0 (McGenControlCallbackV2.c)
 * Callees:
 *     ?DispatchUdwmDiagnosticsControlMessage@@YAXPEBUUdwmDiagnosticsControlMessage@@@Z @ 0x1800B4C80 (-DispatchUdwmDiagnosticsControlMessage@@YAXPEBUUdwmDiagnosticsControlMessage@@@Z.c)
 */

void __fastcall EtwEnableCallback(
        const struct _GUID *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        __int64 *a7)
{
  ULONG Size; // edx

  if ( a7 == &Microsoft_Windows_Dwm_Udwm_Provider_Context && a2 == 2 )
  {
    if ( a6 )
    {
      if ( a6->Type == 0x80000000 )
      {
        Size = a6->Size;
        if ( Size >= 0x1C && *(_DWORD *)(a6->Ptr + 16) <= Size )
          DispatchUdwmDiagnosticsControlMessage((const struct UdwmDiagnosticsControlMessage *)a6->Ptr);
      }
    }
  }
}
