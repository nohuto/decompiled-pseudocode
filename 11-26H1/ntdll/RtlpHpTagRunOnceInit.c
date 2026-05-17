/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x1801023C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 */

_BOOL8 __fastcall RtlpHpTagRunOnceInit(__int64 a1, __int64 a2)
{
  int v3; // ebx
  char *v4; // rdi
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  v7 = RtlpHpEnvHandle;
  v3 = 0;
  v4 = (char *)RtlpHpMetadataAlloc(0x200uLL, 0x200uLL, 0, &v7);
  if ( v4 )
  {
    v7 = RtlpHpEnvHandle;
    v5 = RtlpHpMetadataAlloc(0x2000uLL, 0x2000uLL, 1, &v7);
    if ( v5 )
    {
      *(_QWORD *)(a2 + 24) = v5;
      *(_QWORD *)a2 = 0LL;
      *(_DWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 16) = v4;
      *(_DWORD *)(a2 + 12) = 2048;
      if ( (v4 + 512 >= v4 ? 0x40 : 0) != 0 )
        memset64(v4, (a2 + 8) | 1, v4 + 512 >= v4 ? 0x40 : 0);
    }
    else
    {
      v3 = -1073741801;
      v7 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v4, &v7);
    }
  }
  else
  {
    v3 = -1073741801;
  }
  return v3 >= 0;
}
