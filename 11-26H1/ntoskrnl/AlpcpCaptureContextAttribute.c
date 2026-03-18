/*
 * XREFs of AlpcpCaptureContextAttribute @ 0x140A8216C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1409BE688 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall AlpcpCaptureContextAttribute(__int64 a1, void *a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v9; // rdi
  __int128 Src; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]

  Src = 0LL;
  v12 = 0LL;
  if ( a5 )
    RtlCopyFromUser(&Src, a2, 0x20uLL);
  else
    RtlCopyVolatileMemory(&Src, a2, 0x20uLL);
  DWORD1(v12) = *(_DWORD *)(a3 + 264);
  DWORD2(v12) = *(_DWORD *)(a3 + 272);
  LODWORD(v12) = 0;
  *(_QWORD *)&Src = *(_QWORD *)(a1 + 56);
  v9 = *((_QWORD *)&Src + 1);
  if ( a5 )
    RtlCopyToUser(a2, &Src, 0x20uLL);
  else
    RtlCopyVolatileMemory(a2, &Src, 0x20uLL);
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    *a4 = v9;
  else
    a4[1] = v9;
  return 0LL;
}
