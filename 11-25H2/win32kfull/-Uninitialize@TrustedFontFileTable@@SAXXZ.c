/*
 * XREFs of ?Uninitialize@TrustedFontFileTable@@SAXXZ @ 0x140310250
 * Callers:
 *     vTrustedFontFileTableCleanup @ 0x1403102F0 (vTrustedFontFileTableCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall TrustedFontFileTable::Uninitialize(__int64 a1, __int64 a2)
{
  __int64 SiloGlobals; // rax
  __int64 v3; // rbx
  struct _RTL_AVL_TABLE *v4; // rdi
  BOOLEAN i; // dl
  struct _UNICODE_STRING *v6; // rax
  struct _UNICODE_STRING *v7; // rsi

  SiloGlobals = UserGetSiloGlobals(a1, a2);
  v3 = SiloGlobals;
  if ( SiloGlobals )
  {
    *(_QWORD *)(SiloGlobals + 16) = 0LL;
    v4 = *(struct _RTL_AVL_TABLE **)(SiloGlobals + 24);
    if ( v4 )
    {
      for ( i = 1; ; i = 0 )
      {
        v6 = (struct _UNICODE_STRING *)RtlEnumerateGenericTableAvl(v4, i);
        v7 = v6;
        if ( !v6 )
          break;
        RtlFreeUnicodeString(v6);
        RtlDeleteElementGenericTableAvl(v4, v7);
      }
      Win32FreePool(*(void **)(v3 + 24));
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
}
