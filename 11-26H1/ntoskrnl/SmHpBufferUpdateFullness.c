/*
 * XREFs of SmHpBufferUpdateFullness @ 0x14024F400
 * Callers:
 *     SmHpBufferAlloc @ 0x14024F2BC (SmHpBufferAlloc.c)
 *     SmHpBufferCleanup @ 0x1403E9E38 (SmHpBufferCleanup.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 *     SmHpUnprotectListNeighbors @ 0x14024F5F4 (SmHpUnprotectListNeighbors.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpBufferUpdateFullness(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // eax
  signed int v6; // ebx
  int v7; // edi
  __int64 result; // rax
  unsigned __int8 *v9; // r14
  __int64 *v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int8 *v15; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 10);
  v6 = -1;
  if ( (_WORD)v3 )
    v7 = v3 >> *(_BYTE *)(a1 + 552);
  else
    v7 = -1;
  *(_WORD *)(a2 + 10) = a3 + v3;
  *(_DWORD *)(a1 + 560) += a3;
  result = *(unsigned __int16 *)(a2 + 10);
  if ( (_WORD)result )
    v6 = (unsigned int)result >> *(_BYTE *)(a1 + 552);
  if ( v7 != v6 )
  {
    BugCheckParameter4 = 0LL;
    if ( *(_DWORD *)(a2 + 12) )
    {
      v14 = rapidhash_internal(*(unsigned __int8 **)a2, 0x1000uLL, 0LL);
      v15 = *(unsigned __int8 **)a2;
      if ( !v14 )
        v14 = 1;
      if ( v14 != *(_DWORD *)(a2 + 12) )
      {
        SmPrepareForFatalHeapCorruption(v15, (__int64)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *(_QWORD *)a2, *(unsigned int *)(a2 + 12), BugCheckParameter4);
      }
      result = ExProtectPoolEx((unsigned __int64)v15, *(_QWORD *)a2, 4096LL, 4u);
      *(_DWORD *)(a2 + 12) = 0;
    }
    v9 = *(unsigned __int8 **)a2;
    if ( v7 >= 0 )
    {
      SmHpUnprotectListNeighbors(a1, a1 + 16 * (v7 + 18LL), v9);
      result = *(_QWORD *)v9;
      if ( *(unsigned __int8 **)(*(_QWORD *)v9 + 8LL) != v9 )
        goto LABEL_16;
      v10 = (__int64 *)*((_QWORD *)v9 + 1);
      if ( (unsigned __int8 *)*v10 != v9 )
        goto LABEL_16;
      *v10 = result;
      *(_QWORD *)(result + 8) = v10;
      if ( *(_QWORD *)(a1 + 16 * (v7 + 18LL)) == a1 + 16 * (v7 + 18LL) )
      {
        result = (unsigned int)(1 << v7);
        *(_DWORD *)(a1 + 284) ^= result;
      }
    }
    if ( v6 < 0 )
    {
      *((_QWORD *)v9 + 1) = v9;
      *(_QWORD *)v9 = v9;
    }
    else
    {
      v11 = (_QWORD *)(a1 + 16 * (v6 + 18LL));
      if ( (_QWORD *)*v11 == v11 )
      {
        *(_DWORD *)(a1 + 284) ^= 1 << v6;
      }
      else
      {
        v12 = *(unsigned int *)(v11[1] + 16LL);
        _BitScanReverse((unsigned int *)&v13, v12);
        SmHpBufferProtectEx(v13, (_QWORD *)(*(_QWORD *)(a1 + 8 * v13) + 16 * (v12 ^ (unsigned int)(1 << v13))), 1, 0);
      }
      result = v11[1];
      if ( *(_QWORD **)result != v11 )
LABEL_16:
        __fastfail(3u);
      *(_QWORD *)v9 = v11;
      *((_QWORD *)v9 + 1) = result;
      *(_QWORD *)result = v9;
      v11[1] = v9;
    }
  }
  return result;
}
