/*
 * XREFs of DCompositionNotifyCompletedPresent @ 0x140135930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DCompositionNotifyCompletedPresent(__int64 a1)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  struct _RTL_GENERIC_TABLE *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(W32GetDCompSessionState(a1) + 24);
  if ( v2 )
  {
    v3 = *(struct _ERESOURCE **)v2;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v3, 1u);
    v4 = *(struct _RTL_GENERIC_TABLE **)(v2 + 8);
    Buffer[0] = a1;
    Buffer[1] = 0LL;
    v5 = RtlLookupElementGenericTable(v4, Buffer);
    if ( v5 )
    {
      v6 = v5[1];
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 16);
        if ( v7 )
          *(_DWORD *)(v6 + 16) = v7 - 1;
      }
    }
    ExReleaseResourceLite(*(PERESOURCE *)v2);
    KeLeaveCriticalRegion();
  }
}
