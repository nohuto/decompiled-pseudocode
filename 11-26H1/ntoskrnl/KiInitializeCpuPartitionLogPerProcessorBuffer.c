/*
 * XREFs of KiInitializeCpuPartitionLogPerProcessorBuffer @ 0x1405F6E08
 * Callers:
 *     KiTraceCpuPartitionRundown @ 0x1407BE260 (KiTraceCpuPartitionRundown.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

int __fastcall KiInitializeCpuPartitionLogPerProcessorBuffer(unsigned __int64 a1, size_t a2, unsigned __int16 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  _QWORD *SListFaultAddress; // r13
  unsigned int v8; // esi
  __int64 v9; // rdi
  unsigned int v10; // ecx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v16; // [rsp+20h] [rbp-38h]

  v4 = a3;
  LODWORD(v6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( (_DWORD)v6 )
  {
    SListFaultAddress = ExSaPageGroupDescriptorArrayLock.SListFaultAddress;
    v8 = ((unsigned int)a1 >> 13) & 0x3FFFF;
    v9 = (a1 >> 4) & 0x1FF;
    v16 = (unsigned int)v6;
    do
    {
      _BitScanReverse(&v10, v8);
      v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*SListFaultAddress + 8LL * (v10 - 2))
                                 + 8 * (v8 ^ (unsigned __int64)(unsigned int)(1 << v10))
                                 + 8)
                     + 8 * v9);
      memset_0(v11, 0, a2);
      *((_WORD *)v11 + 16) = v4;
      *v11 = v11 + 5;
      v12 = (__int64)&v11[v4 + 6];
      *((_WORD *)v11 + 17) = 2 * v4 + 4;
      v13 = v12 + 8 * v4;
      v11[1] = v12;
      v11[2] = v13;
      ++SListFaultAddress;
      v6 = 16LL * (unsigned int)(2 * v4 + 4) + v13;
      v14 = v16-- == 1;
      v11[3] = v6;
    }
    while ( !v14 );
  }
  return v6;
}
