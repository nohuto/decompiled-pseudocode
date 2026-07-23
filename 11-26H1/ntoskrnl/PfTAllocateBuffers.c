/*
 * XREFs of PfTAllocateBuffers @ 0x1407C91B8
 * Callers:
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfTGetFreeBuffer @ 0x1409F2128 (PfTGetFreeBuffer.c)
 *     PfTLbInitialize @ 0x140AF9A78 (PfTLbInitialize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfTAllocateBuffers(__int64 a1, unsigned int a2, unsigned int a3)
{
  size_t v3; // r15
  unsigned int v4; // esi
  unsigned int i; // ebp
  _QWORD *Pool2; // rdi
  _QWORD *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rcx

  v3 = a2;
  v4 = 0;
  *(_DWORD *)a1 = (16 * a2) | *(_DWORD *)a1 & 0xF;
  for ( i = 0; i < a3; ++i )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( (*(_DWORD *)a1 & 0xF) != 0 )
    {
      memset_0(Pool2, 0, v3);
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      *((_DWORD *)Pool2 + 8) = 2048;
    }
    else
    {
      PfTLbInitialize(Pool2, (unsigned int)v3, 0LL);
    }
    *Pool2 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = Pool2;
    ++*(_WORD *)(a1 + 10);
    ++*(_DWORD *)(a1 + 4);
  }
  v9 = (_QWORD *)PfTGetFreeBuffer(a1);
  v10 = (__int64 *)(a1 + 24);
  v11 = *v10;
  if ( *(__int64 **)(*v10 + 8) != v10 )
    __fastfail(3u);
  *v9 = v11;
  v9[1] = v10;
  *(_QWORD *)(v11 + 8) = v9;
  *v10 = (__int64)v9;
  return v4;
}
