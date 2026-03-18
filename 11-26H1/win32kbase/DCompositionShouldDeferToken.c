/*
 * XREFs of DCompositionShouldDeferToken @ 0x140119570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionShouldDeferToken(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  struct _ERESOURCE *v6; // rbx
  struct _RTL_GENERIC_TABLE *v7; // rcx
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(W32GetDCompSessionState(a1) + 24);
  if ( v5 )
  {
    v6 = *(struct _ERESOURCE **)v5;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    v7 = *(struct _RTL_GENERIC_TABLE **)(v5 + 8);
    Buffer[0] = a2;
    Buffer[1] = 0LL;
    v8 = 0LL;
    v9 = RtlLookupElementGenericTable(v7, Buffer);
    if ( v9 )
      v8 = (__int64 *)v9[1];
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 4) || (v10 = *v8) != 0 && (*(_BYTE *)(v10 + 32) & 2) == 0 && *(_QWORD *)(v10 + 48) != a1 )
        v4 = 1;
    }
    ExReleaseResourceLite(*(PERESOURCE *)v5);
    KeLeaveCriticalRegion();
  }
  return v4;
}
