/*
 * XREFs of ?Thunk_UpdateManipulation_110@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1802265A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180107B08 (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801B85E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateManipulation_110(
        CManipulation *a1,
        __int64 a2)
{
  struct ManipulationData *v2; // rbx
  __int64 *v3; // rdx
  struct ManipulationData *v4; // rdx
  CManipulation *v5; // rbx
  unsigned int v6; // edi
  CManipulation *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = *(struct ManipulationData **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)&v8, *v3);
  v4 = v2;
  v5 = v8;
  v6 = CManipulation::Update(v8, v4);
  if ( v5 )
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
