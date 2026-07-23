/*
 * XREFs of MiTransferFileExtent @ 0x1404FDB1C
 * Callers:
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     MiFlushFileOnlyMdl @ 0x140501964 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     MiInitializeCachedExtentWalker @ 0x1404FDCAC (MiInitializeCachedExtentWalker.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiCopyFilePage @ 0x1406FE0B0 (MiCopyFilePage.c)
 *     MiGetCachedExtentWalkerNextPage @ 0x1406FEE98 (MiGetCachedExtentWalkerNextPage.c)
 */

int *__fastcall MiTransferFileExtent(_DWORD *a1, ULONG_PTR a2, ULONG_PTR a3, int a4, __int64 a5)
{
  unsigned __int64 v7; // r15
  int v10; // ecx
  __int64 v11; // rdi
  int *result; // rax
  int v13; // ebx
  __int64 *v14; // r14
  unsigned int i; // esi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int CachedExtentWalkerNextPage; // eax
  _DWORD *v20; // rdx
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+50h] [rbp-38h]
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF

  v7 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v10 = MiInitializeCachedExtentWalker(&v21, a2, a3, a4 == 0);
  if ( v10 < 0 )
  {
LABEL_4:
    if ( a4 )
      KeBugCheckEx(0x1Au, 0x1486uLL, a2, a3, v10);
    result = (int *)a5;
    *(_QWORD *)(a5 + 8) = 0LL;
    *result = v10;
    return result;
  }
  v11 = v22;
  if ( (_QWORD)v22 == 0x8000000000000000uLL )
  {
    v10 = -1073740023;
    goto LABEL_4;
  }
  v13 = 0;
  v24 = v22;
  v14 = (__int64 *)(a1 + 12);
  for ( i = 0; i < (unsigned int)v7; ++i )
  {
    v16 = *v14;
    if ( a4 )
    {
      v17 = *v14;
      v18 = 1LL;
      v16 = v11;
    }
    else
    {
      v18 = 0LL;
      v17 = v11;
    }
    MiCopyFilePage(v16, v17, v18);
    if ( ++v13 != (_DWORD)v7 )
    {
      CachedExtentWalkerNextPage = MiGetCachedExtentWalkerNextPage(&v21, &v24);
      if ( CachedExtentWalkerNextPage < 0 )
      {
        if ( a4 )
          KeBugCheckEx(0x1Au, 0x1486uLL, a2, a3, CachedExtentWalkerNextPage);
        break;
      }
      v11 = v24;
    }
    ++v14;
  }
  v20 = (_DWORD *)a5;
  *(_QWORD *)(a5 + 8) = (unsigned int)(v13 << 12);
  result = v13 == 0 ? (int *)0xC0000709LL : 0LL;
  *v20 = (_DWORD)result;
  return result;
}
