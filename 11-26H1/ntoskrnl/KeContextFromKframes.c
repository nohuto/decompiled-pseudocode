/*
 * XREFs of KeContextFromKframes @ 0x1403D7680
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     KiSaveProcessorState @ 0x1405FFFC0 (KiSaveProcessorState.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpLocateExtendedOrSupervisorFeature @ 0x1403D7C80 (RtlpLocateExtendedOrSupervisorFeature.c)
 *     RtlXSave @ 0x1403D7D90 (RtlXSave.c)
 *     RtlCopyXStateArea @ 0x140505DF0 (RtlCopyXStateArea.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall KeContextFromKframes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rcx
  int v8; // esi
  _WORD *v9; // r8
  _QWORD *SparePtr; // rcx
  _QWORD *v12; // rax
  _BYTE *v13; // rcx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 ExtendedOrSupervisorFeature; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v7 = KeGetCurrentIrql();
    if ( (_BYTE)v7 != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 1;
      KiRaiseIrqlProcessIrqlFlags(v7, a2);
    }
  }
  v8 = *(_DWORD *)(a3 + 48);
  v9 = (_WORD *)(a1 + 368);
  if ( (v8 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *v9;
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v8 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v8 & 0x100002) == 0x100002 )
  {
    v9 = (_WORD *)(a1 + 368);
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 160) = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a3 + 144) = *(_QWORD *)(v4 + 256);
    *(_QWORD *)(a3 + 176) = *(_QWORD *)(v4 + 264);
    *(_QWORD *)(a3 + 168) = *(_QWORD *)(v4 + 272);
    *(_QWORD *)(a3 + 216) = *(_QWORD *)(v4 + 280);
    *(_QWORD *)(a3 + 224) = *(_QWORD *)(v4 + 288);
    *(_QWORD *)(a3 + 232) = *(_QWORD *)(v4 + 296);
    *(_QWORD *)(a3 + 240) = *(_QWORD *)(v4 + 304);
  }
  if ( (v8 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      _R9 = a3 + *(int *)(a3 + 1248) + 720LL;
      SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
      if ( !SparePtr )
        goto LABEL_18;
      v12 = (_QWORD *)*SparePtr;
      if ( *SparePtr )
      {
        do
        {
          SparePtr = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      v9 = (_WORD *)SparePtr[5];
      if ( v9 )
      {
        RtlCopyXStateArea(a3 + *(int *)(a3 + 1248) + 720LL, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
LABEL_18:
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        {
          *(_QWORD *)(_R9 + 520) |= 0x8000000000000000uLL;
          __asm { xrstors byte ptr [r9] }
          __asm { xsaves  byte ptr [r9] }
          if ( KiUserCetPl3SspCanonicalizeMask && (*(_DWORD *)(_R9 + 512) & 0x800LL) != 0 )
          {
            ExtendedOrSupervisorFeature = RtlpLocateExtendedOrSupervisorFeature(_R9 + 512, 11LL);
            *(_QWORD *)(ExtendedOrSupervisorFeature + 8) &= KiUserCetPl3SspCanonicalizeMask;
          }
        }
        else
        {
          RtlXSave(
            a3 + *(int *)(a3 + 1248) + 720LL,
            (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL,
            v9);
        }
      }
    }
    v9 = (_WORD *)(a1 + 368);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  v13 = v9;
  if ( (v8 & 0x100080) == 0x100080 && (*(_BYTE *)v9 & 1) == 0 )
  {
    v17 = *(_QWORD *)(a1 + 216);
    v18 = a3 + *(int *)(a3 + 1256);
    *(_QWORD *)(v18 + 1232) = *(_QWORD *)v17;
    *(_QWORD *)(v18 + 1240) = *(_QWORD *)(v17 + 8);
    v19 = *(_WORD *)(v17 + 16);
    v13 = (_BYTE *)(a1 + 368);
    *(_WORD *)(v18 + 1248) = v19;
    *(_WORD *)(v18 + 1250) = 0;
    *(_DWORD *)(v18 + 1252) = 0;
  }
  result = v8 & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      _fxsave((void *)(a3 + 256));
      v13 = (_BYTE *)(a1 + 368);
    }
    *(_OWORD *)(a3 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a3 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(a3 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(a3 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a3 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a3 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a3 + 512) = *(_OWORD *)(v4 + 48);
    *(_OWORD *)(a3 + 528) = *(_OWORD *)(v4 + 64);
    *(_OWORD *)(a3 + 544) = *(_OWORD *)(v4 + 80);
    *(_OWORD *)(a3 + 560) = *(_OWORD *)(v4 + 96);
    *(_OWORD *)(a3 + 576) = *(_OWORD *)(v4 + 112);
    *(_OWORD *)(a3 + 592) = *(_OWORD *)(v4 + 128);
    *(_OWORD *)(a3 + 608) = *(_OWORD *)(v4 + 144);
    *(_OWORD *)(a3 + 624) = *(_OWORD *)(v4 + 160);
    *(_OWORD *)(a3 + 640) = *(_OWORD *)(v4 + 176);
    *(_OWORD *)(a3 + 656) = *(_OWORD *)(v4 + 192);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    result = *(unsigned int *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = result;
  }
  if ( (v8 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(a3 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a3 + 104) = *(_QWORD *)(a1 + 248);
      v15 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      v15 = 0LL;
      *(_QWORD *)(a3 + 80) = 0LL;
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
      *(_QWORD *)(a3 + 104) = 0LL;
    }
    *(_QWORD *)(a3 + 112) = v15;
    if ( (*v13 & 1) != 0 )
    {
      result = *(unsigned int *)(a1 + 256);
      if ( (result & 0x100) == 0 )
      {
LABEL_31:
        *(_OWORD *)(a3 + 1200) = 0LL;
        *(_OWORD *)(a3 + 1216) = 0LL;
        goto LABEL_32;
      }
    }
    else
    {
      result = (unsigned __int64)KeGetCurrentPrcb();
      if ( (*(_DWORD *)(result + 328) & 0x100LL) == 0 )
        goto LABEL_31;
    }
    *(_OWORD *)(a3 + 1200) = *(_OWORD *)(a1 + 272);
    *(_OWORD *)(a3 + 1216) = *(_OWORD *)(a1 + 288);
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      if ( (*(_QWORD *)(a3 + 1200) & 0x7FFFFFFFFFFFFFFFuLL) >= 0x7FFFFFFF0000LL )
        *(_QWORD *)(a3 + 1200) = 0LL;
      if ( (*(_QWORD *)(a3 + 1208) & 0x7FFFFFFFFFFFFFFFuLL) >= 0x7FFFFFFF0000LL )
        *(_QWORD *)(a3 + 1208) = 0LL;
      if ( (*(_QWORD *)(a3 + 1216) & 0x7FFFFFFFFFFFFFFFuLL) >= 0x7FFFFFFF0000LL )
        *(_QWORD *)(a3 + 1216) = 0LL;
      result = *(_QWORD *)(a3 + 1224) & 0x7FFFFFFFFFFFFFFFLL;
      if ( result >= 0x7FFFFFFF0000LL )
        *(_QWORD *)(a3 + 1224) = 0LL;
    }
  }
LABEL_32:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
