/*
 * XREFs of IopSymlinkCreateECP @ 0x140933B10
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140933A38 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140933C40 (IopSymlinkAllocateAndAddECP.c)
 */

__int64 __fastcall IopSymlinkCreateECP(PIRP Irp, __int64 a2, unsigned __int16 *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v5; // r11d
  char v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // r14
  __int64 result; // rax
  __int16 v12; // bx
  _QWORD *v13; // rsi
  size_t v14; // r8
  const void *v15; // rdx
  char *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // ebp
  PVOID EcpContext; // [rsp+88h] [rbp+10h] BYREF

  v5 = *a3;
  EcpContext = 0LL;
  v8 = 0;
  if ( v5 > 2 && *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)v5 >> 1) - 2) == 92 )
  {
    v8 = 1;
    *a3 = v5 - 2;
  }
  v9 = *(_QWORD *)(a2 + 64);
  v10 = a5;
  if ( !v9 )
  {
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
    if ( (int)result < 0 )
      goto LABEL_8;
    v12 = *a3;
    v13 = EcpContext;
    v14 = *a3;
    v15 = (const void *)*((_QWORD *)a3 + 1);
    v16 = (char *)EcpContext + 32;
    *((_WORD *)EcpContext + 3) = 0;
    v13[3] = v16;
    *((_WORD *)v13 + 2) = a4;
    *((_WORD *)v13 + 8) = 0;
    *((_WORD *)v13 + 9) = v12;
    *(_DWORD *)v13 = 0;
    v13[1] = 0LL;
    memmove(v16, v15, v14);
    *((_WORD *)v13 + 8) += v12;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(v9 + 208);
  if ( v17 && (v18 = *(_QWORD *)(v17 + 48)) != 0 )
  {
    v19 = *(unsigned __int16 *)(v18 + 16) + *a3 + 2;
    if ( v19 >= 0xFFFF )
    {
      result = 3221225734LL;
      goto LABEL_8;
    }
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
    if ( (int)result >= 0 )
    {
      v13 = EcpContext;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)EcpContext,
        v19 + 32,
        *((const void **)a3 + 1),
        *a3,
        0,
        *(void **)(v18 + 24),
        *(_WORD *)(v18 + 16),
        *(_WORD *)(v18 + 4),
        *(_WORD *)(v18 + 2),
        0LL);
      *(_WORD *)v13 = *(_WORD *)v18 + *((_WORD *)v13 + 8) - *(_WORD *)(v18 + 16);
LABEL_7:
      *v10 = v13;
      result = 0LL;
    }
  }
  else
  {
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
    if ( (int)result >= 0 )
    {
      v13 = EcpContext;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)EcpContext,
        *a3 + 32,
        *((const void **)a3 + 1),
        *a3,
        0,
        0LL,
        0,
        a4,
        0,
        0LL);
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( v8 )
    *a3 += 2;
  if ( (int)result < 0 )
    *v10 = 0LL;
  return result;
}
