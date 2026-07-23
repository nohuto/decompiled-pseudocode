/*
 * XREFs of WmipInitializeAllocs @ 0x140CE6498
 * Callers:
 *     WMIInitialize @ 0x140CE6210 (WMIInitialize.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x140B33F30 (ExInitializePagedLookasideList.c)
 */

void WmipInitializeAllocs()
{
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&stru_140E285C0.WaitBlockFill11[64],
    0LL,
    0LL,
    0,
    0x78uLL,
    0x53446D57u,
    0);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E285C0.Timer, 0LL, 0LL, 0, 0xA0uLL, 0x45476D57u, 0);
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&stru_140E285C0.SavedApcStateFill[40],
    0LL,
    0LL,
    0,
    0x60uLL,
    0x53496D57u,
    0);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E285C0.512, 0LL, 0LL, 0, 0x38uLL, 0x524D6D57u, 0);
}
