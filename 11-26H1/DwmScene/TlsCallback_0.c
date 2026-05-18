/*
 * XREFs of TlsCallback_0 @ 0x18000D650
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall TlsCallback_0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  void (__fastcall **i)(__int64); // rbx

  if ( a2 == 2 )
  {
    v2 = (unsigned int)TlsIndex;
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
    if ( *(_BYTE *)(v3 + 20) != 1 )
    {
      *(_BYTE *)(v3 + 20) = 1;
      for ( i = (void (__fastcall **)(__int64))&unk_1800F6840; i != (void (__fastcall **)(__int64))&unk_1800F6840; ++i )
      {
        if ( *i )
          (*i)(v2);
      }
    }
  }
}
