/*
 * XREFs of KxContextToKframes @ 0x1403D82B0
 * Callers:
 *     KiInitializeContextThread @ 0x1403D7E1C (KiInitializeContextThread.c)
 *     KeContextToKframes @ 0x140535F60 (KeContextToKframes.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x14036A2A0 (VslKernelShadowStackAssist.c)
 *     RtlXRestore @ 0x1403D883C (RtlXRestore.c)
 *     RtlCopyXStateArea @ 0x140505DF0 (RtlCopyXStateArea.c)
 */

__int64 __fastcall KxContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int8 v5; // r15
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rcx
  __int16 v15; // ax
  _QWORD *SparePtr; // rcx
  __int64 result; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v29; // rcx
  __int64 v30; // r9
  __int16 v31; // ax
  __int64 v32; // r9
  _QWORD *v34; // rdx
  __int64 v35; // rcx

  v5 = 0;
  if ( (a4 & 0x100001) == 0x100001 )
  {
    v10 = *(_DWORD *)(a3 + 68);
    v11 = v10 & 0x210DD5;
    v12 = v10 & 0x250FD7;
    v13 = v11 | 0x202;
    if ( !a5 )
      v13 = v12;
    *(_DWORD *)(a1 + 376) = v13;
    v14 = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 360) = v14;
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a5 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      v15 = 35;
      if ( *(_WORD *)(a3 + 56) == 51 )
        v15 = 51;
      *(_WORD *)(a1 + 368) = v15;
      if ( v15 == 35 )
        v14 = (unsigned int)v14;
      else
        v14 = v14 << 16 >> 16;
    }
    else
    {
      *(_WORD *)(a1 + 392) = 24;
      *(_WORD *)(a1 + 368) = 16;
    }
    *(_QWORD *)(a1 + 360) = v14;
  }
  if ( (a4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    *(_QWORD *)(a1 + 344) = *(_QWORD *)(a3 + 160);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a3 + 144);
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a3 + 168);
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a3 + 176);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(a3 + 216);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 224);
    *(_QWORD *)(a2 + 296) = *(_QWORD *)(a3 + 232);
    *(_QWORD *)(a2 + 304) = *(_QWORD *)(a3 + 240);
  }
  if ( (a4 & 0x100040) == 0x100040 && a5 == 1 )
  {
    _R8 = a3 + *(int *)(a3 + 1248) + 720LL;
    SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
    if ( !SparePtr )
      goto LABEL_15;
    v34 = (_QWORD *)*SparePtr;
    if ( *SparePtr )
    {
      do
      {
        SparePtr = v34;
        v34 = (_QWORD *)*v34;
      }
      while ( v34 );
    }
    v35 = SparePtr[5];
    if ( v35 )
    {
      RtlCopyXStateArea(v35, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL);
    }
    else
    {
LABEL_15:
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        __asm { xrstors byte ptr [r8] }
      else
        RtlXRestore(
          a3 + *(int *)(a3 + 1248) + 720LL,
          (MEMORY[0xFFFFF780000003E0] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL,
          _R8);
    }
  }
  if ( (a4 & 0x100080) == 0x100080 && !a5 )
  {
    v26 = *(int *)(a3 + 1256);
    _RDX = *(_QWORD **)(a1 + 216);
    _R8 = *(_QWORD *)(v26 + a3 + 1240);
    v29 = v26 + a3;
    v30 = _RDX[1];
    if ( v30 != _R8 || (*(_BYTE *)(v29 + 1250) & 2) != 0 )
    {
      v31 = *(_WORD *)(v29 + 1250);
      if ( (v31 & 1) != 0 )
      {
        if ( v30 != _R8 )
          __asm { wrssq   qword ptr [rdx+8], r8 }
        if ( (*(_BYTE *)(v29 + 1250) & 2) != 0 )
        {
          _RAX = *_RDX + 8LL;
          __asm { wrssq   qword ptr [rdx], rax }
        }
      }
      else
      {
        if ( (v31 & 2) != 0 )
          v32 = *_RDX + 8LL;
        else
          v32 = 0LL;
        VslKernelShadowStackAssist(3, (__int64)_RDX, 0LL, v32, _R8, 4);
      }
    }
  }
  if ( (a4 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)(a2 + 192) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = KiMxCsrMask & *(_DWORD *)(a3 + 52);
    if ( a5 == 1 )
    {
      v5 = 1;
      *(_DWORD *)(a3 + 280) = _mm_getcsr();
      *(_WORD *)(a3 + 256) &= 0x1F3Fu;
    }
  }
  if ( (a4 & 0x100010) != 0x100010 )
    return v5;
  v19 = *(_QWORD *)(a3 + 72);
  if ( a5 )
  {
    *(_QWORD *)(a1 + 216) = v19 >= 0x7FFFFFFF0000LL ? 0LL : v19;
    v20 = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(a1 + 224) = v20 >= 0x7FFFFFFF0000LL ? 0LL : v20;
    v21 = *(_QWORD *)(a3 + 88);
    *(_QWORD *)(a1 + 232) = v21 >= 0x7FFFFFFF0000LL ? 0LL : v21;
    v22 = 0LL;
    if ( *(_QWORD *)(a3 + 96) < 0x7FFFFFFF0000uLL )
      v22 = *(_QWORD *)(a3 + 96);
  }
  else
  {
    *(_QWORD *)(a1 + 216) = v19;
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(a1 + 232) = *(_QWORD *)(a3 + 88);
    v22 = *(_QWORD *)(a3 + 96);
  }
  *(_QWORD *)(a1 + 240) = v22;
  *(_QWORD *)(a1 + 248) = 0LL;
  v23 = *(_QWORD *)(a3 + 112) & 0xFFFF0355LL;
  *(_QWORD *)(a1 + 256) = v23;
  if ( !a5 )
    return v5;
  CurrentThread = KeGetCurrentThread();
  v25 = (v23 & 0x355) == 0;
  result = v5;
  if ( v25 )
    _interlockedbittestandreset(&CurrentThread->Header.Lock, 0x18u);
  else
    _interlockedbittestandset(&CurrentThread->Header.Lock, 0x18u);
  return result;
}
