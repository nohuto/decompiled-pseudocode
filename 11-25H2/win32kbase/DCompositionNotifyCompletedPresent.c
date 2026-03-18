/*
 * XREFs of DCompositionNotifyCompletedPresent @ 0x140050160
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DCompositionNotifyCompletedPresent(__int64 a1)
{
  __int64 v2; // rbx
  struct _RTL_GENERIC_TABLE *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(W32GetDCompSessionState() + 24);
  if ( v2 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)v2);
    v3 = *(struct _RTL_GENERIC_TABLE **)(v2 + 8);
    Buffer[0] = a1;
    Buffer[1] = 0LL;
    v4 = RtlLookupElementGenericTable(v3, Buffer);
    if ( v4 )
    {
      v5 = v4[1];
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 16);
        if ( v6 )
          *(_DWORD *)(v5 + 16) = v6 - 1;
      }
    }
    ExReleaseResourceLite(*(PERESOURCE *)v2);
    KeLeaveCriticalRegion();
  }
}
