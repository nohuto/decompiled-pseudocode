/*
 * XREFs of UserGetClientRgn @ 0x140287E68
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DCB5C (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x140301A98 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     CalcVisRgn @ 0x1400319F0 (CalcVisRgn.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

HRGN __fastcall UserGetClientRgn(__int64 a1, __int64 a2, int a3)
{
  _OWORD *v3; // rsi
  const struct tagWND *v5; // rax
  const struct tagWND *v6; // rbx
  unsigned int v7; // r9d
  HRGN v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v3 = (_OWORD *)a2;
  LOBYTE(a2) = 1;
  v5 = (const struct tagWND *)HMValidateHandleNoSecure(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( a3 )
      v7 = (4 * (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 4)) | 1;
    else
      v7 = 24;
    CalcVisRgn(&v9, (__int64)v5, v5, v7);
    *v3 = *(_OWORD *)(*((_QWORD *)v6 + 5) + 104LL);
  }
  return v9;
}
