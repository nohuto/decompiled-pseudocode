/*
 * XREFs of ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x140082EB8
 * Callers:
 *     GreExtCreatePen @ 0x14008259C (GreExtCreatePen.c)
 *     NtGdiCreateHatchBrushInternal @ 0x1400845A0 (NtGdiCreateHatchBrushInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall hCreateHatchBrushInternal(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  _QWORD *v7; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+60h] [rbp-18h]

  v3 = 0LL;
  if ( a1 <= 0xB )
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)&v7, a2, a1, a3, 0);
    if ( v7 )
    {
      v9 = 1;
      v3 = *v7;
      v6 = Gre::Base::Globals(v4);
      DEC_SHARE_REF_CNT(v6, v7);
      if ( !v9 )
        bDeleteBrush(*v7, 0LL, 0LL);
      v7 = 0LL;
    }
    PopThreadGuardedObject(v8);
  }
  return v3;
}
