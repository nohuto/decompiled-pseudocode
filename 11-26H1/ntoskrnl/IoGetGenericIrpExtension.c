/*
 * XREFs of IoGetGenericIrpExtension @ 0x140461C20
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14072146C (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IoGetGenericIrpExtension(__int64 a1, void *a2, unsigned __int16 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  result = 3221226021LL;
  if ( a3 > 4u )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
  {
    v6 = a1 + 196;
LABEL_7:
    memmove(a2, (const void *)(v6 + 4), a3);
    return 0LL;
  }
  if ( v5 && (*(_BYTE *)(v5 + 2) & 4) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 200);
    goto LABEL_7;
  }
  return result;
}
