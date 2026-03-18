/*
 * XREFs of KiTpReadImageData @ 0x1407BC570
 * Callers:
 *     RtlIcParseInstruction @ 0x140C560E8 (RtlIcParseInstruction.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

__int64 __fastcall KiTpReadImageData(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  _KPROCESS *v8; // rcx
  _OWORD v10[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v10, 0, sizeof(v10));
  v7 = 4096 - (*(_DWORD *)(a1 + 16) & 0xFFF);
  if ( v7 > a3 )
    v7 = a3;
  v8 = *(_KPROCESS **)a1;
  if ( v8 )
    KiStackAttachProcess(v8, 0, (__int64)v10);
  if ( *(_BYTE *)(a1 + 8) )
    ProbeForRead(*(volatile void **)(a1 + 16), v7, 1u);
  memmove(a2, *(const void **)(a1 + 16), v7);
  if ( a4 )
    *a4 = v7;
  if ( *(_DWORD *)(a1 + 32) < v7 )
    v7 = *(_DWORD *)(a1 + 32);
  memmove(*(void **)(a1 + 24), a2, v7);
  if ( *(_QWORD *)a1 )
    KiUnstackDetachProcess((__int64)v10, 0);
  return 0LL;
}
