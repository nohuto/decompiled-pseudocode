/*
 * XREFs of ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14012BED0
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140240550 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bp
  int v4; // edi
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  _DWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
  {
    v4 = 0;
    if ( *((_QWORD *)this + 17) )
    {
      if ( *((_QWORD *)this + 30) )
      {
        v11 = 0LL;
        if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x48uLL, (void **)&v11) )
        {
          v5 = v11;
          *v11 = 72;
          v6 = v5 + 1;
          memset(v5 + 1, 0, 0x44uLL);
          *v6 = 140;
          v6[1] = *((_DWORD *)this + 8);
          v6[2] = *((_DWORD *)this + 66);
          v6[3] = *(_DWORD *)(*((_QWORD *)this + 17) + 32LL);
          v6[4] = *((_DWORD *)this + 58);
          v6[5] = *((_DWORD *)this + 60);
          v6[6] = *((_DWORD *)this + 69);
          v6[7] = *((_DWORD *)this + 70);
          v6[8] = *((_DWORD *)this + 73);
          v6[15] = *((_DWORD *)this + 75);
          v6[9] = *((_DWORD *)this + 76);
          v6[10] = *((_DWORD *)this + 78);
          v7 = *((_QWORD *)this + 23);
          if ( v7 )
            v8 = *(_DWORD *)(v7 + 32);
          else
            v8 = 0;
          v6[11] = v8;
          v9 = *((_QWORD *)this + 18);
          if ( v9 )
            v4 = *(_DWORD *)(v9 + 32);
          v6[12] = v4;
          v6[14] = *((_DWORD *)this + 64);
          v6[13] = *((_DWORD *)this + 62);
          *((_BYTE *)v6 + 64) = *((_BYTE *)this + 320) & 1;
          *((_DWORD *)this + 4) |= 0x1000u;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return v3;
}
