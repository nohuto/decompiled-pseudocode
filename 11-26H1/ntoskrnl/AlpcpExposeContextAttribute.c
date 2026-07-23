/*
 * XREFs of AlpcpExposeContextAttribute @ 0x140A823E0
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A82078 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

void *__fastcall AlpcpExposeContextAttribute(__int64 a1, __int64 a2, void *a3, _DWORD *a4, char a5)
{
  __int64 v5; // r10
  int v7; // eax
  __int64 v8; // rax
  void *result; // rax
  _QWORD Src[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]
  int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]

  v5 = *(_QWORD *)(a2 + 56);
  v14 = 0;
  if ( v5 == a1 || *(_QWORD *)(a2 + 64) == a1 )
  {
    Src[0] = *(_QWORD *)(a2 + 128);
    if ( v5 == a1 )
      goto LABEL_17;
  }
  else
  {
    Src[0] = *(_QWORD *)(a2 + 120);
  }
  if ( *(_QWORD *)(a2 + 64) != a1 )
  {
    v7 = *(_DWORD *)(a2 + 44);
    goto LABEL_6;
  }
LABEL_17:
  v7 = *(_DWORD *)(a2 + 72);
LABEL_6:
  v11 = v7;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 112);
  Src[1] = v8;
  v12 = *(_DWORD *)(a2 + 264);
  v13 = *(_DWORD *)(a2 + 272);
  if ( a5 )
    result = RtlCopyToUser(a3, Src, 0x20uLL);
  else
    result = RtlCopyVolatileMemory(a3, Src, 0x20uLL);
  if ( a4 )
  {
    if ( Src[0] )
      *a4 |= 0x20000000u;
  }
  return result;
}
