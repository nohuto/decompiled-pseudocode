/*
 * XREFs of SepAllocateAndInitializeCachedHandleEntry @ 0x140A3D660
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140A3B97C (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepAllocateAndInitializeCachedHandleEntry(__int64 a1, __int64 *a2)
{
  int v4; // ecx
  unsigned int v5; // ebp
  __int64 Pool2; // rax
  __int64 v7; // rbx

  *a2 = 0LL;
  v4 = 72;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
      v4 = *(unsigned __int16 *)(a1 + 10) + 72;
  }
  else
  {
    v4 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL) + 80;
  }
  v5 = (v4 + 3) & 0xFFFFFFFC;
  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 24) = 1LL;
  *(_QWORD *)(Pool2 + 64) = 0LL;
  *(_DWORD *)(Pool2 + 56) = 0;
  *(_DWORD *)(Pool2 + 32) = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      *(_WORD *)(Pool2 + 40) = *(_WORD *)(a1 + 8);
      *(_WORD *)(Pool2 + 42) = *(_WORD *)(a1 + 10);
      *(_QWORD *)(Pool2 + 48) = Pool2 + 72;
      RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 40), (PCUNICODE_STRING)(a1 + 8));
    }
  }
  else
  {
    *(_QWORD *)(Pool2 + 40) = Pool2 + 72;
    RtlCopySid(v5 - 72, (PSID)(Pool2 + 72), *(PSID *)(a1 + 8));
  }
  *a2 = v7;
  return 0LL;
}
