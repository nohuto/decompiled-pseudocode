/*
 * XREFs of ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ @ 0x18004BCB0
 * Callers:
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB14 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemBackdropVisual::GetCurrentBaseColor(CSystemBackdropVisual *this)
{
  DWORD v1; // r8d
  char v2; // al
  _BYTE *v4; // rax
  char v5; // cl
  DWORD v6; // [rsp+30h] [rbp+8h]

  v1 = 0;
  switch ( *((_DWORD *)this + 49) )
  {
    case 1:
      v4 = (_BYTE *)(*(__int64 (__fastcall **)(CSystemBackdropVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 192LL))(
                      this,
                      (unsigned int)(*((_DWORD *)this + 49) - 1),
                      0LL);
      HIBYTE(v6) = *v4;
      LOBYTE(v6) = v4[1];
      v5 = v4[2];
      v2 = v4[3];
      BYTE1(v6) = v5;
      goto LABEL_6;
    case 2:
      HIBYTE(v6) = *((_BYTE *)this + 200);
      LOWORD(v6) = *(_WORD *)((char *)this + 201);
      v2 = *((_BYTE *)this + 203);
LABEL_6:
      BYTE2(v6) = v2;
      return v6;
    case 3:
      return GetSysColor(5);
  }
  return v1;
}
