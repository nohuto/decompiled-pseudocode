/*
 * XREFs of ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1401AABD0
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401AA4B0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxEngSelectPaletteToSurface(struct _SURFOBJ *a1, HPALETTE a2)
{
  __int64 v4; // rdi
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // r8
  HDEV v7; // rax
  Gre::Base *v8; // rcx
  HDEV v9; // rbx
  HDEV hdev; // rsi
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  HDEV v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = Gre::Base::Globals((Gre::Base *)a1);
  LOBYTE(v6) = 8;
  v7 = (HDEV)HmgShareLock(v5, a2, v6, 0LL);
  v9 = v7;
  if ( a1 )
  {
    if ( v7 )
    {
      hdev = a1[1].hdev;
      a1[1].hdev = v7;
      v11 = Gre::Base::Globals(v8);
      INC_SHARE_REF_CNT(v11, v9);
      if ( hdev )
      {
        v4 = *(_QWORD *)hdev;
        v14 = hdev;
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v14);
      }
      goto LABEL_6;
    }
  }
  else if ( v7 )
  {
LABEL_6:
    v12 = Gre::Base::Globals(v8);
    DEC_SHARE_REF_CNT(v12, v9);
  }
  return v4;
}
