/*
 * XREFs of KiProcessControlProtectionFromKernelMode @ 0x14052ACCC
 * Callers:
 *     KiProcessControlProtection @ 0x1404F1210 (KiProcessControlProtection.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x14036A2A0 (VslKernelShadowStackAssist.c)
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405FD498 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405FD5D0 (KiGetCurrentKernelShadowStackBounds.c)
 *     KiLogControlProtectionKernelModeReturnMismatch @ 0x1405FD6F4 (KiLogControlProtectionKernelModeReturnMismatch.c)
 */

__int64 __fastcall KiProcessControlProtectionFromKernelMode(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rax
  unsigned int v5; // esi
  unsigned __int64 v6; // r15
  int CurrentKernelShadowStackBounds; // eax
  __int64 v8; // rdx
  int v9; // r10d
  __int64 v10; // r8
  _QWORD *v11; // r9
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+44h] [rbp-24h]
  int v20; // [rsp+4Ch] [rbp-1Ch]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v21 = 0LL;
  v3 = *(_QWORD *)(a1 + 352);
  __asm { rdsspq  rdi }
  v5 = 2;
  if ( (v3 == 1 || v3 == 2) && (_RDI & 7) == 0 )
  {
    v6 = **(_QWORD **)(a1 + 384);
    if ( v6 >= 0xFFFF800000000000uLL )
    {
      CurrentKernelShadowStackBounds = KiGetCurrentKernelShadowStackBounds(&v21);
      v8 = *(_QWORD *)(a1 + 216);
      v9 = CurrentKernelShadowStackBounds;
      v10 = *(_QWORD *)(a1 + 352);
      v11 = (_QWORD *)(v8 + 32);
      if ( v10 == 1 )
      {
        while ( (unsigned __int64)v11 < v21 )
        {
          if ( *v11 >= 0x10000uLL && *v11 == v6 )
          {
            v5 = (((int)VslKernelShadowStackAssist(0, v8, 0LL, (__int64)v11, 0LL, 4) >> 31) & 1) + 1;
            _InterlockedIncrement(&dword_140FC2328);
            return v5;
          }
          ++v11;
        }
      }
      v12 = 0LL;
      if ( (_BYTE)KiKernelCetAuditModeEnabled )
      {
        v13 = (KeGetCurrentThread()->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
        if ( _RDI >= v13 && _RDI <= v13 + 640 )
          v12 = _RDI + 2048;
        if ( (int)KiFixupControlProtectionKernelModeReturnMismatch(v9, v8, v6, v12, v10 == 2) >= 0 )
        {
          v14 = *(_DWORD *)(a1 + 352);
          v15 = *(_QWORD *)(a1 + 360);
          v5 = 1;
          v19 = 0LL;
          LOBYTE(v1) = v12 != 0;
          v18 = v14;
          v20 = v1;
          v17[0] = v15;
          v17[1] = v6;
          KiLogControlProtectionKernelModeReturnMismatch(1LL, v17);
        }
      }
    }
  }
  return v5;
}
