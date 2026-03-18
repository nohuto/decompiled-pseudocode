/*
 * XREFs of MiCloneNoChange @ 0x140961FAC
 * Callers:
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     PfpPartitionToParent @ 0x1404D5F40 (PfpPartitionToParent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiCloneNoChange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  _KPROCESS *v6; // r9
  char v7; // bl
  unsigned int v8; // ecx
  int v10; // esi
  __int64 v11; // rdi
  char v12; // r11
  __int64 v13; // rbx
  _OWORD v14[3]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  memset(v14, 0, sizeof(v14));
  while ( 1 )
  {
    if ( !v4 )
      return 0LL;
    if ( *(_WORD *)(v4 + 8) == 2 )
    {
      v5 = PfpPartitionToParent(v4 + 24);
      v7 = v5;
      if ( (v5 & 0x80u) == 0LL )
      {
        v8 = (v5 & 4) != 0 ? 0x80000000 : 0;
        if ( (v5 & 8) != 0 )
        {
          if ( (v5 & 4) == 0 && (v5 & 3) != 0 )
            goto LABEL_10;
          v8 |= 1u;
        }
        v10 = v8 | 0x20000000;
        if ( (v5 & 0x100) == 0 )
          v10 = v8;
        if ( v10 )
          break;
      }
    }
LABEL_10:
    v4 = *(_QWORD *)v4;
  }
  v11 = (v5 >> 5) & 1;
  KiStackAttachProcess(v6, 0, (__int64)v14);
  v12 = ((v7 & 0x20) != 0LL) | 4;
  if ( (v7 & 0x40) == 0 )
    v12 = v11;
  v13 = MiAddSecureEntry(
          a3,
          (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12,
          ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF,
          v10,
          v12);
  KiUnstackDetachProcess((__int64)v14, 0);
  return v13 == 0 ? 0xC000009A : 0;
}
