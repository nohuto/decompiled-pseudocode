/*
 * XREFs of ?Play@KeyframeSequence@@QEAAXXZ @ 0x180046330
 * Callers:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800457E4 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Play(KeyframeSequence *this)
{
  char v1; // r8
  __int64 v3; // rdi
  unsigned int v4; // eax
  float v5; // xmm1_4
  bool v6; // r8
  int v7; // ecx
  int v8; // edx
  float v9; // xmm1_4
  int v10; // eax
  unsigned int v11; // edx
  int v12; // ecx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 132);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 132) = v1 | 2;
  }
  else
  {
    v3 = 0LL;
    if ( (v1 & 4) != 0 )
    {
      qsort(*((void **)this + 12), *((unsigned int *)this + 26), 0x18uLL, KeyframeSequence::CompareKeyframes);
      v4 = *((_DWORD *)this + 26);
      v1 = *((_BYTE *)this + 132) & 0xFB;
      *((_BYTE *)this + 132) = v1;
      *((_DWORD *)this + 28) = 0;
      if ( v4 >= 2 )
        *((_DWORD *)this + 28) = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL * (v4 - 1)) - **((_DWORD **)this + 12);
    }
    v5 = *((float *)this + 32);
    v6 = (v1 & 0x10) != 0;
    if ( v5 == 1.0 )
    {
      v7 = *((_DWORD *)this + 28);
      v8 = v7;
    }
    else
    {
      v8 = *((_DWORD *)this + 28);
      v7 = (int)(float)((float)v8 * v5);
    }
    v9 = *((float *)this + 31);
    if ( v9 == 0.0 )
      v10 = 0;
    else
      v10 = (int)(float)((float)v8 * v9);
    *((_DWORD *)this + 18) = v10;
    *((_DWORD *)this + 19) = v7;
    *((_DWORD *)this + 20) = v8;
    *((_BYTE *)this + 88) = v6;
    *((_DWORD *)this + 21) = v10;
    *((_BYTE *)this + 132) |= 0x20u;
    v11 = *((_DWORD *)this + 26);
    if ( v11 )
    {
      do
      {
        v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 24 * v3 + 8) + 20LL);
        if ( v12 != 1 && (unsigned int)(v12 - 2) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v11 );
    }
    *((_BYTE *)this + 132) |= 3u;
  }
}
