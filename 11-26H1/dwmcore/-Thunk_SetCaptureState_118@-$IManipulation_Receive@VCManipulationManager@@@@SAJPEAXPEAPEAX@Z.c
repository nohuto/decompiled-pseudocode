/*
 * XREFs of ?Thunk_SetCaptureState_118@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180226480
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801B85E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetCaptureState_118(__int64 a1, __int64 a2)
{
  int *v2; // rax
  __int64 *v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = *(int **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v7 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(&v7, *v3);
  v5 = v7;
  *(_DWORD *)(v7 + 460) = v4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
