/*
 * XREFs of MiZeroAndFlushAweLazyPtes @ 0x140707CBC
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiSetPteTimeStamp @ 0x140479E5C (MiSetPteTimeStamp.c)
 *     MiWriteAweClusterPte @ 0x140530318 (MiWriteAweClusterPte.c)
 *     MiInsertAweFlushList @ 0x140535804 (MiInsertAweFlushList.c)
 *     MiGetAweFlushList @ 0x1407067D8 (MiGetAweFlushList.c)
 */

void __fastcall MiZeroAndFlushAweLazyPtes(__int64 a1, __int64 a2)
{
  signed __int64 *v3; // rsi
  __int64 AweFlushList; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  int v7; // r14d
  int v8; // edx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  int v12; // r15d
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v3 = (signed __int64 *)(a2 & 0xFFFFFFFFFFFFF000uLL);
  AweFlushList = 0LL;
  v5 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v6 = MiSetPteTimeStamp(*(__int64 *)&CLFS_LSN_NULL_EXT, 0);
  v7 = 0;
  v8 = 0;
  v9 = v6 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
  if ( (unsigned __int64)v3 < v5 )
  {
    do
    {
      v10 = *v3;
      if ( (*v3 & 0x801) == 0 && v10 )
      {
        if ( qword_140E2D8C0 )
        {
          if ( (v10 & 0x10) != 0 )
            v10 &= ~0x10uLL;
          else
            v10 &= qword_140E2D8C8;
        }
        v11 = v10 >> 31;
        if ( (_DWORD)v11 )
        {
          v12 = 0;
          if ( (_DWORD)v11 != v8 )
          {
            while ( 1 )
            {
              _InterlockedOr(v13, 0);
              if ( (unsigned int)(KiTbFlushTimeStamp - v11) > 2
                || (v11 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v11) >= 2 )
              {
LABEL_18:
                v7 = 0;
                goto LABEL_19;
              }
              if ( (KiTbFlushTimeStamp & 1) == 0 )
                break;
              v14 = 0;
              _InterlockedOr(v13, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(&v14);
              if ( (v11 & 1) == 0 )
                goto LABEL_18;
            }
            v7 = 1;
          }
          v12 = v7;
LABEL_19:
          MiWriteAweClusterPte(*(_QWORD *)(a1 + 40), v3, v9, 6, *(_QWORD *)(a1 + 240));
          if ( v12 )
          {
            if ( !AweFlushList )
              AweFlushList = MiGetAweFlushList(a1, 64);
            MiInsertAweFlushList(a1, AweFlushList, (__int64)v3, 64);
          }
          v8 = v11;
        }
      }
      v3 += *(_QWORD *)(a1 + 240);
    }
    while ( (unsigned __int64)v3 < v5 );
    if ( AweFlushList )
    {
      MiFlushTbList(AweFlushList);
      MiReleaseProcessorFlushList();
    }
  }
}
