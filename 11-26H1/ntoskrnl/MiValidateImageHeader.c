/*
 * XREFs of MiValidateImageHeader @ 0x14099CC04
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 * Callees:
 *     MiWriteControlAreaFlags2 @ 0x1404AFA40 (MiWriteControlAreaFlags2.c)
 *     MiStrongCodeImage @ 0x140521118 (MiStrongCodeImage.c)
 *     SeValidateImageHeader @ 0x14099E0EC (SeValidateImageHeader.c)
 */

__int64 __fastcall MiValidateImageHeader(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 80);
  v4 = SeValidateImageHeader(
         *(_QWORD *)a1,
         a2,
         *(_DWORD *)(a1 + 104) << 12,
         *(_QWORD *)(a1 + 64),
         *(_DWORD *)(a1 + 72) << 12,
         a1 + 44,
         a1 + 34,
         (__int64)KeGetCurrentThread()->ApcState.Process,
         *(_QWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 28),
         (__int64)&v7,
         *(_BYTE *)(a1 + 32),
         *(_BYTE *)(a1 + 33),
         a1 + 35,
         a1 + 48);
  v5 = v4;
  *(_QWORD *)(a1 + 80) = v7;
  if ( v4 == 301 )
  {
    MiWriteControlAreaFlags2(v2, 0x20000, 0x20000, 0);
  }
  else if ( v4 != 302 )
  {
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 36) |= 1u;
LABEL_4:
  if ( (*(_DWORD *)(a1 + 36) & 1) != 0 )
    MiStrongCodeImage(v2, 1u);
  return v5;
}
