/*
 * XREFs of NtGdiEngCreatePalette @ 0x1401F0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400D6924 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x14033AC10 (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

HPALETTE __fastcall NtGdiEngCreatePalette(__int64 a1, __int64 a2, char *a3, FLONG a4, FLONG flGreen, FLONG a6)
{
  FLONG flBlue; // esi
  ULONG v9; // edi
  int v10; // ebp
  struct _GRETHREAD *CurrentThread; // rax
  HPALETTE v12; // rbx
  HANDLE v13; // r14
  unsigned int v14; // eax
  int Bits; // eax
  HPALETTE Palette; // rsi
  ULONG *v18; // r8
  HANDLE SecureHandle; // [rsp+38h] [rbp-4D0h] BYREF
  struct W32_PUSH_LOCK *v20[14]; // [rsp+40h] [rbp-4C8h] BYREF
  ULONG pulColors[256]; // [rsp+B0h] [rbp-458h] BYREF

  flBlue = a6;
  v9 = a2;
  v10 = a1;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20, CurrentThread);
  memset_0(pulColors, 0, sizeof(pulColors));
  v12 = 0LL;
  SecureHandle = 0LL;
  v13 = 0LL;
  if ( v9 > 0x10000 )
    goto LABEL_10;
  if ( (v10 & 0xFFFF7FFF) != 1 || !v9 )
    goto LABEL_13;
  v14 = 4 * v9;
  if ( v9 <= 0x100 )
  {
    Bits = bSafeReadBits(pulColors, a3, v14);
  }
  else
  {
    Bits = bSecureBits(a3, v14, &SecureHandle);
    v13 = SecureHandle;
  }
  Palette = (HPALETTE)Bits;
  if ( Bits )
  {
    flBlue = a6;
LABEL_13:
    v18 = (ULONG *)a3;
    if ( v9 <= 0x100 )
      v18 = pulColors;
    Palette = EngCreatePalette(v10 | 0x8000u, v9, v18, a4, flGreen, flBlue);
  }
  if ( v13 )
    MmUnsecureVirtualMemory(v13);
  v12 = Palette;
LABEL_10:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v20);
  return v12;
}
