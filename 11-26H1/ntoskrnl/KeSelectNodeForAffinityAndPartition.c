/*
 * XREFs of KeSelectNodeForAffinityAndPartition @ 0x1405F1434
 * Callers:
 *     KiUpdateProcessGlobalIdealNode @ 0x1405F75D4 (KiUpdateProcessGlobalIdealNode.c)
 *     PspSelectNodeForProcess @ 0x1407F8950 (PspSelectNodeForProcess.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KiDoesNodeIntersectAffinity @ 0x1405F215C (KiDoesNodeIntersectAffinity.c)
 */

__int64 __fastcall KeSelectNodeForAffinityAndPartition(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  unsigned __int16 v9; // si
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // cx
  unsigned int v12; // edi
  unsigned __int16 *v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+32h] [rbp-36h]
  __int16 v17; // [rsp+36h] [rbp-32h]
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v4 = RtlCountSetBitsAffinityEx((unsigned __int16 *)a1);
  v15 = 0;
  v14[0] = (unsigned __int16 *)a1;
  v6 = (ExGenRandom(1, v5) & 0x7FFFFFFFuLL) % v4;
  v7 = 0;
  v8 = (unsigned __int16)v6;
  v14[1] = *(unsigned __int16 **)(a1 + 8);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v14) && v7 != v8 )
    ++v7;
  v9 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[v18] + 192) + 138LL);
  LOWORD(v18) = v9;
  v10 = v9;
  if ( a2 )
  {
    v11 = KeNumberNodes;
    v12 = 0;
    if ( KeNumberNodes )
    {
      do
      {
        if ( v10 >= v11 )
          v10 = 0;
        if ( (unsigned __int8)KiDoesNodeIntersectAffinity(KeNodeBlock[v10], a1) )
        {
          if ( *(_QWORD *)(56320LL * v10 + *(_QWORD *)(*(_QWORD *)a2 + 16LL) + 13888) )
            break;
          ++v10;
        }
        v11 = KeNumberNodes;
        ++v12;
      }
      while ( v12 < (unsigned __int16)KeNumberNodes );
      v9 = v18;
    }
    if ( v12 == (unsigned __int16)KeNumberNodes )
      v10 = v9;
  }
  return KeNodeBlock[v10];
}
