/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x140390D18
 * Callers:
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x14032078C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x140390CA4 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x140320654 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x140320A4C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        int a3,
        char a4)
{
  _DWORD *Buffer; // rax
  unsigned int v9; // esi
  unsigned int v10; // r10d
  unsigned int v11; // ebp
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rbx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax
  char *v14; // rbx
  int v15; // ecx

  if ( !*(_QWORD *)((char *)this + 60) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 48), 0x80u, 0);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 16) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v9 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  v11 = 1 << *((_DWORD *)this + 17);
  if ( v9 <= v11 )
  {
    if ( v9 != v11 )
    {
      if ( v10 == v9 )
      {
        if ( v9 + 8 < v11 )
          v11 = v9 + 8;
        v14 = (char *)AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 48), 16 * v11, 1);
        memset(&v14[16 * v9 + 16], 0, 16LL * (v11 - v9 - 1));
      }
      else
      {
        v14 = (char *)*((_QWORD *)this + 6);
      }
      Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v14[16 * *((unsigned int *)this + 16)];
      goto LABEL_15;
    }
  }
  else
  {
    v9 = 1 << *((_DWORD *)this + 17);
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, v10 % v9, 0, 0LL, 0LL);
  if ( !Entry )
    return 0LL;
LABEL_15:
  *((_DWORD *)Entry + 3) |= 1u;
  v15 = *((_DWORD *)Entry + 3);
  *(struct _LUID *)Entry = *a2;
  *((_DWORD *)Entry + 2) = a3;
  *((_DWORD *)Entry + 3) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * a4)) & 2;
  result = Entry;
  ++*((_DWORD *)this + 16);
  return result;
}
